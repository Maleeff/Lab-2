#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include<iostream>
#include <math.h>
#include <string.h>

using namespace std;

class Book
{
	int CountPage;
    string Book_Name;
    string Author;
public:
    Book();
    Book(int Str, string Name, string Aut);
    Book(const Book& other);
    int Get_CountPage()const;
    string Get_Book_Name()const;
    string Get_Author()const;
    void Set_CountPage(int Str);
    void Set_Book_Name(string Name);
    void Set_Author(string Aut);
    void Print()const;
    Book& operator = (const Book& other);
    bool operator == (const Book& other);
    bool operator != (const Book& other);
    bool operator > (const Book& other);
    bool operator >= (const Book& other);
    bool operator < (const Book& other);
    bool operator <= (const Book& other);
    Book& operator ++();
    Book& operator --();
    Book& operator ++(int value);
    Book& operator --(int value);

};

#endif // BOOK_H_INCLUDED
