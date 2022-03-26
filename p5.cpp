#include<iostream>
using namespace std;
int i,j,a[100];
class sort
{
    public:
    //void swap(int *,int *);
    int partition(int [],int ,int);
    void quicksort(int [],int,int);
};
/*void sort::swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}*/
int sort::partition(int a[],int l,int h)
{
    int pivot=a[l],t;
    i=l;
    j=h;
    while(i<j)
    {
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    t=a[l];
    a[l]=a[j];
    a[j]=t;
    return j;
}
void sort::quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}
int main()
{
    int n,i,l,h;
    cin>>n;
    sort s;
    l=0;
    h=n-1;
    for(i=0;i<n;i++)
        cin>>a[i];
    s.quicksort(a,l,h);
    cout<<"Sorted array is ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}