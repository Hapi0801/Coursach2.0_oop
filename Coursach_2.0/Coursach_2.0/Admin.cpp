#include "Header.h"

void Admin::adminLogIn() {
	int i = 0;
	while ((c = _getch()) != '\r') {
		password[i++] = c;
		_putch('*');
	}
	password[i] = '\0';
}