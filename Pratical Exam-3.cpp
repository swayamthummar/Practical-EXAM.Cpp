#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	public:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		int rating_type;
		char website[100];
		
		void setdata(int id,char name[],int staff_size,int room_size,int establish_year,char address[],int rating_type,char website[])
		{
			this->id=id;
			strcpy(this->name,name);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			this->rating_type=rating_type;
			strcpy(this->website,website);
		}
		void getdata()
		{
			cout<<"Id ->"<<id<<endl
			<<"Name ->"<<name<<endl
			<<"Staff Size ->"<<staff_size<<endl
			<<"Room Size ->"<<room_size<<endl
			<<"Establish Year ->"<<establish_year<<endl
			<<"Address ->"<<address<<endl
			<<"Rating Type ->"<<rating_type<<endl
			<<"Website ->"<<website<<endl;
		}
};
main()
{
	Hotel h;
	h.setdata(1,"Fountain",50,60,1989,"Sarthana_Jakatnaka",5,"www.FountainResort.in");
	h.getdata();
}
