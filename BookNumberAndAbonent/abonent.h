#pragma once
#include <string>
class abonent
{
private:
	std::string abonentName;
	std::string homenumber;
	std::string worknumber;
	std::string mobilenumber;
public:
	abonent(std::string name, std::string home, std::string work, std::string mobile){
		abonentName = name;
		homenumber = home;
		worknumber = work;
		mobilenumber = mobile;
	}
	abonent() : abonent("DefaulName", "101101", "110011", "11111111111") {}
	~abonent() {
	}
	abonent * setFIO(std::string name) {
		abonentName = name;
		return this;
	}
	abonent * setHom(std::string hom) {
		homenumber = hom;
		return this;
	}
	abonent * setWork(std::string work) {
		worknumber = work;
		return this;
	}
	abonent * setMob(std::string mobile) {
		mobilenumber = mobile;
		return this;
	}
	std::string getFIO() {
		return abonentName;
	}
	std::string getHom() {
		return homenumber;
	}
	std::string getWork() {
		return worknumber;
	}
	std::string getMobile() {
		return mobilenumber;
	}
};

