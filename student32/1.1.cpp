#include <bits/stdc++.h>
using namespace std;

class Cat
{
	private:
		int age,weight;
		string color;
	public:
		void setcat(int age,int weight,string color);
		void print()
		{
			cout<<age<<" "<<weight<<" "<<color<<endl;
		}
	};
	
void Cat::setcat(int a,int w,string c)
{
	age=a;
	weight=w;
	color=c;
}

int main()
{
     Cat cat;
     cat.setcat(1,3,"black");
     cout<<"cat:";
     cat.print();
     return 0;
}
