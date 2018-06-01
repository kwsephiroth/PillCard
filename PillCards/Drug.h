#pragma once
#include "Enums.h"
#include "Helpers.h"
#include <string>
#include <stdint.h>

using namespace std;

class Drug
{
private:
	using Strength = pair<uint32_t, UnitOfMeasurement>;

	uint64_t m_applNo;
	string m_name;
	Strength m_strength = make_pair<uint32_t, UnitOfMeasurement>(0, UnitOfMeasurement::Milligram);
	string m_purpose;
	string m_directions;
	TimeOfDay m_timeOfDay;
	string m_additionalInfo;

	//TODO: Create DrugInfo struct???

public:
	Drug(uint64_t applNo,
		string name,
		Strength strength,
		string purpose,
		string directions,
		TimeOfDay timeOfDay,
		string additionalInfo = "")
	{
		m_applNo = applNo;
		m_name = name;
		m_strength = strength;
		m_purpose = purpose;
		m_directions = directions;
		m_timeOfDay = timeOfDay;
		m_additionalInfo = additionalInfo;
	}
	//Drug()=default;
	~Drug()=default;

	uint64_t GetApplNo() const { return this->m_applNo; }
	string GetName() const { return this->m_name; }
	Strength GetStrength() const { return this->m_strength; }
	string GetPurpose() const { return this->m_purpose; }
	string GetDirections() const { return this->m_directions; }
	TimeOfDay GetTimeOfDay() const { return this->m_timeOfDay; }
	string GetAdditionalInfo() const { return this->m_additionalInfo; }

	friend ostream& operator<< (ostream& os, const Drug& pc);
};