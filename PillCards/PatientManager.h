#pragma once
#include "Drug.h"
#include "Enums.h"
#include "Helpers.h"
#include "Structs.h"
#include "PillCard.h"
#include "Patient.h"
#include <string>
#include <stdint.h>
#include <memory>
#include <map>

class PatientManager
{
private:
	using PatientList = map<uint64_t, unique_ptr<Patient>>;
	PatientList m_listOfPatients;

public:
	PatientManager() = default;
	~PatientManager() = default;
	void AddNewPatient(Patient&&);
	const Patient& GetPatient(uint64_t patientId) const;

	const Patient BLANKPATIENT;
};

