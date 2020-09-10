using namespace std;
#include<iostream>
#include<string.h>
class file
{string name;
    public:
	
	float kb;
	int setyear,setmonth,setday;
	int changeyear,changemonth,changeday;	
	file(string name,float kb,int setyear,int setmonth,int setday,int changeyear,int changemonth,int changeday) 
    {
    	this->name=name;
    	this->kb=kb;
    	this->setyear=setyear;
    	this->setmonth=setmonth;
    	this->setday=setday;
    	this->changeyear=changeyear;
    	this->changemonth=changemonth;
    	this->changeday=changeday;
	}
	file()
{
	
}
	void show1()
	{
		cout<<"name:"<<name<<endl;
		cout<<"settime:"<<setyear<<"."<<setmonth<<"."<<setday<<endl;
		cout<<"changetime:"<<changeyear<<"."<<changemonth<<"."<<changeday<<endl;
		cout<<"ด๓ะก:"<<kb<<"kb"<<endl;
		
	}
	
};
class mediafile:public file
{
	private:
	string type;
	int playyear,playmonth,playday; 
	public:
	mediafile(string type,int playyear,int playmonth,int playday,string name,float kb,int setyear,int setmonth,int setday,int changeyear,int changemonth,int changeday):file( name, kb, setyear, setmonth, setday, changeyear, changemonth, changeday)
	{
		this->type=type;
		this->playyear=playyear;
		this->playmonth=playmonth;
		this->playday=playday;
		
    	this->name=name;
    	this->kb=kb;
    	this->setyear=setyear;
    	this->setmonth=setmonth;
    	this->setday=setday;
    	this->changeyear=changeyear;
    	this->changemonth=changemonth;
    	this->changeday=changeday;
	}
	void show2()
	{
		cout<<"type:"<<type<<endl;
		cout<<"lastplaytime:"<<playyear<<"."<<playmonth<<"."<<playday<<endl;	
	}
	
	 
};
int main()
{
	mediafile b("mp3",2020,1,3,"abc",21.3,2020,1,1,2020,1,2);
	b.show1();
	b.show2();
	
	return 0;
 } 
