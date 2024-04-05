
#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
private:
	std::string name;
	std::string	effects;
public:
	ASpell(std::string nm, std::string ef);
	ASpell & operator=(ASpell const & src);
	ASpell(ASpell const & src);
	virtual ~ASpell();
	std::string	getName(void) const;
	std::string	getEffects(void) const;
	virtual ASpell *clone(void) const = 0;
	void launch(ATarget const &target) const;
} ;