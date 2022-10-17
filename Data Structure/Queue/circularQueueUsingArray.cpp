// the major drawback with the quueu is the inefficient usage of space defined during compiulation
#include <iostream>
using namespace std;
int front = -1;
int rear = -1;
int displayOptions()
{
    int ch;
    cout << "1.Enqueue" << endl;
    cout << "2.Dequeue" << endl;
    cout << "3.Display" << endl;
    cout << "4.Exit" << endl;
    cout << "Enter your choice" << endl;
    cin >> ch;
    return ch;
}
void dequeue(int queue[], int size)
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    // queue[front]="";
    front++;
}
void enqueue(int num, int queue[], int size)
{
    if (front == -1 && rear == -1)
    {
        queue[++rear] = num;
        front++;
        return;
    }
    else if (front == 0 && rear == size - 1)
    {
        cout << "No space" << endl;
        return;
    }
    else if (front - rear == 1)
    {
        cout << "No space" << endl;
        return;
    }
    else if (front > 0 && rear == size - 1)
    {
        queue[(rear + 1) % size] = num;
        rear = (rear + 1) % size;
        return;
    }
    else if (front >= 0 && rear < size - 1)
    {
        queue[++rear] = num;
        return;
    }
}

void display(int queue[], int size)
{
    // for (int i = front; i <= rear; i++)
    // {
    //     cout << " " << queue[i];
    // }
    // cout << endl;
    int i = front;
    while (i != rear)
    {
        cout << queue[i] << " ";
        i = (i + 1) % size;
    }
    
    cout <<queue[i]<< endl;
}
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int circularQ[size];
    int choice = displayOptions();

    while (choice < 4)
    {
        switch (choice)
        {
        case 1:
            int num;
            cout << "Enter number - ";
            cin >> num;
            enqueue(num, circularQ, size);
            choice = displayOptions();
            break;
        case 2:
            // int num;
            // cout << "Enter number - ";
            // cin >> num;
            dequeue(circularQ, size);
            choice = displayOptions();
            break;
        case 3:
            display(circularQ, size);
            choice = displayOptions();
            break;

        default:
            choice = displayOptions();
            break;
        }
    }

    return 0;
}
