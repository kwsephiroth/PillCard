#pragma once
#include <stdint.h>

struct Date
{
	uint8_t month;
	uint8_t day;
	uint16_t year;
};

struct PatientInfo
{
	uint64_t id;
	string name;
	char sex;
	Date dateOfBirth;
	string address;
	uint64_t social;
	string phone;
};