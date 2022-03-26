#include<iostream>
#define max 10
using namespace std;
class stack
{
    public:
    int s[max],top;
    stack()
    {
        top=-1;
    }
    friend stack operator +(stack,int);
    friend stack operator --(stack);
    friend ostream& operator <<(ostream &,stack);
};
stack operator +(stack s1,int n)
{
    if(s1.top==max-1)
        cout<<"Overflow";
    else
    {
        s1.s[++s1.top]=n;
    }
    return s1;
}
stack operator --(stack s1,int)
{
    int ele;
    if(s1.top==-1)
        cout<<"Underflow";
    else
    {
        ele=s1.s[s1.top--];
        cout<<"Deleted element is :-"<<ele;
    }
    return s1;
}
ostream& operator <<(ostream &print,stack s1)
{
    if(s1.top==-1)
        print<<"Underflow";
    else
    {
        for(int i=0;i<=s1.top;i++)
            print<<s1.s[i]<<" ";
    }
    return print;
}
int main()
{
    stack s1;
    int ele,ch;
    while(1)
    {
    cout<<"Enter 1 to push, 2 to pop, 3 to display, 4 to exit:-";
    cout<<"Enter choice:-";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"Enter element:-";
               cin>>ele;
               s1=s1+ele;
               break;
        case 2:s1=s1--;
               break; 
        case 3:cout<<s1;
               break; 
    }}
}