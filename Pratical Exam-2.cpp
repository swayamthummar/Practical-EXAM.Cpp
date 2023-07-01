#include<iostream>
using namespace std;

class Time
{
	public:
		int hr;
		int min;
		int sec;
	
};
main()
{
	Time t;
	
	cout<<"Enter Time in seconds->";
	cin>>t.sec;
	
	t.hr=t.sec/3600;
	t.min=(t.sec%3600)/60;
	t.sec=(t.sec%3600)%60;
	
	cout<<"Time ->"<<t.hr<<":"<<t.min<<":"<<t.sec;
}
