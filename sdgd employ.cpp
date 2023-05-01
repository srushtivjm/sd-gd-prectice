#include<iostream>
using namespace std;
class Employ
{
	private:
	int id;
	char name[100];
	char com_name[100];
	int selery;
	char add[100];
	
	public:
	void setData()
	{
		cout<<"Enter Id =";
		cin>>id;
		cout<<"Enter name =";
		cin>>name;
		cout<<"Enter company name =";
		cin>>com_name;
		cout<<"Enter selery =";
		cin>>selery;
		cout<<"Enter address =";
		cin>>add;
		cout<<endl;
	}
	void getData()
	{
		cout<<"Id ="<<id<<endl;
		cout<<"Name ="<<name<<endl;
		cout<<"Company name ="<<com_name<<endl;
		cout<<"Selery ="<<selery<<endl;
		cout<<"Address ="<<add<<endl;
		cout<<endl;
	}
};
main()
{
	Employ e1,e2,e3,e4,e5;
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	cout<<"------------------------"<<endl;
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
	
}
