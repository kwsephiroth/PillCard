#pragma once
#include "Drug.h"
#include "Enums.h"
#include "Helpers.h"
#include "Structs.h"
#include "PillCard.h"
#include <string>
#include <stdint.h>
#include <memory>

using namespace std;

class Patient
{
private:
	string m_name;
	char m_sex;
	Date m_dateOfBirth;
	string m_address;
	uint64_t m_social;
	uint64_t m_id;
	string m_phone;
	unique_ptr<PillCard> m_pillCard = make_unique<PillCard>();

public:
	Patient()=default;
	~Patient()=default;

	friend ostream& operator<< (ostream& os, const Patient& p);
};

