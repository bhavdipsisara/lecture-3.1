#include<iostream>

using namespace std;

class Customer
{
	public:
		int id;
		char name[100];
		int age;
		char city[100];
		char mobile_number[10];
		int simcard_validity;
		char telecome_brand_name[100];
		void setData()
		{
			cout<<"Enter Customer id = ";
			cin>>id;
			cout<<"Enter Customer Name = ";
			cin>>name;
			cout<<"Enter Customer Age = ";
			cin>>age;
			cout<<"Enter Customer City = ";
			cin>>city;
			cout<<"Enter Customer Mobile_number = ";
			cin>>mobile_number;
			cout<<"Enter Customer Simcard_validity = ";
			cin>>simcard_validity;
			cout<<"Enter Customer Telecome_brand_name = ";
			cin>>telecome_brand_name;
		}
		void getData()
		{
			cout<<"Id = "<<id<<endl
				<<"Name = "<<name<<endl
				<<"Age = "<<age<<endl
				<<"City = "<<city<<endl
				<<"Mobile_name = "<<mobile_number<<endl
				<<"Simcard_validity = "<<simcard_validity<<endl
				<<"Telecome_brand_name = "<<telecome_brand_name<<endl;
				
		}
};
int main()
{	
	int n,i;
	cout<<"Enter Size of Array of Object = ";
	cin>>n;
	Customer e[n];
	
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