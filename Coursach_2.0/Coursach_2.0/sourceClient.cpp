#include "Header.h"

void Client::setMainClientInfo() {
	cout << "Введите имя клиента: ";
	cin >> this->name;
	cout << "Введите фамилию клиента: ";
	cin >> this-> surname;
	cout << "Введите возраст клиента: ";
	cin >> this->age;
	cout << "Введите название улицы проживания клиента: ";
	cin >> this->street;
	cout << "Введите номер дома клиента: ";
	cin >> this->houseNumber;
	cout << "Введите номер квартиры клиента: ";
	cin >> this->flat;
}

void Client::getMainClientInfo() {
	system("cls");
	cout << "Имя клиента: " << this->name << endl;
	cout << "Фамилия клиента: " << this->surname << endl;
	cout << "Возраст клиента: " << this->age << endl;
	cout << "Улица проживания клиента: " << this->street << endl;
	cout << "Номер дома клиента: " << this->houseNumber << endl;
	cout << "Номер квартиры клиента: " << this->flat << endl;
}

//void Client::SaveClientInf() {
//	fstream fs;
//	fs.open("ClientDatabase.txt", fstream::in | fstream::out | fstream::app);
//	if (!fs.is_open()) {
//		cout << "Error" << endl;
//	}
//	else {
//		fs << this->name<<" ";
//		fs << this->surname << " ";
//		fs << this->age << " ";
//		fs << this->street << " ";
//		fs << this->houseNumber << " ";
//		fs << this->flat << "\n";
//	}
//	fs.close();
//}



void Client::save(Client &obj) {
	ofstream fout;
	fout.open("ClientDatabase.txt", ofstream::app);
	if (!fout.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is ipen" << endl;
		fout.write((char*)&obj, sizeof(Client));
	}
	fout.close();
}


void Client::download(Client &obj) {
	List<Client>ls;
	ifstream fin;
	fin.open("ClientDatabase.txt");
	if (!fin.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is ipen" << endl;
		
		while (fin.read((char*)&obj, sizeof(Client))) {
			ls.addLastElement(obj);
			obj.print();
			
		}
	cout<<	ls.getSize()<<endl;
	}
	fin.close();
}

void Client::print() {
	cout << "Имя клиента: " << this->name << endl;
	cout << "Фамилия клиента: " << this->surname << endl;
	cout << "Возраст клиента: " << this->age << endl;
	cout << "Улица проживания клиента: " << this->street << endl;
	cout << "Номер дома клиента: " << this->houseNumber << endl;
	cout << "Номер квартиры клиента: " << this->flat << endl;
}

