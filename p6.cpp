#include<iostream>
#define max 10
using namespace std;
int q[max],front=-1,rear=-1;
class queue
{
    public:
    void enqueue();
    void dequeue();
};
void queue::enqueue()
{
    int ele;
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
void queue::dequeue()
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
void display()
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
    queue l;
    int ch;
    while(1){
    cout<<"\nEnter 1 for enqueue, 2 for dequeue, 3 to display, 4 to exit:-";
    cin>>ch;
    switch(ch)
    {
        case 1:l.enqueue();
               break; 
        case 2:l.dequeue();
               break;
        case 3:display();
               break;
        case 4:exit(0);
        default:cout<<"Invalid entry";
                break;  
    }}
}