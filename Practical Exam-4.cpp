#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	public :
		void set()
		{
			cout<<"Employee Name is Swayam"<<endl<<endl;
		}
		
		void set(int id)
		{
			cout<<"Swayam's Id is -"<<id<<endl<<endl;
		}
		
		void set(char exp[],int b)
		{
			cout<<"Swayam has experience of "<< exp <<endl<<endl<< "He is "<< b <<" years old"<<endl<<endl;
		}
		
		void set(char a[],char s[])
		{
			cout<<"He is Brilliant in "<< a <<endl<<endl<<"his salary is "<< s <<endl;
		}
};
main()
{
   Employee e;
	
	e.set();
	e.set(1);
	e.set("2 years",21);
	e.set("Programming","80,000");
	
}
