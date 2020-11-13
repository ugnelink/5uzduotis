#include "funkcijos.h"
#include "struktura.h"

int main()
{

	list<studentas> sarasas = nuskaitymas();

	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> laikas = finish - start;
	cout << "Duomenu is failo nuskaitymas uztruko: " << laikas.count() << "s" << endl;


	vector<vargsiukai> varg;
	vector<galvociai> galv;

	for (studentas& s : sarasas) {
		if (s.galutinis < 5) {
			varg.push_back(vargsiukai{ s.vardas, s.pavarde, s.galutinis });
		}
		else if (s.galutinis >= 5) {
			galv.push_back(galvociai{ s.vardas, s.pavarde, s.galutinis });
		}
	}
	chrono::duration<double> laikas1 = finish1 - start1;
	cout << "Studentu suskirstymas uztruko: " << laikas1.count() << "s" << endl;

}
