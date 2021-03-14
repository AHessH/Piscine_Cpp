#include <iostream>
#include <string>
#include <stdlib.h>

#define SIZE 26

struct	Data
{
	std::string	s1;
	int			num;
	std::string	s2;
};

void * serialize(void)
{
	Data *data = new Data;
	std::string capital_letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string small_letter = "abcdefghijklmnopqrstuvwxyz";
	int	random_lenght_s1 = random() % 30;
	int	random_lenght_s2 = random() % 30;

	for (int i = 0; i < random_lenght_s1; i++)
		if (random() % 2)
			data->s1 += small_letter[random() % SIZE];
		else
			data->s1 += capital_letter[random() % SIZE];

	for (int i = 0; i < random_lenght_s2; i++)
		if (random() % 2)
			data->s2 += small_letter[random() % SIZE];
		else
			data->s2 += capital_letter[random() % SIZE];

	data->num = random();
	return (data);

}

Data * deserialize(void *raw)
{
	Data *data = reinterpret_cast<Data*>(raw);
	return (data);
}


int main(void)
{
	srand(time(0));
	Data *obj = deserialize(serialize());
	std::cout << obj->s1 << " " << obj->s2 << " " << obj->num << std::endl;
	return (0);
}