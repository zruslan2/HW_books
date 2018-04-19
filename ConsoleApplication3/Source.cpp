#include <locale>
#include <Windows.h>
#include <iomanip>
#include "Book.h"

void main()
{
	setlocale(LC_ALL, "Ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Book books[10];

	books[0].setBook("�. ���������", "������ �����", "���", 2018, 256);
	books[1].setBook("�. ����������", "��� ����� ������?", "�����", 2017, 80);
	books[2].setBook("�. �������", "�������", "�����", 2016, 96);
	books[3].setBook("�. �����", "���������", "�������", 2016, 96);
	books[4].setBook("�. �����", "����������� �������� � ��� ������", "�������", 2016, 160);
	books[5].setBook("�. �������", "������ � �������� ��� �������", "����-�����", 2017, 144);
	books[6].setBook("�. ������", "������-���������. ����� � ������", "���", 2017, 256);
	books[7].setBook("�. ������", "��� ������ ��� �������", "���", 2015, 128);
	books[8].setBook("�. �����", "������� ����� �� ���...", "�������", 2016, 128);
	books[9].setBook("�. ������", "� ��������� ��� �������... (�����)", "�������", 2016, 136);

	string tmp;	
	int year;
	char v;

	while (true)
	{
		system("cls");
		cout << "�������� ���� �� ��������� �� ������ �����:" << endl << "a. �� ������" << endl << "b. �� ������������" << endl << "c. �� ����" << endl;
		cin >> v;
		if (v == 'a' || v == 'b' || v == 'c')break;
		else
		{
			cout << "������ �������� ���, ���������" << endl;
			getchar();
			getchar();
		}
	}
	
	if (v == 'a')
	{
		system("cls");
		getchar();
		cout << "������� ������ ";
		/*cin.getline(tmp, 30);*/
		getline(cin, tmp);

		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl << left << setw(15) << "�����" << setw(35) << "�������� �����" << setw(16) << "������������" << setw(6) << "���" << setw(6) << "���.��" << endl;
		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl;

		for (int i = 0; i < 10; i++)
		{
			if (books[i].getAuthor() == tmp)
				cout << left << setw(15) << books[i].getAuthor() << setw(35) << books[i].getName() << setw(16) << books[i].getPublisher() << setw(6) << books[i].getYear() << setw(6) << books[i].getCPage() << endl;
		}
	}
	else if (v == 'b')
	{
		system("cls");
		getchar();
		cout << "������� ������������ ";
		getline(cin, tmp);

		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl << left << setw(15) << "�����" << setw(35) << "�������� �����" << setw(16) << "������������" << setw(6) << "���" << setw(6) << "���.��" << endl;
		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl;

		for (int i = 0; i < 10; i++)
		{
			if (books[i].getPublisher() == tmp)
				cout << left << setw(15) << books[i].getAuthor() << setw(35) << books[i].getName() << setw(16) << books[i].getPublisher() << setw(6) << books[i].getYear() << setw(6) << books[i].getCPage() << endl;
		}
	}
	else if (v == 'c')
	{
		system("cls");
		getchar();
		cout << "�������� ���, � �������� �������� ����� ";
		cin >> year;

		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl << left << setw(15) << "�����" << setw(35) << "�������� �����" << setw(16) << "������������" << setw(6) << "���" << setw(6) << "���.��" << endl;
		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl;

		for (int i = 0; i < 10; i++)
		{
			if (books[i].getYear() >= year)
				cout << left << setw(15) << books[i].getAuthor() << setw(35) << books[i].getName() << setw(16) << books[i].getPublisher() << setw(6) << books[i].getYear() << setw(6) << books[i].getCPage() << endl;
		}
	}

	
	

}