#include "Header.h"



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//List<int>lst;
	//lst.addLastElement(5);
	//lst.addLastElement(11);
	//lst.addLastElement(18);
	//cout <<"���������� ��������� ������: " << lst.getSize() << endl;
	////cout << lst[1] << endl;
	//
	//for (int i = 0; i < lst.getSize(); i++){
	//	cout << lst[i] << endl;
	//}
	//int k;
	//cin >> k;
	//lst.insertElement(20, k);
	//cout << "���������� ��������� ������: " << lst.getSize() << endl;
	//for (int i = 0; i < lst.getSize(); i++){
	//	cout << lst[i] << endl;
	//}
	//cout << "Delete last element" << endl;
	//lst.deleteLastElement();
	//lst.deleteFirstElement();
	//for (int i = 0; i < lst.getSize(); i++){
	//	cout << lst[i] << endl;
	//}

	//Client c(2,2);
	//cout << c;
	/*List<Client>lst;*/
	//Client lst("qwe", 4, 4);
	//cout << lst;
	Client client;
	List<Client>lst;
	int x;
	while (1) {
		cout << "1.���������� ������� � ������ ������" << endl;
		cout << "2.���������� ������� � ����� ������" << endl;
		cout << "3.�������� ��������" << endl;
		cout << "4.���������� ��������" << endl;
		cout << "0.�����" << endl;
		cin >> x;
		switch (x) {
				case 1:
				{    
                    cin >> client;
				    lst.addFirstElement(client);
					cout << client;
					break;
				}
				case 2:
				{
					cin >> client;
					lst.addLastElement(client);
					break;
				}
				case 3:
				{
					for (int i = 0; i < lst.getSize(); i++) {
						cout << lst[i] << endl;
					}
				}
				break;
				case 4:
				{
				  cout<<"���������� ��������: "<< lst.getSize() << endl;
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