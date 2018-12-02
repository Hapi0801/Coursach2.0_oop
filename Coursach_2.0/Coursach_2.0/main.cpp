#include "Header.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Client client;
	List<Client>lst;
	int x;
	while (1) {
		cout << "1.���������� ������� � ������ ������" << endl;
		cout << "2.���������� ������� � ����� ������" << endl;
		cout << "3.��������" << endl;
		cout << "4.���������� ��������" << endl;
		cout << "5.������ �� �����" << endl;
		cout << "6.�������� ������ ��������" << endl;
		cout << "7.��������� � ����" << endl;
		cout << "8.�����" << endl;
		cout << "0.�����" << endl;
		cin >> x;
		switch (x) {
		case 1:
		{
			client.setMainClientInfo();
			lst.addFirstElement(client);
			client.getMainClientInfo();
			break;
		}
		case 2:
		{
			client.setMainClientInfo();
			lst.addLastElement(client);
			client.getMainClientInfo();
			break;
		}
		case 3:
		{
			int del;
			cout << "������� ����� �������, �������� ������� �������: ";
			cin >> del;
			lst.deleteElement(del);
			break;
		}
		case 4:
		{
			cout << "���������� ��������: " << lst.getSize() << endl;
			break;
		}
		case 5:
		{
            lst.downloadInfo(client);
			lst.print();
            break;
		}
		case 6:
		{
			lst.print();
			break;
		}
        case 7: 
		{
			lst.save(client);
			break;
		}
		case 8: 
		{
			lst.search();
			break;
		}
		case 0:
		{
			exit(0);
			break;
		}
		default:
		{
			cout << "�������� ������������ ����� ����" << endl;
		}
		break;
		}

	}
	system("pause");
	return 0;
}