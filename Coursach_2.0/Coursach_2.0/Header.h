#pragma once

#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <conio.h>
#include <sstream>
#include <stdlib.h>
#include "List.h"

using namespace std;


void passwordGen();

//����� �������(����� �������������)
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

//����� �������
//����� ����� �������������� � �������?????
class Order {
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

//����� ������
class Client :public Person, public Order{
private:
	Client *firstCl;
	Client *lastCl;
	Client *next;
protected:
	char street[20];
	int houseNumber;
	int flat;
	char key[20];
	int houseNumberFind;

public:
	friend ostream& operator<<(ostream& os, Client &client) {
		os << client.name;
		os << client.surname;
		os << client.age;
		os << client.street;
		os << client.houseNumber;
		os << client.flat;
		return os;
	}
	friend istream& operator>>(istream& is, Client& client) {
		cout << "������� ��� �������: ";
		is >> client.name;
		cout << "������� ������� �������: ";
		is >> client.surname;
		cout << "������� �������� �������: ";
		is >> client.age;
		cout << "������� �������� ����� ���������� �������: ";
		is >> client.street;
		cout << "������� ����� ���� �������: ";
		is >> client.houseNumber;
		cout << "������� ����� �������� �������: ";
		is >> client.flat;
		return is;
	}

	Client() {
		/*this->street = nullptr;*/
		this->houseNumber = NULL;
		this->flat = NULL;
	}
	~Client() {/*delete street;*/}
	void setMainClientInfo();
	void getMainClientInfo();
	//void save(Client &obj);
	//void download(Client &obj);
	void print();
	void sort(bool a);
	int selectSearchCriteria();
	void search(int i, char *input);
};

class Admin	{
protected:
	char password[256];
	char c;
public:
	void adminLogIn();
	void encryption();
};