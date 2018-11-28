#include "Header.h"



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//List<int>lst;
	//lst.addLastElement(5);
	//lst.addLastElement(11);
	//lst.addLastElement(18);
	//cout <<"Количество элементво списка: " << lst.getSize() << endl;
	////cout << lst[1] << endl;
	//
	//for (int i = 0; i < lst.getSize(); i++){
	//	cout << lst[i] << endl;
	//}
	//int k;
	//cin >> k;
	//lst.insertElement(20, k);
	//cout << "Количество элементво списка: " << lst.getSize() << endl;
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
		cout << "1.Добавление клиента в начало списка" << endl;
		cout << "2.Добавление клиента в конец списка" << endl;
		cout << "3.Просмотр клиентов" << endl;
		cout << "4.Количество клиентов" << endl;
		cout << "0.Выход" << endl;
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
				  cout<<"Количество клиентов: "<< lst.getSize() << endl;
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