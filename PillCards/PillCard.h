#pragma once
#include "Drug.h"
#include "Enums.h"
#include "Helpers.h"
#include "Structs.h"
#include <string>
#include <stdint.h>
#include <map>
#include <memory>

using namespace std;

using Drugs = map<uint64_t, unique_ptr<Drug>>;

class PillCard
{
private:
	Drugs m_drugs;

public:
	PillCard()=default;
	~PillCard()=default;
};

