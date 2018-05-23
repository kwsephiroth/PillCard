#pragma once
#include "Drug.h"
#include "Enums.h"
#include "Helpers.h"
#include "Structs.h"
#include <string>
#include <stdint.h>
#include <map>
#include <memory>
#include <iostream>

using namespace std;

using Drugs = map<uint64_t, unique_ptr<Drug>>;

class PillCard
{
private:
	Drugs m_drugs = {};

public:
	PillCard() { m_drugs.emplace(0, make_unique<Drug>()); m_drugs.emplace(1, make_unique<Drug>());};
	//PillCard() = default;
	~PillCard()=default;

	//Disable copying
	PillCard(const PillCard&) = delete;
	PillCard& operator=(const PillCard&) = delete;

	//Move constructor and assignment operator
	PillCard(PillCard&&);
	PillCard& operator=(PillCard&&);


	friend ostream& operator<< (ostream& os, const PillCard& pc);
};
