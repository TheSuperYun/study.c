#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
}PeoInfo;
typedef struct Contact
{
	PeoInfo* date;
	int count;
	int capacity;
}Contact;
int InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(Contact* pc);
void DelContact(Contact* pc);
void SearchContact(Contact* pc);
void ModifyContact(Contact* pc);
void SortContact(Contact* pc);