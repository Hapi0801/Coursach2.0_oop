#include "Header.h"

void Client::setMainClientInfo() {
	cout << "������� ��� �������: ";
	cin >> this->name;
	cout << "������� ������� �������: ";
	cin >> this-> surname;
	cout << "������� ������� �������: ";
	cin >> this->age;
	cout << "������� �������� ����� ���������� �������: ";
	cin >> this->street;
	cout << "������� ����� ���� �������: ";
	cin >> this->houseNumber;
	cout << "������� ����� �������� �������: ";
	cin >> this->flat;
}

void Client::getMainClientInfo() {
	system("cls");
	cout << "��� �������: " << this->name << endl;
	cout << "������� �������: " << this->surname << endl;
	cout << "������� �������: " << this->age << endl;
	cout << "����� ���������� �������: " << this->street << endl;
	cout << "����� ���� �������: " << this->houseNumber << endl;
	cout << "����� �������� �������: " << this->flat << endl;
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
	cout << "��� �������: " << this->name << endl;
	cout << "������� �������: " << this->surname << endl;
	cout << "������� �������: " << this->age << endl;
	cout << "����� ���������� �������: " << this->street << endl;
	cout << "����� ���� �������: " << this->houseNumber << endl;
	cout << "����� �������� �������: " << this->flat << endl;
}

