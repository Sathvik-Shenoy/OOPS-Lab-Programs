#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node * next;
}*head,*newnode,*temp;
class list
{
    public:void insert();
    void del();
};
void list::insert()
{
    newnode = new struct node;
    cout<<"Enter the data:-";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL)
        head=temp=newnode;
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void list::del()
{
    if(head==NULL)
        cout<<"No nodes are present";
    else
    {
        temp=head;
        head=head->next;
        delete temp;
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    int ch;
    list l;
    while(1){
    cout<<"\nEnter 1 to insert at beginning, 2 to delete at beginning, 3 to display, 4 to exit:-";
    cin>>ch;
    switch(ch)
    {
        case 1:l.insert();
               break; 
        case 2:l.del();
               break;
        case 3:display();
               break;
        case 4:exit(0);
        default:cout<<"Invalid entry";
                break;  
    }}
}