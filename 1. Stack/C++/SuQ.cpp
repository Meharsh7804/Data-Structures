// Stack implementation using Queue.
#include <iostream>
using namespace std;

int main(){
    // Assuming queue of integers only.
    int queue[10];
    int front=-1,rear=-1,choice=0,element,i;

    while (choice != 5)
    {
        cout << "Press '1' to add element to queue." << endl;
        cout << "Press '2' to remove element from queue." << endl;
        cout << "Press '3' to display queue." << endl;
        cout << "Press '4' to display stack." << endl;
        cout << "Press '5' to exit the program." << endl;
        cin >>choice;

        switch (choice)
        {
        case 1:
            //Add element to queue.
            cout << "Enter element to add" << endl;
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
            cout << element << " Queued." << endl;
            break;
        
        case 2:
            //Remove element from queue.
            element = queue[front];
            front++;
            cout << element << " Dequeued." << endl;
            break;
        
        case 3:
            //Display queue.
            cout << "------------------QUEUE-----------------" << endl;
            for(i=front; i<=rear; i++)
                cout << queue[i] << "\t" << endl;
            cout << "------------------END-----------------" << endl;
            break;
        
        case 4:
            //Display stack.
            cout << "------------------STACK-----------------" << endl;
            for(i=rear; i >= front; i--)
                cout << queue[i] << endl;
            cout << "------------------END-----------------" << endl;
            break;
        
        case 5:
            cout << "Exiting the program." << endl;
            return 0;
        default:
        cout << "Invalid choice." << endl;
            break;
        }
    }
    cout << "Thank You!" << endl;
}