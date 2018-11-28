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

//класс человек(будет наследоватьс€)
class Person {
protected:
	char name[20];
	char surname[20];
	int age;
public:
	Person() {
		//this->name = nullptr;
		//this->surname = nullptr;
		this->age = NULL;
	}
	~Person() {
		//delete name;
		//delete surname;
	}

	//virtual void setMainPrsnInfo() = 0;
	//virtual void getMainPrsnInfo() = 0;
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

//класс  лиент
class Client :public Person, public Order{
private:
	Client *firstCl;
	Client *lastCl;
	Client *next;
protected:
	/*friend ostream& operator<<(ostream& os, const Client &client);*/
    char street[20];
	int houseNumber;
	int flat;
	char key[20];
	int houseNumberFind;
	string in;
	char q[10];
public:
	friend ostream& operator<<(ostream& os, Client &client) {
		os << client.in;
		os << client.houseNumber;
		os << client.flat;
		return os;
	}
	friend istream& operator>>(istream& is, Client& client) {
		cout << "¬ведите им€: ";
		is >> client.name;
		cout << "¬ведите фамилию: ";
		is >> client.surname;
		is >> client.age;
		is >> client.street;
		is >> client.houseNumber;
		is >> client.flat;
		return is;
	}
	Client() {
		/*this->street = nullptr;*/
		this->houseNumber = NULL;
		this->flat = NULL;

	}
	/*Client(char* street,int houseNumber,int flat) {
		this->street = street;
		this->houseNumber = houseNumber;
		this->flat = flat;
	}*/
	~Client() {
		/*delete street;*/
	}
	//void setMainPrsnInfo();
	//void getMainPrsnInfo();
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

class Admin	{
protected:
	char password[256];
	char c;
public:
	void adminLogIn();
};