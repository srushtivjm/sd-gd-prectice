#include<iostream>
using namespace std;
class Student
{
	private:
	int id;
	char name[100];
	int std;
	char ph_no[100];
	char add[100];
	
	public:
	void setData()
	{
		cout<<"Enter Student Id=";
		cin>>id;
		cout<<"Enter Student Name=";
		cin>>name;
		cout<<"Enter Student Standred=";
		cin>>std;
		cout<<"Enter Contect number=";
		cin>>ph_no;
		cout<<"Enter Address=";
		cin>>add;
		cout<<endl;
	}
	
	void getData()
	{
	    cout<<"Id ="<<id<<endl;
		cout<<"Name ="<<name<<endl;
		cout<<"Standred ="<<std<<endl;
		cout<<"Contect number ="<<ph_no<<endl;
		cout<<"Address ="<<add<<endl;	
	}
};
	main()
	{
		Student s1,s2,s3,s4,s5;
		s1.setData();
		s2.setData();
		s3.setData();
		s4.setData();
		s5.setData();
		cout<<"-------------------------------"<<endl;
		s1.getData();
		s2.getData();
		s3.getData();
		s4.getData();
		s5.getData();
	}
		

