#include<iostream>
using namespace std;
class publication
{
    public:string title;
    void print();
};
class book:public publication
{
    public:float accno;
    void print()
    {
        cout<<"Accession number is \n"<<accno;
    }
};
class magazine:public publication
{
    public:int volno;
    void print()
    {
        cout<<"Volume number is "<<volno;
    }
};
class journal:public book,public magazine
{
    public:
    void print();
};
int main()
{
    journal IEEEOOP;
    IEEEOOP.accno=681.3;
    IEEEOOP.volno=1;
    IEEEOOP.book::print();
    IEEEOOP.magazine::print();
    return 0;
}