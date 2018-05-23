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

using PatientList = map<uint64_t, unique_ptr<Patient>>;

class PatientManager
{
private:
	PatientList m_listOfPatients;

public:
	PatientManager()=default;
	~PatientManager()=default;
	void AddNewPatient(const Patient&);
};

