#include<iostream>
#include<fstream>
using namespace std;
int n;
class student
{
	public:
	string name,g;
	int age;
	float height,weight;
	void read();
	void write();
};
void student::write()
{
	ofstream fin("record.txt");
	cout<<"Enter number of students:-";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Student name,gender,age,height,weight:-\n";
		cin>>name>>g>>age>>height>>weight;
		fin<<name<<" "<<g<<" "<<age<<" "<<height<<" "<<weight<<"\n";
	}
	fin.close();
}
void student::read()
{
	string line;
	ifstream fout("record.txt");
	for(int i=0;i<n;i++)
	{	
		getline(fout,line);
		cout<<line<<"\n";
	}
	fout.close();
}
int main()
{
	student s;
	s.write();
	s.read();
	return 0;
}