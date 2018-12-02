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
		cout << "6.Показать список клиентов" << endl;
		cout << "7.Сохранить в файл" << endl;
		cout << "8.Поиск" << endl;
		cout << "0.Выход" << endl;
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
			cout << "Введите номер клиента, которого желаете удалить: ";
			cin >> del;
			lst.deleteElement(del);
			break;
		}
		case 4:
		{
			cout << "Количество клиентов: " << lst.getSize() << endl;
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
			cout << "Выберите существующих пункт меню" << endl;
		}
		break;
		}

	}
	system("pause");
	return 0;
}