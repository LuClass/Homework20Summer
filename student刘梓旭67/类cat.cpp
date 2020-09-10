#include<iostream>
#include<string.h> 
using namespace std;
class cat{
	private:
		float weight;
		int age;
		string color;
		public:
			void setweight(float w)
			{weight=w;
			}
			void setage(int a)
			 {age=a;
			 }
			 void setcolor(string c)
			  {color=c;
			  }
			int getage()
			 {return age;
			 
			 }
		    float getweight()
		    {return weight;
			}
			string getcolor()
			{return color;
			}
			void show()
			{cout<<age<<" "<<weight<<"  "<<color;
			}
}; 
int main()
{cat heimao;
heimao.setage(4);
heimao.setcolor("black");
heimao.setweight(5.0);
cout<<heimao.getage()<<endl<<heimao.getcolor()<<endl<<heimao.getweight()<<endl;;
heimao.show();
return 0;
}
