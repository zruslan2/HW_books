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

	books[0].setBook("Э. Успенский", "Лучшие стихи", "АСТ", 2018, 256);
	books[1].setBook("В. Маяковский", "Что такое хорошо?", "Эксмо", 2017, 80);
	books[2].setBook("Л. Толстой", "Филипок", "Эксмо", 2016, 96);
	books[3].setBook("Н. Носов", "Фантазеры", "Самовар", 2016, 96);
	books[4].setBook("Н. Носов", "Приключения Незнайки и его друзей", "Самовар", 2016, 160);
	books[5].setBook("Л. Толстой", "Сказки о животных для малышей", "Проф-Пресс", 2017, 144);
	books[6].setBook("С. Маршак", "Усатый-полосатый. Стихи и сказки", "АСТ", 2017, 256);
	books[7].setBook("С. Маршак", "Все сказки для малышей", "АСТ", 2015, 128);
	books[8].setBook("А. Барто", "Уронили мишку на пол...", "Самовар", 2016, 128);
	books[9].setBook("А. Пушкин", "У лукоморья дуб зеленый... (стихи)", "Самовар", 2016, 136);

	string tmp;	
	int year;
	char v;

	while (true)
	{
		system("cls");
		cout << "Выберите один из вариантов по выбору книги:" << endl << "a. По автору" << endl << "b. По издательству" << endl << "c. По году" << endl;
		cin >> v;
		if (v == 'a' || v == 'b' || v == 'c')break;
		else
		{
			cout << "Такого варианта нет, повторите" << endl;
			getchar();
			getchar();
		}
	}
	
	if (v == 'a')
	{
		system("cls");
		getchar();
		cout << "Введите автора ";
		/*cin.getline(tmp, 30);*/
		getline(cin, tmp);

		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl << left << setw(15) << "Автор" << setw(35) << "Название книги" << setw(16) << "Издательство" << setw(6) << "Год" << setw(6) << "Кол.ст" << endl;
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
		cout << "Введите издательство ";
		getline(cin, tmp);

		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl << left << setw(15) << "Автор" << setw(35) << "Название книги" << setw(16) << "Издательство" << setw(6) << "Год" << setw(6) << "Кол.ст" << endl;
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
		cout << "Выберите год, с которого показать книги ";
		cin >> year;

		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl << left << setw(15) << "Автор" << setw(35) << "Название книги" << setw(16) << "Издательство" << setw(6) << "Год" << setw(6) << "Кол.ст" << endl;
		for (int j = 0; j < 79; j++)cout << "-";
		cout << endl;

		for (int i = 0; i < 10; i++)
		{
			if (books[i].getYear() >= year)
				cout << left << setw(15) << books[i].getAuthor() << setw(35) << books[i].getName() << setw(16) << books[i].getPublisher() << setw(6) << books[i].getYear() << setw(6) << books[i].getCPage() << endl;
		}
	}

	
	

}