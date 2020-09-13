#include<iostream>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
	public:
		Date(int y,int m,int d)
		: year(y),month(m),day(d){}
		Date()
		{
			time_t ltime = time(NULL);
			tm * today = localtime(&ltime);
			year = today -> tm_year + 1900;
			month = today -> tm_mon + 1;
			day = today -> tm_mday;
		}
		Date(const Date &d)
		: year(d.year),month(d.month),day(d.day){}
		Date & operator=(const Date & d){
			year = d.year;
			month = d.month;
			day = d.day;
			return *this;
		}
		~Date(){}
		void setYear(int year){this->year = year;}
		void setMonth(int month){this->month = month;}
		void setDay(int day){this->day = day;}
		int getYear(){return year;}
		int getMonth(){return month;}
		int getDay(){return day;}
		bool isLeapYear()
		{
			return year%400 == 0 || year%4 == 0 && year%100 != 0;
		}
		void print(){
			cout<<year<<"."<<month<<"."<<day;
		}
};
class File{
	protected:
		string name;
		float size;
		Date create_date,modify_date;
	public:
		File(Date create ,Date modify ,string name,float size)
			:name("untitled"),size(0)
			{
				this->name = name;
				this->size = size;
				this->create_date = create;
				this->modify_date = modify;
			}
		File(){this->name = "untitled";this->size = 0;}
		File& operator=(File const &f){
			this->create_date = f.create_date;
			this->name = f.name;
			this->size = f.size;
			this->modify_date = f.modify_date;
			return *this;
		}
		void print(){
			cout<<this->name<<' '<<this->size<<"Mb"<<endl;
			create_date.print();
			cout<<" ";
			modify_date.print();
		}
		void setName(string name){
			this->name = name;
		}
		void setSize(int size){
			this->size = size;
		}
		void setCreateDate(Date date){
			this->create_date = date;
		}
		void setModifyDate(Date date){
			this->modify_date = date;
		}
};
enum Format{
			WAVE,AIFF,AMR,CD,MP3,
			AVI,MOV,WMV,MPEG,ASF,UNKNOWN
};
class MediaFile:public File{
	private:
		Format format;
		int played_time;
	public:
		
		MediaFile(Date create = {0,0,0},Date modify = {0,0,0},string name = "untitled",float size = 0
				,Format format = UNKNOWN,int played_time = 0)
			:File(create,modify,name,size)
			{
				this->format = format;
				this->played_time = played_time;
			}
};
int main()
{
	File file1(Date(),Date(),"str.jpg",1);
	file1.print();
	File file2(file1);
	MediaFile mediafile(Date(),Date(),"123",322,AVI,542);
}
