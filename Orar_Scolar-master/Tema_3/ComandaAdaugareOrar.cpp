#include "ComandaAdaugareOrar.h"

ComandaAdaugareOrar::ComandaAdaugareOrar(CFacultate& facultate)
	:facultate(facultate)
{
}

void ComandaAdaugareOrar::Executa()
{
	short nrGp;
	system("cls");

	cout << "\n Numarul grupei (1,2,3...): ";
	cin >> nrGp;
	facultate.citesteOrar(nrGp);
}
