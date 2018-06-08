#include "PatientManager.h"

void PatientManager::AddNewPatient(Patient&& p)
{
	this->m_listOfPatients.emplace(p.GetId(), make_unique<Patient>(forward<Patient>(p)));
	//TODO: Might need to make the PillCard object a shared pointer
	//instead of a unique pointer so that the patient objection doesn't lose ownership
}

const Patient& PatientManager::GetPatient(uint64_t patientId) const
{
	auto itr = this->m_listOfPatients.find(patientId);
	if (itr != this->m_listOfPatients.end())
		return *itr->second;
	else
		return BLANKPATIENT;
	//TODO: Figure out how to signal that the patient wasn't found
}