// Animals.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <iostream>
using namespace std;

class Animal
{
protected:
	string name;
public:
	Animal(string name)
		: name(name)
	{
	}

	virtual void Say() = 0;
	virtual void Nick() = 0;
};

class Dog : public Animal
{
public:
	Dog(string name) : Animal(name)
	{
	}

	void Say()
	{
		cout << name << " speak Woof!" << endl;
	}
	void Nick()
	{
		cout << name << " name Dog#1" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name) : Animal(name)
	{
	}

	void Say()
	{
		cout << name << " speak Meow" << endl;
	}
	void Nick()
	{
		cout << name << " name Cat#1" << endl;
	}
};

class Duck : public Animal
{
public:
	Duck(string name) : Animal(name)
	{
	}

	void Say() override
	{
		cout << name << " speak Krya-krya" << endl;
	}
	void Nick() override
	{
		cout << name << " name Duck#1" << endl;
	}
};


int main()
{
	/*Animal * animals[3] = {
		new Dog("Dog"),
		new Cat("Cat"),
		new Duck("Duck")
	};*/
	Dog dog("Dog");
	Cat cat("Cat");
	Duck duck("Duck");

	std::reference_wrapper<Animal> animals[3] = {
	  dog,
	  cat,
	  duck
	};


	for (int i = 0; i < 3; ++i)
	{
		((Animal&)(animals[i])).Say();
		((Animal&)(animals[i])).Nick();
		/*animals[i]->Say();
		animals[i]->Nick();*/
	}

	system("pause");
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
