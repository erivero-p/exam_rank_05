#include "ASpell.hpp"

ASpell::ASpell(std::string nm, std::string ef) : name(nm), effects(ef) {

}

ASpell &ASpell::operator=(ASpell const &src) {

	if (this != &src)
	{
		name = src.name;
		effects = src.effects;
	}
	return(*this);
}

ASpell::ASpell(ASpell const &src) {

	*this = src;
}

ASpell::~ASpell() {

}

std::string	ASpell::getName(void) const {

	return (this->name);
}
std::string	ASpell::getEffects(void) const {

	return (this->effects);
}

void ASpell::launch(ATarget const &target) const {

	target.getHitBySpell(*this);
}