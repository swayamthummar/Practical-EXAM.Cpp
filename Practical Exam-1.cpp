#include<iostream>
using namespace std;

class Distance
{
	public:
	
	int feet,inch;
};
main()
{
	Distance d,d1,d2;
	
     cout<<"Enter Distabce 1,in Feet ->";
	 cin>>d1.feet;
	 cout<<"Enter Distance 1,in Inches ->";
	 cin>>d1.inch;
	 
	cout<<"Enter Distabce 2,in Feet ->";
	 cin>>d2.feet;
	 cout<<"Enter Distance 2,in Inches ->";
	 cin>>d2.inch;
	 
	 d.feet=d1.feet+d2.feet;
	 d.inch=d1.inch+d2.inch;
	 
	 for(d.inch;d.inch>=12;d.feet++)
	 {
	 	d.inch=d.inch-12;
	 }
	 
	 cout<<"Total Distance ->"<<d.feet<<"."<<d.inch;	
}
