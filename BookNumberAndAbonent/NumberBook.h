#pragma once
#include "abonent.h"
#include <iostream>
class NumberBook
{
private:
	abonent* book = nullptr;
	int numberAbonent;
public:
	NumberBook(int number) : book{ new abonent[number] }, numberAbonent{number} {}
	NumberBook() : NumberBook(1){}
	~NumberBook() {
		delete[]book;
	}
	void setBook(int number) {
		if (numberAbonent + number < 0){ 
			number = 0;
		}
		abonent * saveA =  new abonent[numberAbonent + number];
		
		for (int i = 0; i < numberAbonent; i++) {
			saveA[i] = book[i];
		}
		delete[]book;
		book = saveA;
		numberAbonent += number;
	}
	 int getBookMaxAbonent() {return numberAbonent;}
	 void seeBook();
	 void setAbonent();
	 abonent* AbonentCheker();
	 void deletAbonent();
	
};

