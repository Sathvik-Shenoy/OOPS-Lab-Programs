#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
	node *prev;
}*nextnode,*newnode,*temp,*head=NULL;
class dlist
{
	public:
	void insert();
	void del();
};
void create()
{
	int ch=1;
	while(ch==1)
	{
		newnode=new node;
		newnode->next=NULL;
		newnode->prev=NULL;
		cout<<"Enter data:-";
		cin>>newnode->data;
		if(head==NULL)
			head=temp=newnode;
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=temp->next;
		}
		cout<<"Enter 1 to continue, 0 to exit:-";
		cin>>ch;
	}
}	
void dlist::insert()
{
	int pos,i=1;
	cout<<"Enter the position:-";
	cin>>pos;
	temp=head;
	if(pos==1)
	{
		cout<<"Enter data:-";
		newnode= new node;
		cin>>newnode->data;
		newnode->next=head;
		newnode->prev=NULL;
		head->prev=newnode;
		head=newnode;
	}
	else{	
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	cout<<"Enter data:-";
	newnode= new node;
	cin>>newnode->data;
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
}}
void dlist::del()
{
	int pos,i=1;
	cout<<"Enter position:-";
	cin>>pos;
	temp=head;
	if(pos==1)
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		delete temp;
	}
	else{
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	//nextnode->next->prev=temp;
	delete nextnode;
}}
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
    int ch;
    dlist l;
    create();
    while(1){
    cout<<"\nEnter 1 to insert at position, 2 to delete at position, 3 to display, 4 to exit:-";
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