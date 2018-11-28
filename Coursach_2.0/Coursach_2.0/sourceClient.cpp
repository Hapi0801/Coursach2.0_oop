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
////виртаульная фиункция ввод основных параметров класса Person
//void Client::setMainPrsnInfo() {
//	name = new char[20];
//	surname = new char[20];
//	street = new char[20];
//	cout << "Введите имя клиента: ";
//	cin >> this->name;
//	cout << "Введите фамилию клиента: ";
//	cin >> this->surname;
//	cout << "Введите возраст клиента: ";
//	cin >> this->age;
//	cout << "Введите название улицы: ";
//	cin >> this->street;
//	cout << "Введите номер дома: ";
//	cin >> this->houseNumber;
//	cout << "Введите номер квартиры: ";
//	cin >> this->flat;
//}
//
////виртуальная функция получение основных параметров класса Person
//void Client::getMainPrsnInfo() {
//	system("cls");
//	cout << "Имя: " << this->name << endl;
//	cout << "Фамилия: " << this->surname << endl;
//	cout << "Возраст: " << this->age << endl;
//	cout << "Адрес: ул." << this->street << ", д." << this->houseNumber << ", кв." << this->flat << endl;
//}
//
////добавление клиента в начало списка
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
////вывод списка клиентов на экран
//void Client::ShowClientList(){
//	Client *p = firstCl;
//	int number = 1;
//	cout << "\t\t\tCписок клиентов" << endl;
//	while (p != NULL) {
//		cout << "Номер - " << number << endl;
//		cout << "Имя: " << p->name << endl;
//		cout << "Фамилия: " << p->surname << endl;
//		cout << "Возраст: " << p->age << endl;
//		cout << "Адрес: ул." << p->street << ", д." << p->houseNumber << ", кв." << p->flat << endl;
//		cout << "______________________" << endl;
//		number++;
//		p = p->next;
//	}
//}
//
////добавление клиента в конец списка
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
////удаление клиента из списка
//void Client::ClientDelete() {
//	Client *p = firstCl;
//	int n;
//	cout << "Введите номер клиента, которого хотите удалить: ";
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
//	//случай, если номер удаляемого клиента - это 1
//	else {
//		Client *pr = firstCl;
//		firstCl = firstCl->next;
//		delete pr;
//		DelClientMessage();
//	}
//}
//
////функция-друг, выводящая сообщение о успешном удалении клиента
//void DelClientMessage() {
//	system("cls");
//	cout << "Клиент успешно удален" << endl;
//}
//
////поиск клиента по имени
//void Client::FindClientByName() {
//	if (firstCl != NULL) {
//		cout << "Введите имя клиента: ";
//		cin >> key;
//		int check = 0;
//		Client *p = firstCl;
//		while (p != NULL) {
//			if (strcmp(p->name, key) == 0) {
//				cout << "Искомый клиент: " << endl;
//				cout << "Имя: " << p->name << endl;
//				cout << "Фамилия: " << p->surname << endl;
//				cout << "Возраст: " << p->age << endl;
//				cout << "Адрес: ул." << p->street << ", д." << p->houseNumber << ", кв." << p->flat << endl;
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
//			cout << "Клиентов с данным именем не было найдено" << endl;
//			return;
//		}
//	}
//	else {
//		cout << "Список клиентов пуст" << endl;
//	}
//}
//
////поиск клиента по фамилии
//void Client::FindClientBySurname() {
//	if (firstCl != NULL) {
//		cout << "Введите фамилию клиента: ";
//		cin >> key;
//		int check = 0;
//		Client *p = firstCl;
//		while (p != NULL) {
//			if (strcmp(p->surname, key) == 0) {
//				cout << "Искомый клиент: " << endl;
//				cout << "Имя: " << p->name << endl;
//				cout << "Фамилия: " << p->surname << endl;
//				cout << "Возраст: " << p->age << endl;
//				cout << "Адрес: ул." << p->street << ", д." << p->houseNumber << ", кв." << p->flat << endl;
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
//			cout << "Клиентов с данной фамилией не было найдено" << endl;
//			return;
//		}
//	}
//	else {
//		cout << "Список клиентов пуст" << endl;
//	}
//}
//
////поиск клиента по адресу
//void Client::FindClientByAdress() {
//	if (firstCl != NULL) {
//		cout << "Введите название улицы, на которой проживает клиент: ";
//		cin >> key;
//		cout << "Введите номер дома клиента: ";
//		cin >> houseNumberFind;
//		int check = 0;
//		Client *p = firstCl;
//		while (p != NULL) {
//			if (strcmp(p->street, key) == 0 && houseNumber == houseNumberFind) {
//				cout << "Искомый клиент: " << endl;
//				cout << "Имя: " << p->name << endl;
//				cout << "Фамилия: " << p->surname << endl;
//				cout << "Возраст: " << p->age << endl;
//				cout << "Адрес: ул." << p->street << ", д." << p->houseNumber << ", кв." << p->flat << endl;
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
//			cout << "Клиентов по данному адресу не было найдено" << endl;
//			return;
//		}
//	}
//	else {
//		cout << "Список клиентов пуст" << endl;
//	}
//}
