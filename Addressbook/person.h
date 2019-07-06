//联系人结构体
#pragma once
#include <string>
using namespace std;

struct Person
{
	string name;
	string sex;
	string phone_number;

};

struct Mail_list
{
	struct Person persons[1000];
	int Number=0;
};

