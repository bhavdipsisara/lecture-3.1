#include<iostream>

using namespace std;

class Employee
{
	public:
		int id;
		char name[100];
		int age;
		char course[100];
		char city[100];
		char email[100];
		char college[100];
		void setData()
		{
			cout<<"Enter Employee id = ";
			cin>>id;
			cout<<"Enter Employee Name = ";
			cin>>name;
			cout<<"Enter Employee Age = ";
			cin>>age;
			cout<<"Enter Employee Course = ";
			cin>>course;
			cout<<"Enter Employee City = ";
			cin>>city;
			cout<<"Enter Employee Email = ";
			cin>>email;
			cout<<"Enter Employee College = ";
			cin>>college;
		}
		void getData()
		{
			cout<<"Id = "<<id<<endl
				<<"Name = "<<name<<endl
				<<"Age = "<<age<<endl
				<<"Course = "<<course<<endl
				<<"City = "<<city<<endl
				<<"Email = "<<email<<endl
				<<"College = "<<college<<endl;
				
		}
};
int main()
{	
	int n,i;
	cout<<"Enter Size of Array of Object = ";
	cin>>n;
	Employee e[n];
	
	for(i=0;i<n;i++)
	{
		e[i].setData();
	}
	
	for(i=0;i<n;i++)
	{
		e[i].getData();
	}
	
	return 0;
}