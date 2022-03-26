#include<iostream>
using namespace std;
class Student
{
    public:
    float m[3];
    string name,usn;
    void get();
    void calc();
    void print();
};
void Student::get()
{
    cout<<"Enter the student USN, name:-";
    cin>>usn>>name;
    cout<<"Enter 3 subject marks:-";
    for(int i=0;i<3;i++)
        cin>>m[i];
}
void Student::calc()
{
    float t;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            if(m[j]<m[j+1])
            {
                t=m[j];
                m[j]=m[j+1];
                m[j+1]=t;
            }
}
void Student::print()
{
    float average;
    average=(float)(m[0]+m[1])/2;
    cout<<usn<<"\t"<<name<<"\t"<<average<<"\n";
}
int main()
{
    Student s[10];
    for(int i=0;i<2;i++)
        s[i].get();
    for(int i=0;i<2;i++)
        s[i].calc();
    cout<<"USN\tName\tAverage\n";
    for(int i=0;i<2;i++)
        s[i].print();
    return 0;
}