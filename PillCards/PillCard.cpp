#include "PillCard.h"

ostream& operator<< (ostream& os, const PillCard& pc)
{
	os << "---------------\n"
		<< "|  Pill Card  |\n"
		<< "---------------\n"
		<< "\n";

	for (auto it = pc.m_drugs.begin(); it != pc.m_drugs.end(); ++it)
	{
		cout << *it->second << endl;
	}
		
	return os;
}