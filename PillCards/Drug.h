#pragma once
#include "Enums.h"
#include "Helpers.h"
#include <string>
#include <ostream>
#include <stdint.h>

using namespace std;

using Strength = pair<uint32_t, UnitOfMeasurement>;

class Drug
{
private:
	uint64_t m_applNo;
	string m_name;
	Strength m_strength = make_pair<uint32_t, UnitOfMeasurement>(0, UnitOfMeasurement::Milligram);
	string m_purpose;
	string m_directions;
	TimeOfDay m_timeOfDay;
	string m_additionalInfo;

public:
	Drug()=default;
	~Drug()=default;

	friend ostream& operator<< (ostream& os, const Drug& pc);
};

