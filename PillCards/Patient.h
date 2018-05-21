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
	char sex;
	Date m_dateOfBirth;
	string address;
	uint64_t social;
	uint64_t id;
	string phone;
	unique_ptr<PillCard> m_pillCard;

public:
	Patient()=default;
	~Patient()=default;
};

