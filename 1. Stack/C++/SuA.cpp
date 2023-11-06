// Stack implementation using an array.
#include <iostream>
using namespace std;


int main(){
    //Considering array of integers only.
    int array[10];
    int choice=0,TOS=-1,element,i;

    while (choice != 5)
    {
        cout << "Press '1' to add element to array." << endl;
        cout << "Press '2' to remove element from array." << endl;
        cout << "Press '3' to display array." << endl;
        cout << "Press '4' to display stack." << endl;
        cout << "Press '5' to exit the program." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        //Add element to array.
            cout << "Enter element to add." << endl;
            cin >> element;
            TOS++;
            array[TOS] = element;
            break;
        
        case 2:
        //Remove element from array.
            element = array[TOS];
            TOS--;
            cout << element << "removed."<< endl;
            break;

        case 3:
        //Display Array.
        cout << "---------------PRINTING ARRAY---------------" << endl;
            for(i=0; i<=TOS; i++){
                cout << array[i] << " ";
            }
            cout << endl;
            cout << "----------------END OF ARRAY----------------" << endl;
            break;

        case 4:
        //Display Stack.
        cout << "---------------PRINTING STACK---------------" << endl;
            for(i=TOS; i>=0; i--){
                cout << array[i] << endl;
            }
            cout << "----------------END OF STACK-----------------" << endl;
            break;

        case 5:
        //Exiting Program.
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
    cout << "Thank You \n" << endl;
}