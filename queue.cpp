// queue using array

#include<bits/stdc++.h>
using namespace std;

// class Queue
// {
//     int front, rear, size;
//     int *arr;
//     public:

//     Queue(int s)
//     {
//         size = s;
//         rear = front = -1;
//         arr = new int(size);
//     }

//     void enqueue(int x);
//     int dequeue();
//     bool isempty();
//     bool isfull();
//     int first();
//     int last();
//     void printqueue();
// };

// void Queue::enqueue(int x)
// {
//     if(!isfull())
//     {
//         rear += 1;
//         arr[rear] = x;
//     }
//     else
//     {
//         cout << "Queue is Full, Cannot insert new element." << endl;
//     }
// }

// int Queue::dequeue()
// {
//     if(!isempty())
//     {
//         front += 1;
//         return arr[front];
//     }
//     else
//     {
//         cout << "Queue is Empty, Cannot delete element." << endl;
//     }
// }

// bool Queue::isempty()
// {
//     return front == rear;
// }

// bool Queue::isfull()
// {
//     return rear == size - 1;
// }

// int Queue::first()
// {
//     return arr[front + 1];
// }

// int Queue::last()
// {
//     return arr[rear];
// }

// void Queue::printqueue()
// {
//     while(!isempty())
//     {
//         cout << dequeue() << " ";
//     }
// }

int main()
{
    queue <int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.pop();
    q.pop();
    cout << q.front() << " first" << endl;
    cout << q.back() << " last" << endl;
}