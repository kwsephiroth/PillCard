#include "Patient.h"

ostream& operator<< (ostream& os, const Patient& p)
{
	os << "Patient Name: " << p.m_name << "\n"
		<< "Sex: " << p.m_sex << "\n"
		<< "Date Of Birth: " << p.m_dateOfBirth.month << "/" << p.m_dateOfBirth.day << "/" << p.m_dateOfBirth.year << "\n"
		<< "Social: " << p.m_social << "\n"
		<< "Identification: " << p.m_id << "\n"
		<< "Address: " << p.m_address << "\n"
		<< "Phone: " << p.m_phone << "\n\n"
		<< *p.m_pillCard;

	return os;
}

Patient::Patient(Patient&& other)//Move constructor
{
	this->m_pillCard = move(other.m_pillCard);
	this->m_name = other.m_name;
	this->m_sex = other.m_sex;
	this->m_dateOfBirth = other.m_dateOfBirth;
	this->m_address = other.m_address;
	this->m_social = other.m_social;
	this->m_id = other.m_id;
	this->m_phone = other.m_phone;

	other.m_pillCard = nullptr;
	other.m_name = "";
	other.m_sex = '\0';
	other.m_dateOfBirth.day = 0; other.m_dateOfBirth.month = 0; other.m_dateOfBirth.year = 0;
	other.m_social = 0;
	other.m_id = 0;
	other.m_phone = "";
}

Patient& Patient::operator=(Patient&& other)//Move assignment operator
{
	if (this != &other)//Not copying from same object pointers
	{
		this->m_pillCard = move(other.m_pillCard);
		this->m_name = other.m_name;
		this->m_sex = other.m_sex;
		this->m_dateOfBirth = other.m_dateOfBirth;
		this->m_address = other.m_address;
		this->m_social = other.m_social;
		this->m_id = other.m_id;
		this->m_phone = other.m_phone;

		other.m_pillCard = nullptr;
		other.m_name = "";
		other.m_sex = '\0';
		other.m_dateOfBirth.day = 0; other.m_dateOfBirth.month = 0; other.m_dateOfBirth.year = 0;
		other.m_social = 0;
		other.m_id = 0;
		other.m_phone = "";
	}
	return *this;
}