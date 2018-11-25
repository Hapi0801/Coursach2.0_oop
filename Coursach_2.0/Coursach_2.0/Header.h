#pragma once
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <conio.h>
#include "List.h"

using namespace std;


void passwordGen();

//класс человек(будет наследоваться)
class Person {
protected:
	char *name;
	char *surname;
	int age;
public:
	Person() {
		this->name = nullptr;
		this->surname = nullptr;
		this->age = NULL;
	}
	~Person() {
		delete name;
		delete surname;
	}

	virtual void setMainPrsnInfo() = 0;
	virtual void getMainPrsnInfo() = 0;
};

//класс заказов
//заказ будет инкапсулирвоан в клиента?????
class Order {
private:
	//Order *firstOrd;
	//Order *lastOrd;
	//Order *nextOrd;
protected:
	Order *firstOrd;
	Order *lastOrd;
	Order *nextOrd;
	char *orderName;
	int orderCode;
	int clientCode;
	int OrderCost;
	int DeliveryCost;
	//int dateOfOrder;
public:
	friend class Client;
	Order() {
		this->orderName = nullptr;
		this->orderCode = NULL;
		this->clientCode = NULL;
		this->OrderCost = NULL;
		this->DeliveryCost = NULL;
	}
	~Order() {
		delete orderName;
	}
	void setOrderInf();
	void getOrderInf();
	/*void AddClientOrder();*/
};

//класс Клиент
class Client :public Person, public Order{
private:
	Client *firstCl;
	Client *lastCl;
	Client *next;
protected:
	char *street;
	int houseNumber;
	int flat;
	char key[20];
	int houseNumberFind;
public:

	Client() {
		this->street = nullptr;
		this->houseNumber = NULL;
		this->flat = NULL;
	}
	~Client() {
		delete street;
	}
	void setMainPrsnInfo();
	void getMainPrsnInfo();
	void AddFirstClient();
	void AddLastClient();
	void ShowClientList();
	void ClientDelete();
	friend void DelClientMessage();
	void FindClientByName();
	void FindClientBySurname();
	void FindClientByAdress();
	void SaveClientInf();
	void DownloadClientInf();
	void EditClientInfo();
	void SortName();
	/*void setOrder();*/
	void AddClientOrder();
	void ShowOrder();
};