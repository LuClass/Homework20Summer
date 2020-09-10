using namespace std;
#include<string.h>
#include<iostream>

class cat{
		private:
			int age,weight;
			char color[10];
		public:
		 void setdata(int x,int y,char *c)
		 {
		 	age=x;
		 	weight=y;
		 	strcpy(color,c);
		 }
		 void print()
		 {
		 	cout<<"age:"<<age<<"Ëê"<<endl;
			 cout<<"weight:"<<weight<<"kg"<<endl;
			 cout<<"color:"<<color<<endl; 
		 }
	};

int main()
{    cat cat1;
	int a,b;
	char col[10];
	cout<<"please input the age,weight and the color of the cat"<<endl; 
	cin>>a>>b;
	cin.ignore();
	cin.get(col,10);
	cat1.setdata(a,b,col);
	cat1.print();
   return 0;
 } 
