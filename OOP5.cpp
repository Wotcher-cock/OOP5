#include <iostream>
#include "BD.h"
#include "PL.h"
using namespace std;

void func1(Base obj)
{
    std::cout << "func1\n";
}

void func2(Base* obj)
{
    std::cout << "func2\n";
}

void func3(Base& obj)
{
    std::cout << "func3\n";
}

int main()
{
    setlocale(0, "");
    
    Plane* plane1 = new Plane();
    Il_2* shtur1 = new Il_2();
    Plane* plane2 = new Il_2();

	cout << "\nПроверка на принадлежность\n";
	cout << "\nС помощью метода Classname:\n";
	cout << plane1->ClassName() << endl;
	cout << shtur1->ClassName() << endl;
	cout << plane2->ClassName() << endl;

	cout << "\nС помощью метода isA:\n";
	cout << plane1->isA("Plane") << endl;
	cout << shtur1->isA("Il_2") << endl;
	cout << plane2->isA("Plane") << endl << endl;

	cout << "Проверка типов dynamic_cast:\n";

	Il_2* shtur2 = dynamic_cast<Il_2*>(plane2);
	cout << shtur2->ClassName() << endl;
	shtur2->Method();
	plane2->Method();
	cout << endl;

	Il_2* shtur3 = new Il_2;
	cout << "\nОпасное приведение типов:\n";
	if (plane2->isA("Pear_Tree"))
		shtur3 = (Il_2*)plane2;
	cout << shtur3->ClassName() << endl;

	cout << "\nПередача объектов как параметров в функции:\n\n";
	cout << "Base:\n\n";
	Base base1 = new Base();
	func1(base1);
	cout << endl;
	Base* base2 = new Base();
	func2(base2);
	cout << endl;
	Base base3 = new Base();
	func3(base3);
	cout << endl;

	cout << "Desc:\n\n";
	Base desc1 = new Desc();
	func1(desc1);
	cout << endl;
	Base* desc2 = new Desc();
	func2(desc2);
	cout << endl;
	Base desc3 = new Desc();
	func3(desc3);
	cout << endl;

	return 0;

}

