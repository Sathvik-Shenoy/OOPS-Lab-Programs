#include<iostream>
using namespace std;
class matrix
{
	public:
	int m[20][20],r,c;
	void get()
	{
		cout<<"Enter rows and column of matrix:-";
		cin>>r>>c;
		cout<<"Enter elements of matrix:-";
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cin>>m[i][j];
	}
	friend matrix operator +(matrix,matrix);
	friend matrix operator -(matrix,matrix);
	friend ostream& operator <<(ostream&,matrix);
};
matrix operator +(matrix m1,matrix m2)
{
	matrix m3;
	m3.r=m1.r;	m3.c=m1.c;
	for(int i=0;i<m1.r;i++)
		for(int j=0;j<m1.c;j++)
			m3.m[i][j]=m1.m[i][j]+m2.m[i][j];
	return m3;
}
matrix operator -(matrix m1,matrix m2)
{
	matrix m4;
	m4.r=m1.r;	m4.c=m1.c;
	for(int i=0;i<m1.r;i++)
		for(int j=0;j<m1.c;j++)
			m4.m[i][j]=m1.m[i][j]-m2.m[i][j];
	return m4;
}
ostream& operator <<(ostream& print,matrix m1)
{
	for(int i=0;i<m1.r;i++)
	{	
		for(int j=0;j<m1.c;j++)
			print<<m1.m[i][j]<<" ";
		print<<"\n";
	}
	return print;
}
bool operator ==(matrix m1,matrix m2)
{
	if(m1.r==m2.r && m1.c==m2.c)
		return true;
	else
		return false;
}
int main()
{
	matrix m1,m2,m3,m4;
	m1.get();
	m2.get();
	if(m1==m2){
	m3=m1+m2;
	m4=m1-m2;
	cout<<m3;
	cout<<m4;
	}
	else
		cout<<"Matrix addition and subtraction is not possible\n";
	return 0;
}
	