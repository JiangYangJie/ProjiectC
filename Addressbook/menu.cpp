//用来显示菜单

#include<iostream>
#include "menu.h"

using namespace std;

void Show_Mian_Menu()
{
	cout << "*****************************************************" << endl;
	cout << "*****************       菜单         ****************" << endl;
	cout << "*****************   1.添加联系人    *****************" << endl;
	cout << "*****************   2.全部联系人    *****************" << endl;
	cout << "*****************   3.查找联系人    *****************" << endl;
	cout << "*****************   4.删除联系人    *****************" << endl;
	cout << "*****************   5.清空联系人    *****************" << endl;
	cout << "*****************   0.退出系统      *****************" << endl;
	cout << "*****************************************************" << endl;
	//system("pause");
}


void input_person(Mail_list* person)
{
	cout << "*****************   联系人姓名    ****************" << endl;
	cin >> person->persons[person->Number].name;
	cout << "*****************   联系人性别    ****************" << endl;
	cin >> person->persons[person->Number].sex;
	cout << "*****************   联系人电话    ****************" << endl;
	cin >> person->persons[person->Number].phone_number;
	cout << "*****************    录入完成     ****************" << endl;
	person->Number++;
	system("pause");
	system("cls");
}

void find_all_person(Mail_list* person)
{
	cout << "*****************    联系人信息    ****************"<<endl;
	cout << "****************一共有"<< person->Number <<"个联系人****************" << endl;
	for(int i=0;i<person->Number;i++)
	{ 
		//cout << "test" << endl;
		cout << "名字：    " <<person->persons[i].name << "\t";
		cout << "性别：    " << person->persons[i].sex<< "\t";
		cout << "电话号码：" << person->persons[i].phone_number << endl;
	}
	system("pause");
	system("cls");
}

void find_person(Mail_list* person)
{
	string Name;
	cout << "**********************请输入联系人姓名************************" << endl;
	cin >> Name;
	int i = isExist(person, Name);
	if (i != -1)
	{
		cout << "*****************    联系人信息    ****************" << endl;
		cout << "名字：    " << person->persons[i].name << "\t";
		cout << "性别：    " << person->persons[i].sex << "\t";
		cout << "电话号码：" << person->persons[i].phone_number << endl;
	}
	else
	{
		cout << "*****************    查无此人    ****************" << endl;
	}
	system("pause");
	system("cls");
}

int isExist(Mail_list* person, string Name)//查找联系人
{
	for (int i = 0; i < person->Number; i++)
	{
		if (person->persons[i].name == Name)
			return i;
	}
	return -1;
}

void delet_person(Mail_list * person)
{
	string name;
	int i;
	cout << "请输入需要删除的联系人名字:";
	cin >> name;
	i = isExist(person,name);
	if (i != -1)
	{
		for (i; i < person->Number;i++)
		{
			person->persons[i] = person->persons[i+1];
		}
		person->Number--;
		cout << "*****************    删除成功    ****************" << endl;
	}
	else
	{
		cout << "*****************    查无此人    ****************" << endl;
	}
	
	system("pause");
	system("cls");
}

void delet_all_person(Mail_list* person)
{
	person->Number = 0;
	cout << "*****************    清空成功    ****************" << endl;
	system("pause");
	system("cls");

}
