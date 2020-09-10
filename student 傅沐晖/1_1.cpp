
#include <iostream>
using namespace std;

class CatV1
	{
	private:
		double age, weight;
		string color;

	public:
		void input() {
			cout << "请输入对于猫的描述：" << endl;
			cout << "年龄(岁)： ";
			cin >> age ;
			cout << endl;
			cout << "体重(千克)： ";
			cin >> weight ; 
			cout << endl;
			cout << "颜色： ";
			cin >> color ;
			cout << endl;
			cout << endl;
			return;
		}
		void print() {
			cout << "关于猫的部分信息：" << endl;
			cout << "年龄：" << age << "岁" << endl;
			cout << "体重：" << weight << "千克" << endl;
			cout << "颜色：" << color << endl; 
			cout << endl;
				return;
		}


	};

int main()
{
	int choice;
	CatV1 Cat1;
	for (int i = 0;;i++) {
		cout << "请选择操作：" << endl;
		cout << "1、对猫进行描述;" << endl;
		cout << "2、查看猫的描述;" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			Cat1.input();
			break;
		case 2:
			if (i == 0) {
				cout << "请先对猫进行描述！" << endl;
				cout << endl;
				break;
			}
			else {
				Cat1.print();
				break;
			}
		default:
			cout << "请输入正确的选项数字！" << endl;
			cout << endl;
			break;
		

		}
	}
























}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
