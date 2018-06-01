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

class PillCard
{
private:
	using Drugs = map<uint64_t, unique_ptr<Drug>>;
	Drugs m_drugs = {};

public:
	//PillCard() { m_drugs.emplace(0, make_unique<Drug>()); m_drugs.emplace(1, make_unique<Drug>());};
	PillCard() = default;
	~PillCard()=default;

	//Disable copying
	PillCard(const PillCard&) = delete;
	PillCard& operator=(const PillCard&) = delete;

	//Move constructor and assignment operator
	PillCard(PillCard&&);
	PillCard& operator=(PillCard&&);

	void AddDrug(Drug&&);
	void RemoveDrug(uint64_t);//TODO: Implement way to remove drug from map. Also, determine if application number is even a good key.
	const Drug& GetDrug(uint64_t applNo) const;
	const Drugs& GetDrugList() const { return this->m_drugs; }

	friend ostream& operator<< (ostream& os, const PillCard& pc);
};
