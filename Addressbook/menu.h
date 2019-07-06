#pragma once
#include "person.h"
void Show_Mian_Menu(void);//显示菜单

void input_person(Mail_list *person);//录入联系人

void find_all_person(Mail_list* person);//全部联系人

void find_person(Mail_list* person);//查找联系人

int isExist(Mail_list* person, string Name);//查找联系人

void delet_person(Mail_list* person);//删除联系人

void delet_all_person(Mail_list* person);//删除联系人