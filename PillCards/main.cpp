#include <iostream>
#include "PatientManager.h"
#include "Patient.h"

using namespace std;

int main(int argc, char* argv[])
{
	//Patient p;
	//cout << p << endl;
	PatientManager pm;
	PatientInfo pi{ 1, "Kenneth Walker", 'M', {(uint8_t)7,(uint8_t)28,1988}, "4526 Arco Avenue, FL 1, Saint Louis, MO 63110", 12345678, "(281) 513 - 6080" };
	PillCard pc;
	Drug d {159, "SULFAPYRIDINE", {500, UnitOfMeasurement::Milligram}, "Stomach aches?", "Take one tablet daily after a meal.", TimeOfDay::Any, "This drug has no known volatile interactions with other drugs."};
	pc.AddDrug(move(d));
	Patient p(pi, move(pc));
	//cout << p << endl;
	pm.AddNewPatient(move(p));
	//cout << p << endl; //Should be empty since it has been moved
	auto& patient1 = pm.GetPatient(1);
	cout << patient1 << endl;

	system("pause");
	return 0;
}