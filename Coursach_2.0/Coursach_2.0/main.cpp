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
		cout << "0.�����" << endl;
		cin >> x;
		switch (x) {
				case 1:
				{    
                    client.setMainClientInfo();
				    lst.addFirstElement(client);
					client.getMainClientInfo();
					lst.sav(client);

					break;
				}
				case 2:
				{
					cin >> client;
					/*client.setMainClientInfo();*/
					lst.addLastElement(client);
					/*client.getMainClientInfo();*/
				/*	client.SaveClientInf();*/
					break;
				}
				case 3:
				{
					int del;
				    cin>> del;
					lst.deleteElement(del);
					
				}
				case 6:
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
				case 5:
				{
					
					lst.downloadInfo(client);
					
					break;
				}
				case 7: {
					lst.sav���(client);
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