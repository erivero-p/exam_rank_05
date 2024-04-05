#include "Warlock.hpp"

Warlock::Warlock(void) {

}

Warlock::Warlock(const Warlock &src) {

	*this = src;
}

Warlock &Warlock::operator=(const Warlock &src) {

	if (this != &src)
	{
		title = src.title;
		name = src.name;
	}
	return (*this);
}

Warlock::Warlock(std::string nm, std::string tt) {

	this->name = nm;
	this->title = tt;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {

	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName(void) const {

	return (this->name);
}
const std::string &Warlock::getTitle(void) const {

	return (this->title);
}
void	Warlock::setTitle(const std::string &tt) {

	this->title = tt;
}

void	Warlock::introduce(void) const {

	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
