#include <iostream>
#include "PatientManager.h"
#include "Patient.h"

int main(int argc, char* argv[])
{
	PatientManager pm;
	PatientInfo pi{
		1,
		"Kenneth Walker",
		'M',
		{(uint8_t)7,(uint8_t)28,1988},
		"4526 Arco Avenue, FL 1, Saint Louis, MO 63110",
		{123,456,7891},
		{281,513,6080} };

	PillCard pc;
	DrugInfo di{
		159,
		"SULFAPYRIDINE",
		{ 500, UnitOfMeasurement::Milligram },
		"Stomach aches?", "Take one tablet daily after a meal.",
		TimeOfDay::Any,
		"This drug has no known volatile interactions with other drugs."};

	Drug d( di );
	pc.AddDrug(std::move(d));

	Patient p(pi, std::move(pc));
	pm.AddNewPatient(std::move(p));

	//cout << p << endl; //Should be empty since it has been moved
	auto& patient1 = pm.GetPatient(1);
	std::cout << patient1 << std::endl;

	auto& patient2 = pm.GetPatient(2);
	//if(patient2.GetId() > 0)
		std::cout << patient2 << std::endl;

	system("pause");
	return 0;
}