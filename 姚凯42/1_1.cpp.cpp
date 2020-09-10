#include <iostream>
using namespace std;
class Cat
{
	private:
		int age,weight;
		string color;
	public:
		void setage(int a)
		{
			age=a;
		}
		void setweight(int b)
		{
			weight=b;
		}
		void setcolor(string c)
		{
			color=c;
		}
		void print()
		{
			cout<<"age:"<<age<<endl; 
			cout<<"weight:"<<weight<<endl;
			cout<<"color:"<<color<<endl;
		}
};
int main ()
{
	Cat smallcat;
	smallcat.setage(2);
	smallcat.setweight(5);
	smallcat.setcolor("white");
	smallcat.print();
	return 0;
}
