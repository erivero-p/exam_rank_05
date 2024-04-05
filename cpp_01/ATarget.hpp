
#pragma once
#include <iostream>
#include "ASpell.hpp"

class ATarget {
private:
	std::string type;
public:
	ATarget(std::string tp);
	ATarget & operator=(ATarget const & src);
	ATarget(ATarget const & src);
	virtual ~ATarget();
	std::string	getType(void) const;
	virtual ATarget *clone(void) const = 0;
	void getHitBySpell(const ASpell &spell) const;
} ;
