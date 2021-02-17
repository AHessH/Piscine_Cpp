#ifndef __BRAIN_HPP
#define __BRAIN_HPP
class Brain
{
	private:
		int	conv;

	public:
		Brain	*identify();
		Brain(){};
		Brain(int conv);
		~Brain(){};
};

#endif
