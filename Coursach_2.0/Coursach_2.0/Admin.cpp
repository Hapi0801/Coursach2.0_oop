//#include "Header.h"
//
//void Admin::adminLogIn() {
//	int i = 0;
//	while ((c = _getch()) != '\r') {
//		password[i++] = c;
//		_putch('*');
//	}
//	password[i] = '\0';
//}
//
//void Admin::encryption(){
//
//		int k; //���������� ������ - ����������/������������
//		string result = ""; //������ - ���������
//		string key = ""; //������ - ���� 
//		string key_on_s = "";
//		bool flag;
//		int x = 0, y = 0; //���������� ������ ������� �� ������� ��������
//		int registr = 0; //������� �������
//		char dublicat; //�������� ��������� �����
//		//������������ ������� �������� �� �������� ��������
//		int shift = 0;
//		char **tabula_recta = new char *[26]; //������� ��������
//		for (int i = 0; i<26; i++)
//			tabula_recta[i] = new char[26];
//		string alfabet = "abcdefghijklmnopqrstuvwxyz"; //������� ��������
//		//������������ �������
//		for (int i = 0; i < 26; i++)
//			for (int j = 0; j < 26; j++)
//			{
//				shift = j + i;
//				if (shift >= 26) shift = shift % 26;
//				tabula_recta[i][j] = alfabet[shift];
//			}
//		cout << "Enter 1 for encryption and decryption of 2\n";
//		cin >> k;
//		switch (k) //���� k
//		{
//		case 1: //���� ������� ����������
//		{
//			cout << "Enter key encryption\n";
//			cin >> key;
//			cout << "Read of file...\n";
//			setlocale(LC_ALL, "Russian");//������ �����
//			string s; //������ ��������� �� �����
//			ifstream in("Test.txt");
//			getline(in, s);
//			cout << "Text of file: \n" << s << endl;
//			in.close();
//			cout << "Reading complete!\n";
//			cout << "Encryption...\n";
//			//������������ ������, ������ ���������, ��������� �� ���������� �����
//			for (int i = 0; i < s.length(); i++)
//			{
//				key_on_s += key[i % key.length()];
//			}
//			//���������� ��� ������ �������
//			for (int i = 0; i < s.length(); i++)
//			{
//				//���� ����������� ������
//				if (((int)(s[i]) < 65) || ((int)(s[i]) > 122))
//					result += s[i];
//				else
//				{
//					//����� � ������ ������� ������, ������������ � ������� �����
//					int l = 0;
//					flag = false;
//					//���� �� ������ ������
//					while ((l < 26) && (flag == false))
//					{
//						//���� ������ ������
//						if (key_on_s[i] == tabula_recta[l][0])
//						{
//							//���������� � � ����� ������
//							x = l;
//							flag = true;
//						}
//						l++;
//					}
//					//��������� �������� ������� ��������� �����
//					if (((int)(s[i]) <= 90) && ((int)(s[i]) >= 65))
//					{
//						dublicat = (char)((int)(s[i]) + 32);
//						registr = 1;
//					}
//					else
//					{
//						registr = 0;
//						dublicat = s[i];
//					}
//					l = 0;
//					flag = false;
//					//���� �� ������ ������� � ������ ������ � �������� ������
//					while ((l < 26) && (flag == false))
//					{
//						if (dublicat == tabula_recta[0][l])
//						{
//							//���������� ����� �������
//							y = l;
//							flag = true;
//						}
//						l++;
//					}
//					//����������� ������� ����� �� ���������
//					if (registr == 1)
//					{
//						//�������� ������ �� �������������� �������
//						dublicat = char((int)(tabula_recta[x][y]) - 32);
//						result += dublicat;
//					}
//					else
//						result += tabula_recta[x][y];
//				}
//			}
//			cout << "Encryption complete!\n";
//			cout << "Result:\n";
//			cout << result; //����� ����������
//			break;
//		}
//		case 2: //���� ������� ������������
//		{
//			cout << "Enter key decryption\n";
//			cin >> key;
//			cout << "Read of file...\n";
//			setlocale(LC_ALL, "Russian");
//			string s;
//			ifstream in("Test.txt");
//			getline(in, s);
//			cout << "Text of file: \n" << s << endl;
//			in.close();
//			cout << "Reading complete!\n";
//			cout << "Decryption...\n";
//			//������������ ������, ������ �����������, ��������� �� ���������� �����
//			for (int i = 0; i < s.length(); i++)
//			{
//				key_on_s += key[i % key.length()];
//			}
//			//������������ ��� ������ �������
//			for (int i = 0; i < s.length(); i++)
//			{
//				//���� ������������� ������
//				if (((int)(s[i]) < 65) || ((int)(s[i]) > 122))
//					result += s[i];
//				else
//				{
//					//����� � ������ ������� ������, ������������ � ������� �����
//					int l = 0;
//					flag = false;
//					//���� �� ������ ������
//					while ((l < 26) && (flag == false))
//					{
//						//���� ������ ������
//						if (key_on_s[i] == tabula_recta[l][0])
//						{
//							//���������� � � ����� ������
//							x = l;
//							flag = true;
//						}
//						l++;
//					}
//					//��������� �������� ������� ��������� �����
//					if (((int)(s[i]) <= 90) && ((int)(s[i]) >= 65))
//					{
//						dublicat = (char)((int)(s[i]) + 32);
//						registr = 1;
//					}
//					else
//					{
//						registr = 0;
//						dublicat = s[i];
//					}
//					l = 0;
//					flag = false;
//					//���� �� ������ ������� � x ������ � �������� ������
//					while ((l < 26) && (flag == false))
//					{
//						if (dublicat == tabula_recta[x][l])
//						{
//							//���������� ����� �������
//							y = l;
//							flag = true;
//						}
//						l++;
//					}
//					//����������� ������� ����� �� ���������
//					if (registr == 1)
//					{
//						//�������� ������ �� �������������� �������
//						dublicat = char((int)(tabula_recta[0][y]) - 32);
//						result += dublicat;
//					}
//					else
//						result += tabula_recta[0][y];
//				}
//			}
//			cout << "Decryption complete!\n";
//			cout << "Result:\n";
//			cout << result; //����� ����������
//			break;
//		}
//		default: //���� ��������� ��������
//		{
//			cout << "Error value\n";
//			break;
//		}
//		}
//
//}