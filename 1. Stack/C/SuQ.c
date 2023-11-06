// Stack implementation using Queue.

#include<stdio.h>
#define MAX 10

int main(){
// Assuming queue of integers only.
    int queue[MAX];
    int front=-1,rear=-1,choice=0,element,i;

    while (choice != 5)
    {
        printf("Press '1' to add element to queue.\n");
        printf("Press '2' to remove element from queue.\n");
        printf("Press '3' to display queue.\n");
        printf("Press '4' to display stack.\n");
        printf("Press '5' to exit the program.\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            //Add element to queue.
            printf("Enter element to add\n");
            scanf("%d",&element);
            if(front == -1 && rear == -1){
                front++;
                rear++;
                queue[rear] = element;
            }
            else{
                rear++;
                queue[rear] = element;
            }
            printf("%d Queued\n",element);
            break;
        
        case 2:
            //Remove element from queue.
            element = queue[front];
            front++;
            printf("%d Dequeued\n",element);
            break;
        
        case 3:
            //Display queue.
            printf("------------------QUEUE-----------------\n");
            for(i=front; i<=rear; i++)
                printf("%d\t",queue[i]);
            printf("\n");
            printf("------------------END-----------------\n");
            break;
        
        case 4:
            //Display stack.
            printf("------------------STACK-----------------\n");
            for(i=rear; i >= front; i--)
                printf("%d\n",queue[i]);
            printf("------------------END-----------------\n");
            break;
        
        case 5:
            printf("Exiting the program.\n");
            return 0;
        default:
        printf("Invalid choice.\n");
            break;
        }
    }
    printf("Thank You!\n");
}