#include "ATarget.hpp"

ATarget::ATarget(std::string tp) {
	
}
ATarget & ATarget::operator=(ATarget const & src);
ATarget::ATarget(ATarget const & src);
virtual ATarget::~ATarget();
std::string	ATarget::getType(void) const;
virtual ATarget *ATarget::clone(void) const = 0;
void ATarget::getHitBySpell(const ASpell &spell) const;

