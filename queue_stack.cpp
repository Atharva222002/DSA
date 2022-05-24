// Queue using 2 stacks

#include<bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;
    public:
    void enqueue(int n);
    int dequeue();
    int front();
};

void Queue::enqueue(int n)
{
    s1.push(n);
}

int Queue::dequeue()
{
    if(!s2.empty())
    {
        int poped = s2.top();
        s2.pop();
        return poped;
    }
    while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    int poped = s2.top();
    s2.pop();
    return poped;
}

int Queue::front()
{
    if(s2.empty())
    {
        while(!s1.empty()) 
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
    return s2.top();
}

int main()
{
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    cout<<queue.front()<<endl;
    cout<<queue.dequeue()<<endl;
    cout<<queue.front()<<endl;
    cout<<queue.dequeue()<<endl;
    cout<<queue.front()<<endl;
    cout<<queue.dequeue()<<endl;
    cout<<queue.front()<<endl;
}