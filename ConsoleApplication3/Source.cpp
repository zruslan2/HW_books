#include <locale>
#include <Windows.h>
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

	string author;
	string publisher;
	int year;
	
	cout << "Введите автора "; 
	cin.getline(author, 30);
	for (int i = 0;i < 10;i++)
	{
		if (books[i].getAuthor() == author)
			cout << books[i].getAuthor() << "\t" << books[i].getName() << "\t" << books[i].getPublisher() << "\tгод выпуска: " << books[i].getYear() << "\tколичество страниц: " << books[i].getCPage() << endl;
	}

}