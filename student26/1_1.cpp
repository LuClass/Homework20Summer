#include<iostream>
using namespace std;

enum color
{
	white=1,black=2,yellow=3,unknown=4
};

class cat
{
	private:
		int age,weight;
		color c;
	public:
		cat(){age=0,weight=0,c=unknown;}
		cat(int age,int weight,color c)
		{
			this->age=age;
			this->weight=weight;
			this->c=c;
		}
		~cat(){cout<<"miao\n";}
		int get_age(){return age;}
		int get_weught(){return weight;}
		color get_color(){return c;}
		void show()
		{
			cout<<age<<"  "<<weight<<"  "<<c<<endl;
		}
		void setting(int age,int weight,color c)	
		{
			this->age=age;
			this->weight=weight;
			this->c=c;
		}
};

int main(void)
{
	cat a;
	cat b(2,5,white);
	cat c;
	a.show();
	b.show();
	c.show();
	c.setting(3,8,yellow);
	c.show();
	return 0;
}
