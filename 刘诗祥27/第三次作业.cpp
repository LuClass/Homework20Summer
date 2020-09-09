using namespace std;
#include <iostream>
#include <string.h>
class Person{
	char *name;
	char sex;
	char *momname;
	char *dadname;
public:
	void seekbroandsis(Person a,Person b){
		if(strcmp(a->momname,b->momname)||strcmp(a->dadname,b->dadname))
		  cout<<b->name<<"是"<<a->name<<"的兄弟姐妹"<<endl;
	}//stcmp还是我这个 
	void seekffmm(Person a,Person b){
		if(strcmp(a->dadname,b->name)||strcmp(a->momname,b->name))
		{
			cout<<b->dadname<<"和"<<b->momname<<"是"<<a->name<<"的祖父母"<<endl;
		}
	} 
};
