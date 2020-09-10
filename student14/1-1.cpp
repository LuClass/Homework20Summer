#include <iostream>
#include <string>
using namespace std;
	class cat{
		private:
			int age,weight;
			string color;
		public:
		    void setage(int age){
		    	this->age=age;
		    } 
		    void setweight(int weight){
		    	this->weight=weight;
		    } 
		    void setcolor(const char*p){
		    
		    	color=p;
		    }
		    int getage(){
		    	return age;
		    }
		    int getweight(){
		    	return weight;
		    }
		    const char* getcolor(){
		    	return color;
		    }
	};

