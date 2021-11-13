#include "ManagerComenzi.h"
#include "IComanda.h"
#include "Facultate.h"
#include "ComandaAdaugareStudent.h"
#include "ComandaAdaugareOrar.h"
#include "ComandaAfisareMateriiComune.h"
#include "ComandaAfisareStudentiDinAfaraCraiovei.h"
#include "ComandaAfisareStudentiDupaData.h"
#include "ComandaAfisareStudenti.h"
#include "ComandaOrarStudent.h"
#include "ComandaExit.h"

ManagerComenzi::ManagerComenzi(CFacultate& facultate)
{
	comenzi.push_back(new ComandaExit());
	comenzi.push_back(new ComandaAfisareStudenti(facultate));
	comenzi.push_back(new ComandaAdaugareStudent(facultate));
	comenzi.push_back(new ComandaAdaugareOrar(facultate));
	comenzi.push_back(new ComandaAfisareStudentiDinAfaraCraiovei(facultate));
	comenzi.push_back(new ComandaOrarStudent(facultate));
	comenzi.push_back(new ComandaAfisareMateriiComune(facultate));
	comenzi.push_back(new ComandaAfisareStudentiDupaData(facultate));
}

void ManagerComenzi::Start()
{
	while (true)
	{
		cout << "\n 0 -> Exit"
			<< "\n 1-> Afisare studenti grupa"
			<< "\n 2-> Adaugare student"
			<< "\n 3-> Adaugare orar"
			<< "\n 4-> Afisare studenti din afara Craiovei"
			<< "\n 5-> Orar student"
			<< "\n 6-> Afisare grupe cu materii comune"
			<< "\n 7-> Afisare studenti dupa data"
			<< '\n';

		short indexComanda;
		cin >> indexComanda;

		if (indexComanda == 0) {
			exit(0);
		}

		if (indexComanda < comenzi.size())
		{
			comenzi[indexComanda]->Executa();
		}
	}

	system("pause");
}
