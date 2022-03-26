#include<iostream>
using namespace std;
class rectangle
{
    public:
    float l,b;
    rectangle(float L, float B)
    {
        l=L;
        b=B;
    }
    void area()
    {
        cout<<"Area of rectangle is "<<l*b;
    }
    ~rectangle()
    {
        cout<<"\nDestructor invoked";
    }
};
void global()
{
    float l,b;
    cout<<"Enter the length and breadth:-";
    cin>>l>>b;
    rectangle r1(l,b);
    r1.area();
}
int main()
{
    global();
    return 0;
}