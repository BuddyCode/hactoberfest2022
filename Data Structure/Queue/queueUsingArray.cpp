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
    cout << "Please enter your choice : ";
    cin >> ch;
    return ch;
}
void display(int queue[])
{
    if (front == -1)
    {
        cout << " ";
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl
         << endl;
}
void enqueue(int queue[], int num, int size)
{
    if (rear == size - 1)
    {
        cout << "No space" << endl;
        return;
    }

    queue[++rear] = num;
    if (front == -1)
    {
        front++;
    }
}
void dequeue(int queue[], int size)
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    front++;
}
int main()
{
    int size;
    cout << "Enter size of the queue" << endl;
    cin >> size;
    int queue[size];

    int choice = displayOptions();
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            int num;
            cout << "Enter number :";
            cin >> num;
            enqueue(queue, num, size);
            choice = displayOptions();
            break;
        case 2:
           
            dequeue(queue, size);
            choice = displayOptions();
            break;
        case 3:
            
            display(queue);
            choice = displayOptions();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    return 0;
}