#include<iostream>
using namespace std;
class student
{
    public:
    int usn,age;
    string name;
};
class ug:public student
{
    public:
    int sem;
    float fees,sti;
    void get1();
};
void ug::get1()
{
    cout<<"Enter student USN, age, name, sem, fees, stifund:-";
    cin>>usn>>age>>name>>sem>>fees>>sti;;
}
class pg:public student
{
    public:
    int sem;
    float fees,sti;
    void get2();
};
void pg::get2()
{
    cout<<"Enter student USN, age, name, sem, fees, stifund:-";
    cin>>usn>>age>>name>>sem>>fees>>sti;;
}
int main()
{
    int n1,n2,i,j,c;
    float s=0;
    cout<<"Enter number of UG students:-";
    cin>>n1;
    cout<<"Enter number of PG students:-";
    cin>>n2;
    ug u[n1];
    pg p[n2];
    cout<<"Enter the details of UG students\n";
    for(i=0;i<n1;i++)
        u[i].get1();
    cout<<"Enter the details of PG students\n";
    for(i=0;i<n2;i++)
        p[i].get2();
    for(i=1;i<=8;i++)
    {
        c=0; s=0;
        for(j=0;j<n1;j++)
            if(u[j].sem==i)
            {
                s=s+u[j].age;
                c++;
            }
            if(s==0 && c==0)
                cout<<"The average of sum of "<<i<<" semester UG students is 0\n";
            else
                cout<<"The average of sum of "<<i<<" semester UG students is "<<(float)s/c<<"\n";
    }
    for(i=1;i<=8;i++)
    {
        c=0; s=0;
        for(j=0;j<n2;j++)
            if(p[j].sem==i)
            {
                s=s+p[j].age;
                c++;
            }
            if(s==0 && c==0)
                cout<<"The average of sum of "<<i<<" semester PG students is 0\n";
            else
                cout<<"The average of sum of "<<i<<" semester PG students is "<<(float)s/c<<"\n";
    }
}