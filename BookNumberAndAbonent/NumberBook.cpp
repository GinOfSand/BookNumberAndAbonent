#include "NumberBook.h"

void NumberBook::seeBook()
{
	system("cls");
	for (int i = 0; i < numberAbonent; i++) {
		std::cout <<"�."<< i+1 << " ���:" << book[i].getFIO() << " ��������: ��������:" << book[i].getHom() << " �������:" << book[i].getWork() << " ���������:" << book[i].getMobile() << std::endl;
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
				std::cout << "��� ������� ? 0:(���) ��������: 1:(��������) 2:(�������) 3:(���������)";
				int swi = 0;
				std::string swic = "Default";
				std::cin >> swi;
				switch (swi)
				{
				case 0:
					std::cout << "������� ����� ��� \n";
					std::cin >> swic;
					ednition->setFIO(swic);
					std::cin.clear();
					break;
				case 1:
					std::cout << "������� ����� �������� ������� \n";
					std::cin >> swic;
					ednition->setHom(swic);
					std::cin.clear();
					break;
				case 2:
					std::cout << "������� ����� ������� ������� \n";
					std::cin >> swic;
					ednition->setWork(swic);
					std::cin.clear();
					break;
				case 3:
					std::cout << "������� ����� ��������� ������� \n";
					std::cin >> swic;
					ednition->setMob(swic);
					std::cin.clear();
					break;
				default:
					std::cout << "��������� �� ������� ������ ������\n";
					std::cin.clear();
					continue;
					
				}
				std::cout << "�������� ����� ��� ? 0:��� 1:�� : ";
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
	std::cout << "������� ��� �������� ��� ���� �� ������� �������� \n";
	std::string name;
	std::cin >> name;
	for (int i = 0; i < numberAbonent; i++) {
		if (name == book[i].getFIO() || name == book[i].getHom() || name == book[i].getWork() || name == book[i].getMobile()) {
			abonent* chek = &book[i];
			return chek;
		}
		else {
			std::cout << "��������� �������� �� ���������� \n";
			return nullptr;
		}
	}
}
