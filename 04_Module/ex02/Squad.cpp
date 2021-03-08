#include "Squad.hpp"

Squad::Squad()
{
	_count = 0;
	_squad = new s_Squad;
	_squad->next = NULL;
	_squad->obj = NULL;
}

Squad::Squad(Squad const &obj)
{
	*this = obj;
}


Squad::~Squad()
{
	s_Squad *copy;

	for (int i = 0; i < this->getCount(); i++)
	{
		copy = _squad->next;
		_squad->obj->~ISpaceMarine();
		delete _squad;
		_squad = copy;
	}
}


int Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int unit_index) const
{
	s_Squad *item;

	item = _squad;
	for (int i = 0; i < unit_index; i++)
		item = item->next;
	return (item->obj);
}

int Squad::push(ISpaceMarine *item)
{	
	if (item == NULL)
		return (-1);
	if (_squad->obj == NULL)
	{
		_squad->obj = item;
		_squad->next = NULL;
	}
	else
	{
		s_Squad *copy = _squad;
		while (copy->next != NULL)
			copy = copy->next;
		copy->next = new s_Squad;
		copy->next->obj = item;
		copy->next->next = NULL;
	}
	_count++;
	return (_count);
}

Squad &Squad::operator=(Squad const &obj)
{
	_count = obj._count;
	_squad = obj._squad;
	
	return (*this);
}
