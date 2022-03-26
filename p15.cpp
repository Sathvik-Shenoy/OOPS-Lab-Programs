#include<iostream>
using namespace std;
template <class T>
int PARTITION(T a[],int l,int h)
{
	T pivot=a[l];
	T t;
	int i=l;
	int j=h;
	do
	{
		do{
			i++;
		}while(a[i]<=pivot);
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}while(i<j);
	t=a[l];
	a[l]=a[j];
	a[j]=t;
	return j;
}
template <class T>
void QUICKSORT(T a[],int l,int h)
{
	int j;
	if(l<h)
	{
		j=PARTITION(a,l,h);
		QUICKSORT(a,l,j);
		QUICKSORT(a,j+1,h);
	}
}
int main()
{
	int a[20];
	double b[20];
	int n,l=0,h;
	cout<<"Enter number of elements for array:-";
	cin>>n;
	h=n;
	cout<<"Enter elements for int array:-";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter elements for double array:-";
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	QUICKSORT <int>(a,l,h);
	QUICKSORT <double>(b,l,h);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
	return 0;
}