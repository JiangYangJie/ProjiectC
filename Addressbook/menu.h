#pragma once
#include "person.h"
void Show_Mian_Menu(void);//��ʾ�˵�

void input_person(Mail_list *person);//¼����ϵ��

void find_all_person(Mail_list* person);//ȫ����ϵ��

void find_person(Mail_list* person);//������ϵ��

int isExist(Mail_list* person, string Name);//������ϵ��

void delet_person(Mail_list* person);//ɾ����ϵ��

void delet_all_person(Mail_list* person);//ɾ����ϵ��