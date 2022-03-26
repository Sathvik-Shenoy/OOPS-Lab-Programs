#include<iostream>
using namespace std;
class Employee
{
    public:int empno;
    float da,it,netsal,basic;
    string name;
    void get();
    void calc();
    void print();
};
void Employee::get()
{
    cout<<"Enter the employee number, name, basic salary:-";
    cin>>empno>>name>>basic;
}
void Employee::calc()
{
    float gross;
    da=0.52*basic;
    gross=basic+da;
    it=0.3*gross;
    netsal=gross-it;
}
void Employee::print()
{
    cout<<empno<<"\t\t"<<name<<"\t"<<basic<<"\t"<<netsal<<"\n";
}
int main()
{
    int n;
    cout<<"Enter number of employees:-";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++)
        e[i].get();
    for(int i=0;i<n;i++)
        e[i].calc();
    cout<<"Employee number\tName\tBasic\tNet Salary\n";
    for(int i=0;i<n;i++)
        e[i].print();
    return 0;
}