#include "NumberBook.h"

void NumberBook::seeBook()
{
	system("cls");
	for (int i = 0; i < numberAbonent; i++) {
		std::cout <<"№."<< i+1 << " ФИО:" << book[i].getFIO() << " Телефоны: Домашний:" << book[i].getHom() << " Рабочий:" << book[i].getWork() << " Мобильный:" << book[i].getMobile() << std::endl;
	}
}

void NumberBook::setAbonent()
{
	abonent * ednition = AbonentCheker();
	
			short ender = 0;
			do {
				if (ednition == nullptr) {
					break;
				}
				std::cin.clear();
				std::cout << "Что изменим ? 0:(Имя) Телефоны: 1:(Домашний) 2:(Рабочий) 3:(Мобильный)";
				int swi = 0;
				std::string swic = "Default";
				std::cin >> swi;
				switch (swi)
				{
				case 0:
					std::cout << "Введите новые ФИО \n";
					std::cin >> swic;
					ednition->setFIO(swic);
					std::cin.clear();
					break;
				case 1:
					std::cout << "Введите новый Домашний телефон \n";
					std::cin >> swic;
					ednition->setHom(swic);
					std::cin.clear();
					break;
				case 2:
					std::cout << "Введите новый Рабочий телефон \n";
					std::cin >> swic;
					ednition->setWork(swic);
					std::cin.clear();
					break;
				case 3:
					std::cout << "Введите новый Мобильный телефон \n";
					std::cin >> swic;
					ednition->setMob(swic);
					std::cin.clear();
					break;
				default:
					std::cout << "Изменения не внесены ошибка выбора\n";
					std::cin.clear();
					continue;
					
				}
				std::cout << "Изменинм чтото еще ? 0:нет 1:да : ";
				std::cin >> ender;
			} while (ender!=0);
		}

void NumberBook::deletAbonent()
{	
	abonent defaul;
	abonent* ednition = AbonentCheker();
	for (int i = 0; i < numberAbonent; i++) {
		if (ednition == nullptr) {
			break;
		}
		if (book[i].getFIO() >= (ednition->getFIO()) && book[i].getHom() >= (ednition->getHom()) 
			&& book[i].getWork() >= (ednition->getWork()) && book[i].getMobile() >= (ednition->getMobile())&& i != (numberAbonent-1)) {
			book[i] = book[i + 1];
		}
		else {
			book[i] = defaul;
		}
	}

}
abonent* NumberBook::AbonentCheker()
{
	std::cout << "Введите имя Абонента или один из номеров телефона \n";
	std::string name;
	std::cin >> name;
	for (int i = 0; i < numberAbonent; i++) {
		if (name == book[i].getFIO() || name == book[i].getHom() || name == book[i].getWork() || name == book[i].getMobile()) {
			abonent* chek = &book[i];
			return chek;
		}
		else {
			std::cout << "Указаного абонента не существует \n";
			return nullptr;
		}
	}
}
