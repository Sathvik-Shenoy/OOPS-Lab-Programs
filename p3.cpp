#include<iostream>
using namespace std;
class complex
{
    public:
    float real,imag;
    void get();
    complex add(int,complex);
    complex add (complex,complex);
    void print();
};
void complex::get()
{
    cout<<"Enter the real and complex part:-";
    cin>>real>>imag;
}
complex complex::add(int a, complex s2)
{
    complex s3;
    s3.real=a+s2.real;
    s3.imag=s2.imag;
    return s3;
}
complex complex::add(complex s1, complex s2)
{
    complex s3;
    s3.real=s1.real+s2.real;
    s3.imag=s1.imag+s2.imag;
    return s3;
}
int main()
{
    int a;
    cout<<"Enter the integer:-";
    cin>>a;
    complex s1,s2,s3;
    s1.get();
    s2.get();
    s3=s3.add(a,s2);
    cout<<"The result is "<<s3.real<<"+"<<s3.imag<<"i\n";
    s3=s3.add(s1,s2);
    cout<<"The result is "<<s3.real<<"+"<<s3.imag<<"i";
    return 0;
}