//������ʾ�˵�

#include<iostream>
#include "menu.h"

using namespace std;

void Show_Mian_Menu()
{
	cout << "*****************************************************" << endl;
	cout << "*****************       �˵�         ****************" << endl;
	cout << "*****************   1.�����ϵ��    *****************" << endl;
	cout << "*****************   2.ȫ����ϵ��    *****************" << endl;
	cout << "*****************   3.������ϵ��    *****************" << endl;
	cout << "*****************   4.ɾ����ϵ��    *****************" << endl;
	cout << "*****************   5.�����ϵ��    *****************" << endl;
	cout << "*****************   0.�˳�ϵͳ      *****************" << endl;
	cout << "*****************************************************" << endl;
	//system("pause");
}


void input_person(Mail_list* person)
{
	cout << "*****************   ��ϵ������    ****************" << endl;
	cin >> person->persons[person->Number].name;
	cout << "*****************   ��ϵ���Ա�    ****************" << endl;
	cin >> person->persons[person->Number].sex;
	cout << "*****************   ��ϵ�˵绰    ****************" << endl;
	cin >> person->persons[person->Number].phone_number;
	cout << "*****************    ¼�����     ****************" << endl;
	person->Number++;
	system("pause");
	system("cls");
}

void find_all_person(Mail_list* person)
{
	cout << "*****************    ��ϵ����Ϣ    ****************"<<endl;
	cout << "****************һ����"<< person->Number <<"����ϵ��****************" << endl;
	for(int i=0;i<person->Number;i++)
	{ 
		//cout << "test" << endl;
		cout << "���֣�    " <<person->persons[i].name << "\t";
		cout << "�Ա�    " << person->persons[i].sex<< "\t";
		cout << "�绰���룺" << person->persons[i].phone_number << endl;
	}
	system("pause");
	system("cls");
}

void find_person(Mail_list* person)
{
	string Name;
	cout << "**********************��������ϵ������************************" << endl;
	cin >> Name;
	int i = isExist(person, Name);
	if (i != -1)
	{
		cout << "*****************    ��ϵ����Ϣ    ****************" << endl;
		cout << "���֣�    " << person->persons[i].name << "\t";
		cout << "�Ա�    " << person->persons[i].sex << "\t";
		cout << "�绰���룺" << person->persons[i].phone_number << endl;
	}
	else
	{
		cout << "*****************    ���޴���    ****************" << endl;
	}
	system("pause");
	system("cls");
}

int isExist(Mail_list* person, string Name)//������ϵ��
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
	cout << "��������Ҫɾ������ϵ������:";
	cin >> name;
	i = isExist(person,name);
	if (i != -1)
	{
		for (i; i < person->Number;i++)
		{
			person->persons[i] = person->persons[i+1];
		}
		person->Number--;
		cout << "*****************    ɾ���ɹ�    ****************" << endl;
	}
	else
	{
		cout << "*****************    ���޴���    ****************" << endl;
	}
	
	system("pause");
	system("cls");
}

void delet_all_person(Mail_list* person)
{
	person->Number = 0;
	cout << "*****************    ��ճɹ�    ****************" << endl;
	system("pause");
	system("cls");

}
