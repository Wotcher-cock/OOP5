#pragma once
#include <iostream>

class Base {
public:
	Base() {
		std::cout << "";
	}
	Base(Base* obj) {
		std::cout << "";
	}
	Base(Base& obj) {
		std::cout << "";
	}
	virtual ~Base() {
		std::cout << "";
	}
};

class Desc : public Base {
public:
	Desc() {
		std::cout << "";
	}
	Desc(Desc* obj) {
		std::cout << "";
	}
	Desc(Desc& obj) {
		std::cout << "";
	}
	~Desc() {
		std::cout << "";
	}
};