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