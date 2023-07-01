#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		
	int id;
	char name[100];
	char role[100];
	int salary;
	char experience[100];
	char comp_name[100];
	char address[100];
	char email[100];
	char contact[15];
	
	void IN_1()
	{
		cout<<"Enter Employee Id-> ";
		cin>>id;
		cout<<"Enter Employee Name-> ";
		cin>>name;
		cout<<"Enter Employee Role-> ";
		cin>>role;
	}
};
class B : public A
{
	public :
		
	void IN_2()
	{
		cout<<"Enter Employee Salary-> ";
		cin>>salary;
		cout<<"Enter Employee Experience-> ";
		cin>>experience;
	}
};
class C : public B
{
	public :
		
	void display_1()
	{
		cout<<"Employee Name-> "<<name<<endl
		<<"Employee Role-> "<<role<<endl
		<<"Employee Salary-> "<<salary<<endl;
	}
	
	void display_2()
	{
		cout<<"Enter Employee Company Name-> ";
		cin>>comp_name;
		cout<<"Enter Employee Address-> ";
		cin>>address;
	}
};
class D : public C
{
	public :
		
	void display_3()
	{
		cout<<"Enter Employee Email Id-> ";
		cin>>email;
		cout<<"Enter Employee Contact No-> ";
		cin>>contact;
	    cout<<"---------------------------------------"<<endl<<endl;
	}
	void display_4()
	{
		cout<<"Employee Id-> "<<id<<endl;
		cout<<"Employee Experience-> "<<experience<<endl
		<<"Employee Company Name-> "<<comp_name<<endl
		<<"Employee Address-> "<<address<<endl
		<<"Employee Email-> "<<email<<endl
		<<"Employee Contact No-> "<<contact<<endl;	
	}
};
main()
{
	D d;
	
	d.IN_1();
	d.IN_2();
	d.display_1();
	d.display_2();
	d.display_3();
	d.display_4();
}
