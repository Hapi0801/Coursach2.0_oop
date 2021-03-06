#include "Header.h"

//��������� ���������� � �������
void Client::setMainClientInfo() {
	cout << "������� ��� �������: ";
	cin >> this->name;
	cout << "������� ������� �������: ";
	cin >> this->surname;
	cout << "������� ������� �������: ";
	cin >> this->age;
	cout << "������� �������� ����� ���������� �������: ";
	cin >> this->street;
	cout << "������� ����� ���� �������: ";
	cin >> this->houseNumber;
	cout << "������� ����� �������� �������: ";
	cin >> this->flat;
}

//����� �������� ��� ������
int Client::selectSearchCriteria() {
	int choice;
	cout << "�������� �������� ������" << endl;
	cout << "1.�� �����" << endl;
	cout << "2.�� �������" << endl;
	cout << "3.�� ��������" << endl;
	cout << "4.�� �������� �����" << endl;
	cout << "5.�� ������ ����" << endl;
	cout << "6.�� ������ ��������" << endl;
	cin >> choice;
	return choice;
}

//����� �������� ��� ����������
int Client::selectFiltrCriteria() {
	int choice;
	cout << "���� ����������" << endl;
	cout << "1.���������� �� ��������" << endl;
	cin >> choice;
	return choice;
}

//������� ����������
void Client::filtr(int choice, int a,int minAge,int maxAge) {
	switch (choice) {
	case 1: {
		if (a == 1) {
			cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
			cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
		}
		else if (a == 2) {
			if (this->age > minAge && this->age < maxAge) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		}
		else {
			if (this->age > minAge && this->age < maxAge) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
				cout << "```````````````" << "````````````" << "`````````" << "```````````````" << "`````````````" << "`````````````````" << endl;
			}
		}
		break;
	}
	}
}

//����� �������� �������������� ������
int Client::selectEditCriteria() {
	int choice;
	cout << "�������� �������� ��������������" << endl;
	cout << "1.���" << endl;
	cout << "2.�������" << endl;
	cout << "3.�������" << endl;
	cout << "4.�������� �����" << endl;
	cout << "5.����� ����" << endl;
	cout << "6.����� ��������" << endl;
	cout << "7.��" << endl;
	cin >> choice;
	return choice;
}

//�������������� ������
void Client::edit(int choice) {
	switch (choice) {
	case 1:
	{
		cout << "������������� ���: " << this->name << endl;
		cout << "������� ����� ���: ";
		cin >> this->name;
		break;
	}
	case 2:
	{
		cout << "������������� �������: " << this->surname << endl;
		cout << "������� ����� �������: ";
		cin >> this->surname;
		break;
	}
	case 3:
	{
		cout << "������������� �������: " << this->age << endl;
		cout << "������� ����� �������: ";
		cin >> this->age;
		break;
	}
	case 4:
	{
		cout << "������������� �������� �����: " << this->street << endl;
		cout << "������� ����� �������� �����: ";
		cin >> this->street;
		break;
	}
	case 5:
	{
		cout << "������������� ����� ����: " << this->houseNumber << endl;
		cout << "������� ����� ����� ����: ";
		cin >> this->houseNumber;
		break;
	}
	case 6:
	{
		cout << "������������� ����� ��������: " << this->flat << endl;
		cout << "������� ����� ����� ��������: ";
		cin >> this->flat;
		break;
	}
	case 7: {
		cout << "������������� ���: " << this->name << endl;
		cout << "������� ����� ���: ";
		cin >> this->name;
		cout << "������������� �������: " << this->surname << endl;
		cout << "������� ����� �������: ";
		cin >> this->surname;
		cout << "������������� �������: " << this->age << endl;
		cout << "������� ����� �������: ";
		cin >> this->age;
		cout << "������������� �������� �����: " << this->street << endl;
		cout << "������� ����� �������� �����: ";
		cin >> this->street;
		cout << "������������� ����� ����: " << this->houseNumber << endl;
		cout << "������� ����� ����� ����: ";
		cin >> this->houseNumber;
		cout << "������������� ����� ��������: " << this->flat << endl;
		cout << "������� ����� ����� ��������: ";
		cin >> this->flat; break;
	}
	}
}

//����� �� ���������
void Client::search(int choice, char *input) {
		switch (choice) {
		case 1:
		{
			if (strcmp(this->name, input) == 0) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		    break;
		}
		case 2:
		{
			if (strcmp(this->surname, input) == 0) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		    break;
		}
		case 3:
		{
			int inputInteger = atoi(input);
			if (this->age==inputInteger) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		    break;
		}
		case 4:
		{
			if (strcmp(this->street, input) == 0) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		    break;
		}
		case 5:
		{
			int inputInteger = atoi(input);
			if (this->houseNumber == inputInteger) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		    break;
		}
		case 6:
		{
			int inputInteger = atoi(input);
			if (this->flat == inputInteger) {
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "| ��� ������� |" << "  �������  |" << " �������|" << "    �����     |" << " ����� ���� |" << " ����� �������� |" << endl;
				cout << "|`````````````|" << "```````````|" << "````````|" << "``````````````|" << "````````````|" << "````````````````|" << endl;
				cout << "|" << setw(13) << this->name << "|" << setw(11) << this->surname << "|" << setw(8) << this->age << "|" << setw(14) << this->street << "|" << setw(12) << this->houseNumber << "|" << setw(16) << this->flat << "|" << endl;
			}
		    break;
		}
	}
}

//get ��� �������
void Client::getMainClientInfo() {
	system("cls");
	cout << "��� �������: " << this->name << endl;
	cout << "������� �������: " << this->surname << endl;
	cout << "������� �������: " << this->age << endl;
	cout << "����� ���������� �������: " << this->street << endl;
	cout << "����� ���� �������: " << this->houseNumber << endl;
	cout << "����� �������� �������: " << this->flat << endl;
}

//������� ���������� ��������
bool names(char left[30], char right[30]) {
	return strcmp(left, right) > 0;
}
void Client::sort(Client &obj,Client &obj1) {
			if (names(obj.name, obj1.name)) {
				std::swap(obj.name, obj1.name);
				std::swap(obj.surname, obj1.surname);
				std::swap(obj.age, obj1.age);
				std::swap(obj.street, obj1.street);
				std::swap(obj.houseNumber, obj1.houseNumber);
				std::swap(obj.flat, obj1.flat);
	}
}

//����� ������ �������� � ��������� ����
void Client::print() {
	cout << "|`````````````|" << "```````````|" <<"````````|"<<"``````````````|"<<"````````````|"<<"````````````````|"<< endl;
	cout << "| ��� ������� |" << "  �������  |" <<" �������|"<<"    �����     |"<<" ����� ���� |"<<" ����� �������� |"<<endl;
	cout << "|`````````````|" << "```````````|" <<"````````|"<<"``````````````|"<<"````````````|"<<"````````````````|"<<endl;
	cout << "|"<< setw(13) << this->name <<"|"<<setw(11) << this->surname <<"|" << setw(8) << this->age <<"|"<<setw(14)<<this->street<<"|"<<setw(12)<<this->houseNumber<<"|"<<setw(16)<<this->flat<<"|"<<endl;
}

