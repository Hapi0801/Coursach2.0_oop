//#include "Header.h"
//
////ostream& operator<<(ostream& os,const  Client &client) {
////	os << client.street;
////	os << client.houseNumber;
////	os<<client.flat;
////	return os;
////}
////
//////ifstream& operator>>(ifstream& is, Client& client) {
//////
//////}
////����������� �������� ���� �������� ���������� ������ Person
//void Client::setMainPrsnInfo() {
//	name = new char[20];
//	surname = new char[20];
//	street = new char[20];
//	cout << "������� ��� �������: ";
//	cin >> this->name;
//	cout << "������� ������� �������: ";
//	cin >> this->surname;
//	cout << "������� ������� �������: ";
//	cin >> this->age;
//	cout << "������� �������� �����: ";
//	cin >> this->street;
//	cout << "������� ����� ����: ";
//	cin >> this->houseNumber;
//	cout << "������� ����� ��������: ";
//	cin >> this->flat;
//}
//
////����������� ������� ��������� �������� ���������� ������ Person
//void Client::getMainPrsnInfo() {
//	system("cls");
//	cout << "���: " << this->name << endl;
//	cout << "�������: " << this->surname << endl;
//	cout << "�������: " << this->age << endl;
//	cout << "�����: ��." << this->street << ", �." << this->houseNumber << ", ��." << this->flat << endl;
//}
//
////���������� ������� � ������ ������
//void Client::AddFirstClient() {
//	Client *p = new Client;
//	p->next = firstCl;
//	p->name = this->name;
//	p->surname = this->surname;
//	p->age = this->age;
//	p->street = this->street;
//	p->houseNumber = this->houseNumber;
//	p->flat = this->flat;
//	firstCl = p;
//	if (lastCl == NULL) {
//		lastCl = firstCl;
//	}
//}
//
////����� ������ �������� �� �����
//void Client::ShowClientList(){
//	Client *p = firstCl;
//	int number = 1;
//	cout << "\t\t\tC����� ��������" << endl;
//	while (p != NULL) {
//		cout << "����� - " << number << endl;
//		cout << "���: " << p->name << endl;
//		cout << "�������: " << p->surname << endl;
//		cout << "�������: " << p->age << endl;
//		cout << "�����: ��." << p->street << ", �." << p->houseNumber << ", ��." << p->flat << endl;
//		cout << "______________________" << endl;
//		number++;
//		p = p->next;
//	}
//}
//
////���������� ������� � ����� ������
//void Client::AddLastClient() {
//	Client *p = new Client;
//	if (lastCl == NULL) {
//		p->name = this->name;
//		p->surname = this->surname;
//		p->age = this->age;
//		p->street = this->street;
//		p->houseNumber = this->houseNumber;
//		p->flat = this->flat;
//		lastCl = p;
//	}
//	else {
//		lastCl->next = p;
//		p->name = this->name;
//		p->surname = this->surname;
//		p->age = this->age;
//		p->street = this->street;
//		p->houseNumber = this->houseNumber;
//		p->flat = this->flat;
//		p->next = NULL;
//		lastCl = p;
//	}
//}
//
////�������� ������� �� ������
//void Client::ClientDelete() {
//	Client *p = firstCl;
//	int n;
//	cout << "������� ����� �������, �������� ������ �������: ";
//	cin >> n;
//	if (n != 1) {
//		for (int i = 1; i < (n - 1); i++) {
//			p = p->next;
//		}
//		Client *pr = p->next;
//		p->next = p->next->next;
//		delete pr;
//		DelClientMessage();
//	}
//	//������, ���� ����� ���������� ������� - ��� 1
//	else {
//		Client *pr = firstCl;
//		firstCl = firstCl->next;
//		delete pr;
//		DelClientMessage();
//	}
//}
//
////�������-����, ��������� ��������� � �������� �������� �������
//void DelClientMessage() {
//	system("cls");
//	cout << "������ ������� ������" << endl;
//}
//
////����� ������� �� �����
//void Client::FindClientByName() {
//	if (firstCl != NULL) {
//		cout << "������� ��� �������: ";
//		cin >> key;
//		int check = 0;
//		Client *p = firstCl;
//		while (p != NULL) {
//			if (strcmp(p->name, key) == 0) {
//				cout << "������� ������: " << endl;
//				cout << "���: " << p->name << endl;
//				cout << "�������: " << p->surname << endl;
//				cout << "�������: " << p->age << endl;
//				cout << "�����: ��." << p->street << ", �." << p->houseNumber << ", ��." << p->flat << endl;
//				cout << "______________________" << endl;
//				check++;
//				p = p->next;
//				continue;
//			}
//			else {
//				p = p->next;
//			}
//		}
//		if (check < 1) {
//			cout << "�������� � ������ ������ �� ���� �������" << endl;
//			return;
//		}
//	}
//	else {
//		cout << "������ �������� ����" << endl;
//	}
//}
//
////����� ������� �� �������
//void Client::FindClientBySurname() {
//	if (firstCl != NULL) {
//		cout << "������� ������� �������: ";
//		cin >> key;
//		int check = 0;
//		Client *p = firstCl;
//		while (p != NULL) {
//			if (strcmp(p->surname, key) == 0) {
//				cout << "������� ������: " << endl;
//				cout << "���: " << p->name << endl;
//				cout << "�������: " << p->surname << endl;
//				cout << "�������: " << p->age << endl;
//				cout << "�����: ��." << p->street << ", �." << p->houseNumber << ", ��." << p->flat << endl;
//				cout << "______________________" << endl;
//				check++;
//				p = p->next;
//				continue;
//			}
//			else {
//				p = p->next;
//			}
//		}
//		if (check < 1) {
//			cout << "�������� � ������ �������� �� ���� �������" << endl;
//			return;
//		}
//	}
//	else {
//		cout << "������ �������� ����" << endl;
//	}
//}
//
////����� ������� �� ������
//void Client::FindClientByAdress() {
//	if (firstCl != NULL) {
//		cout << "������� �������� �����, �� ������� ��������� ������: ";
//		cin >> key;
//		cout << "������� ����� ���� �������: ";
//		cin >> houseNumberFind;
//		int check = 0;
//		Client *p = firstCl;
//		while (p != NULL) {
//			if (strcmp(p->street, key) == 0 && houseNumber == houseNumberFind) {
//				cout << "������� ������: " << endl;
//				cout << "���: " << p->name << endl;
//				cout << "�������: " << p->surname << endl;
//				cout << "�������: " << p->age << endl;
//				cout << "�����: ��." << p->street << ", �." << p->houseNumber << ", ��." << p->flat << endl;
//				cout << "______________________" << endl;
//				check++;
//				p = p->next;
//				continue;
//			}
//			else {
//				p = p->next;
//			}
//		}
//		if (check < 1) {
//			cout << "�������� �� ������� ������ �� ���� �������" << endl;
//			return;
//		}
//	}
//	else {
//		cout << "������ �������� ����" << endl;
//	}
//}
