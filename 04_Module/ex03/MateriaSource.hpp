#ifndef __MATERIA_SOURCE_HPP
#define __MATERIA_SOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_materia[4];
		int _count;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		~MateriaSource() {}

		virtual void learnMateria(AMateria *m);
		virtual AMateria *createMateria(const std::string &type);

		MateriaSource &operator= (const MateriaSource &obj);

};

#endif
