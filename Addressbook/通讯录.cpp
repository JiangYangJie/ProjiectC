// 通讯录.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "menu.h"
#include "person.h"
#include <iostream>
using namespace std;

int main()
{
	int info = 0;
	Mail_list person;
	while (true)
	{
		Show_Mian_Menu();
		cout << "请选择业务:";
		cin >> info;
		//system("cls");
		switch (info)
		{
		case 1://添加联系人
			input_person(&person);
			break;
		case 2://全部联系人
			find_all_person(&person);
			break;
		case 3://查找联系人
			find_person(&person);
			break;
		case 4://删除联系人
			delet_person(&person);
			break;
		case 5://清空联系人
			delet_all_person(&person);
			break;
		case 0:
			cout << "系统已退出！！！"<<endl;
			system("exit");
			return 0;
		default:
			system("pause");
			system("cls");
			break;
		}
	}
    cout << "Hello World!\n"<<endl;
	system("pause");
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
