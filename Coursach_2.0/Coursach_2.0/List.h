
template <typename T>
class List {
public:
	List();
	~List();
    void addFirstElement(T data);
	void addLastElement(T data);
	void deleteFirstElement();
	void insertElement(T data, int index);
	void deleteElement(int index);
	void deleteLastElement();
	void clearList();
	int getSize() { 
		return size;
	}
	//для перехода по добавленным элементам
	//index- номер возвращаемого элемента
	T & operator[](const int index);
	void downloadInfo(T data);
	void sav(T data);
	//void newGet(const char *s);
	//void newWrite(const char *s);
	void savууу(T data);
private:
	template<typename T>
	class Node {
	public:
		Node *pNext;
		T data;
		Node(T data=T(), Node *pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
    };
	int size; //количество элементов в односвязном списке
	Node<T> *first;
};


template<typename T>
List<T>::List() {
	size = 0;
	first = nullptr;
}

template<typename T>
List<T>::~List() {
	clearList();
}

//добавление в конец списка
template<typename T>
void List<T>::addLastElement(T data) {
	if (first == nullptr) {
		first = new Node<T>(data);
	}
	else {
		Node<T> *current = this->first;
		while (current->pNext !=nullptr) {
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	size++;
}

//перегрузка [] для итераций
template<typename T>
T & List<T>::operator[](const int index) {
	int counter = 0;
	Node<T> *current = this->first;
	while (current != nullptr) {
		//если счетчик дошел до нужного индекса,то
		//достаем из этого элемента data
		if (counter == index) {
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

//удаление первого элемиента списка
template<typename T>
void List<T>::deleteFirstElement() {
	Node<T> *temp = first;
	first = first->pNext;
	delete temp;
	size--;
}

//полная очистка списка
template<typename T>
void List<T>::clearList()  {
	while (size) {
		deleteFirstElement();
	}
}

//добавление в начало списка
template<typename T>
void List<T>::addFirstElement(T data) {
	first = new Node<T>(data, first);
	size++;
}

//вставка элемента в список
template<typename T>
void List<T>::insertElement(T data, int index) {
	if (index == 0) {
		cout << "Некорректный ввод" << endl;
	}
	else if (index == 1) {
		addFirstElement(data);
	}
	else {
		Node<T> *prevElem = this->first;
		//находим предшествующий и делаем вставку через некст
		for (int i = 1; i < index - 1; i++) {
			prevElem = prevElem->pNext;
		}
		Node<T> *newNode = new Node<T>(data, prevElem->pNext);
		prevElem->pNext = newNode;
		size++;
	}
}

//удаление элемента по индексу
template<typename T>
void List<T>::deleteElement(int index) {
	if (index == 0) {
		cout << "Некорректный ввод" << endl;
	}
	else if (index == 1) {
		deleteFirstElement();
	}
	else {
		Node<T> *prevElem = this->first;
		//находим предшествующий и делаем указатель на удаляемый эл.
		for (int i = 1; i < index - 1; i++) {
			prevElem = prevElem->pNext;
		}
		Node<T> *toDelete = prevElem->pNext;
		prevElem->pNext = toDelete->pNext;
		delete toDelete;
		size--;
	}
}

//удалить последний элемент списка
template<typename T>
void List<T>::deleteLastElement() {
	deleteElement(size);
}


template<typename T>
void List<T>::downloadInfo(T data) {
	ifstream fin;
	fin.open("ClientDatabase.txt");
	if (!fin.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is ipen" << endl;
		while (fin.read((char*)&data, sizeof(T))) {
			addLastElement(data);
			cout << data << endl;;
		}
	}
	fin.close();
}

template<typename T>
void List<T>::sav(T data) {
	ofstream fout;
	fout.open("ClientDatabase.txt", ofstream::app);
	if (!fout.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is ipen" << endl;
		fout.write((char*)&data, sizeof(T));
	}
	fout.close();
}

template<typename T>
void List<T>::savууу(T data) {
	ofstream fout;
	fout.open("ClientDatabase.txt");
	if (!fout.is_open()) {
		cout << "Openning Error" << endl;
	}
	else {
		cout << "File is ipen" << endl;
		fout.write((char*)&data, sizeof(T));
	}
	fout.close();
}

//template<typename T>
//void List<T>::newGet(const char *s) {
//	ifstream fin;
//	fin.open(s);
//	T obj;
//	if (!fin.is_open()) {
//		cout << "error" << endl;
//	}
//	else {
//		while (fin.read((char*)&obj), sizeof(T))) {
//		cout << "Egogog" << endl;
//		addLastElement(obj);
//}
//	}
//	fin.close();
//}
//
//template<typename T>
//void List<T>::newWrite(const char *s) {
//	ofstream fo;
//	fo.open(s);
//	if (!fo.is_open()){
//		cout << "error" << endl;
//	}
//	Node<T> *p = this->first;
//	while (p->pNext != nullptr) {
//		p = p->pNext;
//	}
//	while (p != NULL) {
//		fout.write((char*)&p->data, sizeof(T));
//		p = p->pNext;
//	}
//	fo.close();
//}
//
//Node<T> *current = this->first;
//while (current->pNext != nullptr) {
//	current = current->pNext;
//}