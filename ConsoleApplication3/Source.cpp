#include <locale>
#include <Windows.h>
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

	string author;
	string publisher;
	int year;
	
	cout << "������� ������ "; 
	cin.getline(author, 30);
	for (int i = 0;i < 10;i++)
	{
		if (books[i].getAuthor() == author)
			cout << books[i].getAuthor() << "\t" << books[i].getName() << "\t" << books[i].getPublisher() << "\t��� �������: " << books[i].getYear() << "\t���������� �������: " << books[i].getCPage() << endl;
	}

}