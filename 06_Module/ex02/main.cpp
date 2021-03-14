#include <iostream>
#include <string>
#include <stdlib.h>

class Base
{
	public:
		virtual ~Base(){};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void)
{

	int	rand_num = random() % 3;
	std::cout << rand_num << std::endl;

	if (rand_num == 2)
	{
		std::cout << "Generate A" << std::endl;
		return (new A());
	}
	else if (rand_num == 1)
	{
		std::cout << "Generate B" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Generate C" << std::endl;
		return (new C());
	}
	return (NULL);
}

void identify_from_pointer(Base *p)
{
	if ((dynamic_cast<A*> (p)))
		std::cout << "A identified from pointer" << std::endl;
	else if ((dynamic_cast<B*> (p)))
		std::cout << "B identified from pointer" << std::endl;
	else if ((dynamic_cast<C*> (p)))
		std::cout << "C identified from pointer" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A a = dynamic_cast<A&> (p);
		std::cout << "A identified from reference" << std::endl;
	}
	catch(...) {}
	try
	{
		B b = dynamic_cast<B&> (p);
		std::cout << "B identified from reference" << std::endl;
	}
	catch(...) {}
	try
	{
		C c = dynamic_cast<C&> (p);
		std::cout << "C identified from reference" << std::endl;
	}
	catch(...) {}
}

int	main(void)
{
	srand(time(0));

	Base *i1 = generate();
	Base *i2 = generate();
	Base *i3 = generate();
	Base *i4 = generate();
	Base *i5 = generate();
	Base *i6 = generate();
	Base *i7 = generate();

	identify_from_pointer(i1);
	identify_from_pointer(i2);
	identify_from_pointer(i3);
	identify_from_pointer(i4);

	identify_from_reference(*i5);
	identify_from_reference(*i6);
	identify_from_reference(*i7);


	return (0);
}