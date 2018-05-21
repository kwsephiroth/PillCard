#include "Drug.h"

ostream& operator<< (ostream& os, const Drug& pc)
{
	os  << "Appl No: " << pc.m_applNo << "\n"
		<< "Drug Name: " << pc.m_name << "\n"
		<< "Strength: " << pc.m_strength.first << " " << GetUnitOfMeasurementString(pc.m_strength.second) << "\n"
		<< "Purpose: " << pc.m_purpose << "\n"
		<< "Directions: " << pc.m_directions << "\n"
		<< "Time Of Day: " << GetTimeOfDayString(pc.m_timeOfDay) << "\n"
		<< "Additional Info: " << pc.m_additionalInfo << "\n";
	return os;
}