#pragma once
#include <iostream>

class Base {
public:
	Base() {
		std::cout << "Конструктор по умолчанию Base\n";
	}
	Base(Base* obj) {
		std::cout << "Конструктор *obj Base\n";
	}
	Base(Base& obj) {
		std::cout << "Конструктор &obj Base\n";
	}
	virtual ~Base() {
		std::cout << "Деструктор Base\n";
	}
};

class Desc : public Base {
public:
	Desc() {
		std::cout << "Конструктор по умолчанию Desc\n";
	}
	Desc(Desc* obj) {
		std::cout << "Конструктор *obj Desc\n";
	}
	Desc(Desc& obj) {
		std::cout << "Конструктор &obj Desc\n";
	}
	~Desc() {
		std::cout << "Деструктор Desc\n";
	}
};