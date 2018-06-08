#pragma once
#include <stdint.h>
#include <string>

struct Date
{
	uint8_t month;
	uint8_t day;
	uint16_t year;
};

struct PatientInfo
{
	uint64_t id;
	std::string name;
	char sex;
	Date dateOfBirth;
	std::string address;
	uint64_t social;
	std::string phone;
};

struct PhoneNumber
{
	uint16_t areaCode;//First 3 digits
	uint16_t prefix;//Middle 3 digits
	uint16_t lineNumber;//Last 4 digits
};

struct SocialSecurityNumber
{
	uint16_t area;//First 3 digits
	uint16_t group;//Middle 2 digits
	uint16_t serial;//Last 4 digits
};