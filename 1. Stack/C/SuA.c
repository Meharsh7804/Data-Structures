// Stack implementation using an array.
#include <stdio.h>
#define MAX 10

int main(){
    //Considering an array of integers only.
    int array[MAX];
    int choice=0,TOS=-1,element,i;

    while (choice != 5)
    {
        printf("Press '1' to add element to array.\n");
        printf("Press '2' to remove element from array.\n");
        printf("Press '3' to display array.\n");
        printf("Press '4' to display stack.\n");
        printf("Press '5' to exit the program.\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        //Add element to array.
            printf("Enter element to add.\n");
            scanf("%d",&element);
            TOS++;
            array[TOS] = element;
            break;
        
        case 2:
        //Remove element from array.
            element = array[TOS];
            TOS--;
            printf("%d removed.\n",element);
            break;

        case 3:
        //Display Array.
        printf("---------------PRINTING ARRAY---------------\n");
            for(i=0; i<=TOS; i++){
                printf("%d ",array[i]);
            }
            printf("\n");
            printf("----------------END OF ARRAY----------------\n");
            break;

        case 4:
        //Display Stack.
        printf("---------------PRINTING STACK---------------\n");
            for(i=TOS; i>=0; i--){
                printf("%d \n",array[i]);
            }
            break;
            printf("----------------END OF STACK-----------------\n");

        case 5:
        //Exiting Program.
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid Choice");
            break;
        }
    }
    printf("Thank You \n");
}