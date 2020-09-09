//（课本P294.17）
#include <iostream>//**************************程序特点：用随机数生成100个person类的具体对象并制定好他们的父母，输入数字序号可查询该人的兄弟姐妹和祖父母外祖父母
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <string>
int first;//第一代人的个数
int flag = 0;//方便for循环 
int condi;//想要查询的人的序号 
int last = 0;//上一代人的个数 
using namespace std;//常用姓名用来随机生成一个人的名字 
char xing[50][3] = { "赵", "钱", "孙", "李", "周", "吴", "郑", "王", "冯", "陈", "褚", "卫", "蒋", "沈", "韩",
"杨", "朱", "秦", "尤", "许", "何", "吕", "施", "张", "孔", "曹", "严", "华", "金", "魏", "陶", "姜", "戚",
"谢", "邹", "喻", "柏", "水", "窦", "章", "云", "苏", "潘", "葛", "奚", "范", "彭", "郎", "程", "慕" };
char ming[50][3] = { "淑", "娟", "敏", "浩", "保", "贤", "翔", "燕", "妍", "月", "文", "阳", "诚", "承", "澄",
"海", "权", "一", "平", "沐", "晖", "宇", "罡", "斐", "冉", "寇", "华", "思", "博", "嘉", "彦", "瑞", "清",
"宏", "晨", "哲", "皓", "铭", "梓", "润", "昊", "雨", "林", "恒", "智", "伟", "旭", "泽", "轩", "峰" };
class person{
private:
	int jixu;
	string name;
	char sex;
	person *father;
	person *mother;
public:
	person();
	person(const char *name, char sex, int is);
	void setfather(person *p){ father = p; };
	void setmother(person *p){ mother = p; };
	void setname(const char *p){ name = p; };
	const string &getfather(){ return father->getname(); };
	const string &getmother(){ return mother->getname(); };
	const string &getname(){ return name; };	
	char getsex(){ return sex; };
//	bool isbrother();
	void setisend() {jixu = 0; };
	int getisend() { return jixu; };
	void printsex(char a){
		if (a == 'm')
			cout << "男"<<endl;
		else
		cout << "女"<<endl;
	}
	void mainprint();
	void print();
	void printgrand();
};
person::person(const char *name, char sex, int is) :name(name), sex(sex), jixu(is), father(NULL), mother(NULL){};
person::person(){
	int a = rand() % 2;
	int i = rand() % 2;
	int b = rand() % 50;
	int c = rand() % 50;
	int d = rand() % 50;
	if (a == 0)
		sex = 'f';
	else
		sex = 'm';
	if (i == 0){
		string f, g;
		f = xing[b];
		g = ming[c];
		name = f + g;
	}
	else
	{
		string f, g, h;
		f = xing[b];
		g = ming[c];
		h = ming[d];
		name = f + g + h;
	}
	father = NULL;
	mother = NULL;
	jixu = 1;
}
void person::mainprint(){
	cout << "                                   你所要查询的人是:" << name << "  性别:";
	printsex(sex);
}
void person::print(){
	cout << name << "   性别:";
	printsex(sex);

}

void person::printgrand(){
	if (father->father == NULL)
		cout << "该人没有祖父母和外祖父母\n";
	else
	cout << "他/她的祖父是" << father->getfather() << "  祖母是" << father->getmother() << "\n外祖父是" << mother->getfather() << "    外祖母是" << mother->getmother()<<endl;
}

void findsisbro(int condi, person p[]){
	cout << "兄弟姐妹有：" << endl;
	if (condi < first)
		for (int i = 0; i < first; i++)
		{
		p[i].print();
		}
	else
	for (int i = condi - 6; i < condi + 6; i++)
		if ((p[condi].getfather() == p[i].getfather()) || (p[condi].getmother() == p[i].getmother()))
		{
		p[i].print();
		}
};

int main()
{
	srand(time(NULL));
	person orientfather("黄帝", 'm', 0);
	person orientmother("女娲", 'f', 0);
	person jiazu[100];
	while (jiazu[99].getisend())
	{
		int a = rand() % 6+6;
		if (flag == 0)
		for (int i = 0; i < a; i++)
		{
			first = a;//记录第一代人的个数 
			jiazu[i].setfather(&orientfather);
			jiazu[i].setmother(&orientmother);
			jiazu[i].setisend();
		}
		else
		{
			for (int i = 0; i < a; i++)
			{
				int isnotsetfather = 1, isnotsetmother = 1;
				int out = 2;
				if (flag + i > 99)
					break;
				while (out!= 0)
				{
					int suiji = rand() % last;
					if (jiazu[flag - last + suiji].getsex() == 'm'){
						jiazu[flag + i].setfather(&jiazu[flag - last + suiji]);
						isnotsetfather = 0;
					}
					else
					{
						jiazu[flag + i].setmother(&jiazu[flag - last + suiji]);
						isnotsetmother = 0;
					}
					out = isnotsetfather + isnotsetmother;
					
				}
				jiazu[flag+i].setisend();
			}
		}
		flag += a;
		last = a;
	}
	while (cout<< "现在有一个100人的大家族，请输入1-100查询某一个人的基本信息和祖父母外祖父母，按0退出"<<endl,cin>>condi&&condi!=0)
	{
		jiazu[condi-1].mainprint();
		jiazu[condi-1].printgrand();
		findsisbro(condi-1, jiazu);
	}
	return 0;
}
