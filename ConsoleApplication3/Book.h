#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
#include <iostream>

using namespace std;

class MyClass
{
private:
	string author;
	string name;
	string publisher;
	int year;
	int cPage;
public:

	void setBook(const string&author, const string&name, const string&publisher, const int&year, const int&cPage)
	{
		this->author = author;
		this->name = name;
		this->publisher = publisher;
		this->year = year;
		this->cPage = cPage;
	}

	void setAuthor(const string&author)
	{
		this->author = author;
	}
	void setName(const string&name)
	{
		this->name = name;
	}
	void setPublisher(const string&publisher)
	{
		this->publisher = publisher;
	}
	void setYear(const int&year)
	{
		this->year = year;
	}
	void setCPage(const int&cPage)
	{
		this->cPage = cPage;
	}

	string getAuthor()
	{
		return author;
	}
	string getName()
	{
		return name;
	}
	string getPublisher()
	{
		return publisher;
	}
	int getYear()
	{
		return year;
	}
	int getCPage()
	{
		return cPage;
	}
};

#endif