#include<iostream>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
class date
{
    public:
    int dd,mm,yy;
    void get();
    friend date operator +(date,int);
    friend int operator -(date,date);
};
void date::get()
{
    cout<<"Enter date,month,year:-";
    cin>>dd>>mm>>yy;
}
date operator +(date d1,int n)
{
    for(int i=0;i<n;i++){
    d1.dd++;
    if(d1.yy % 4==0)
    {
        if(d1.dd>b[d1.mm])
        {
            d1.dd=1;
            d1.mm++;
        }
    }
    else
    {
        if(d1.dd>a[d1.mm])
        {
            d1.dd=1;
            d1.mm++;
        }
    }
    if(d1.mm>12)
    {
        d1.mm=1;
        d1.yy++;
    }
    }
    return d1;
}
int operator -(date d1,date d2)
{
    int nod=0;
    while(d1.dd!=d2.dd || d1.mm!=d2.mm || d1.yy!=d2.yy)
    {
        nod++;
        d2.dd++;
        if((d2.yy % 4==0 && d2.mm==2)?d2.dd>29:d2.dd>a[d2.mm])
        {
            d2.dd=1;
            d2.mm++;
        }
        if(d2.mm>12)
        {
            d2.mm=1;
            d2.yy++;
        }
    }
    return nod;
}
ostream& operator <<(ostream &print,date d1)
{
    print<<d1.dd<<"/"<<d1.mm<<"/"<<d1.yy;
    return print;
}
int main()
{
    int n,nod;
    date d1,d2,d3;
    d1.get();
    d2.get();
    cout<<"Enter the integer:-";
    cin>>n;
    d3=d1+n;
    nod=d1-d2;
    cout<<"Date after adding is\n";
    cout<<d3;
    cout<<"\nNumber of days is:-"<<nod;
}