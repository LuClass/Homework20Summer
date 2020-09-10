using namespace std;
#include<iostream>
	class cat{
		private:
			int age,weight;
			string color;
		public:
			void setcat(int age,int weight,string color);
			void print(){
				cout<<age<<"."<<weight<<"kg"<<"."<<color<<endl;
			}
	};
	void cat::setcat(int a,int w,string c)
	{
		age=a;
		weight=w;
		color=c;
	}
int main()
{
     cat cat1;
     cat1.setcat(1,3,"black");
     cout<<"cat1:";
     cat1.print();
     return 0;
}
