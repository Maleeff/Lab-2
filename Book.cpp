#include "Book.h"
#include <iostream>
#include <string.h>

using namespace std;

Book::Book()
{
	CountPage = 0;
}
Book::Book(int Str, string Name, string Aut)
{
	if (Str < 0)
	{
		Str = 0;
	};
		CountPage = Str;
		Book_Name = Name;
		Author = Aut;
}
Book::Book(const Book& other)
{
	this->CountPage = other.CountPage;
	this->Book_Name = other.Book_Name;
	this->Author = other.Author;
}
int Book::Get_CountPage()const
{
    return CountPage;
}
string Book::Get_Book_Name()const
{
    return Book_Name;
}
string Book::Get_Author()const
{
    return Author;
}
void Book::Set_CountPage(int Str)
{
	if (Str < 0)
	{
		Str = 0;
	};
	CountPage = Str;
}
void Book::Set_Book_Name(string Name)
{
    Book_Name = Name;
}
void Book::Set_Author(string Aut)
{
    Author = Aut;
}
void Book::Print()const
{
	cout << "This Book - " << Book_Name << "  Was writen by - " << Author << " And have " << CountPage << " pages" << endl;
}
Book& Book::operator = (const Book& other)
{
	this->CountPage = other.CountPage;
	this->Book_Name = other.Book_Name;
	this->Author = other.Author;
	return *this;
}
bool Book::operator == (const Book& other)
{
	return this->CountPage == other.CountPage && this->Author == other.Author && this->Book_Name == other.Book_Name;
}
bool Book::operator != (const Book& other)
{
	return !(this->CountPage == other.CountPage && this->Author == other.Author && this->Book_Name == other.Book_Name);
}
bool Book::operator > (const Book& other)
{
	return this->CountPage > other.CountPage ;
}
bool Book::operator >= (const Book& other)
{
	return this->CountPage >= other.CountPage;
}
bool Book::operator < (const Book& other)
{
	return this->CountPage < other.CountPage;
}
bool Book::operator <= (const Book& other)
{
	return this->CountPage <= other.CountPage;
}
Book& Book::operator ++()
{
	this->CountPage++;
	return *this ;
}
Book& Book::operator --()
{
	this->CountPage--;
	return *this;
}
Book& Book::operator ++(int value)
{
	Book Other(*this);
	this->CountPage++;
	return Other;
}
Book& Book::operator --(int value)
{
	Book Other(*this);
	this->CountPage--;
	return Other;
}
