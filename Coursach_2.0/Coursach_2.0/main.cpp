#include "Header.h"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List<int>lst;
	lst.addLastElement(5);
	lst.addLastElement(11);
	lst.addLastElement(18);
	cout <<"Количество элементво списка: " << lst.getSize() << endl;
	//cout << lst[1] << endl;
	
	for (int i = 0; i < lst.getSize(); i++){
		cout << lst[i] << endl;
	}
	int k;
	cin >> k;
	lst.insertElement(20, k);
	cout << "Количество элементво списка: " << lst.getSize() << endl;
	for (int i = 0; i < lst.getSize(); i++){
		cout << lst[i] << endl;
	}
	cout << "Delete last element" << endl;
	lst.deleteLastElement();
	lst.deleteFirstElement();
	for (int i = 0; i < lst.getSize(); i++){
		cout << lst[i] << endl;
	}
	system("pause");
	
}