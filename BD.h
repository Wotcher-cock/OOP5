#pragma once
#include <iostream>

class Base {
public:
	Base() {
		std::cout << "����������� �� ��������� Base\n";
	}
	Base(Base* obj) {
		std::cout << "����������� *obj Base\n";
	}
	Base(Base& obj) {
		std::cout << "����������� &obj Base\n";
	}
	virtual ~Base() {
		std::cout << "���������� Base\n";
	}
};

class Desc : public Base {
public:
	Desc() {
		std::cout << "����������� �� ��������� Desc\n";
	}
	Desc(Desc* obj) {
		std::cout << "����������� *obj Desc\n";
	}
	Desc(Desc& obj) {
		std::cout << "����������� &obj Desc\n";
	}
	~Desc() {
		std::cout << "���������� Desc\n";
	}
};