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
	uint64_t m_id;
	string m_name;
	char m_sex;
	Date m_dateOfBirth;
	string m_address;
	uint64_t m_social;
	string m_phone;//TODO: Create struct of integers for phone number??
	unique_ptr<PillCard> m_pillCard = make_unique<PillCard>();

public:
	Patient()=default;
	~Patient()=default;

	//Disable copying
	Patient(const Patient&) = delete;
	Patient& operator=(const Patient&) = delete;

	//Move constructor and assignment operator
	Patient(Patient&&);
	Patient& operator=(Patient&&);

	//Getters
	uint64_t GetId() const { return m_id; }
	string GetName() const { return m_name; }
	char GetSex() const { return m_sex; }
	Date GetDateOfBirth() const { return m_dateOfBirth; }
	string GetAddress() const { return m_address; }
	uint64_t GetSocial() const { return m_social; }
	string GetPhone() const { return m_phone; }
	//Get() const {}

	friend ostream& operator<< (ostream& os, const Patient& p);
};

