#include "Header.h"



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Client client;
    List<Client>lst;
	int x;
	while (1) {
		cout << "1.Добавление клиента в начало списка" << endl;
		cout << "2.Добавление клиента в конец списка" << endl;
		cout << "3.Удаление" << endl;
		cout << "4.Количество клиентов" << endl;
		cout << "5.Чтение из файла" << endl;
		cout << "0.Выход" << endl;
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
				  cout<<"Количество клиентов: "<< lst.getSize() << endl;
				  break;
				}
				case 5:
				{
					
					lst.downloadInfo(client);
					
					break;
				}
				case 7: {
					lst.savууу(client);
					break;
				}
				case 0:
				{
					exit(0);
					break;
				}
				default:
				{
					cout << "Выберите существующих пункт меню" << endl;
				}
				break;
		   }
		
	}
	system("pause");
	return 0;
}