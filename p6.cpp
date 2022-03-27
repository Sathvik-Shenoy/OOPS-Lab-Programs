#include<iostream>
#define max 50
using namespace std;
template <class T>
class queue
{
    public:
    T q[max];
    int front=-1,rear=-1;
    void enqueue();
    void dequeue();
    void display();
};
template <class T>
void queue<T>::enqueue()
{
    T ele;
    cout<<"Enter the element:-";
    cin>>ele;
    if(front==-1 && rear ==-1)
    {
        front=rear=0;
        q[rear]=ele;
    }
    else if(rear==max-1)
        cout<<"Queue overflow";
    else
    {
        q[++rear]=ele;
    }
}
template <class T>
void queue<T>::dequeue()
{
    if(front==rear)
    {
        cout<<"Deleted element is "<<q[front];
        front=-1;
        rear=-1;
    }
    if(front==-1&&rear==-1)
        cout<<"Queue underflow";
    else
    {
        cout<<"Deleted element is "<<q[front++];
    }
}
template <class T>
void queue<T>::display()
{
    if(front==-1)
        cout<<"Queue underflow";
    else
    {
        int i;
        for(i=front;i<=rear;i++)
            cout<<q[i]<<" ";
    }
}
int main()
{
    int ch;
    queue <int>q;
    queue <double>q1;
    while(1){
    cout<<"\nEnter 1 to enqueue integer queue, 2 to dequeue integer queue, 3 to display integer queue,Enter 4 to enqueue double queue, 5 to dequeue double queue, 6 to display double queue, 7 to exit:-";
    cin>>ch;
    switch(ch)
    {
        case 1:q.enqueue();
               break;
        case 2:q.dequeue();
               break;
        case 3:q.display();
               break;
        case 4:q1.enqueue();
               break;
        case 5:q1.dequeue();
               break;
        case 6:q1.display();
               break;
        case 7:exit(0);      
    }
}}