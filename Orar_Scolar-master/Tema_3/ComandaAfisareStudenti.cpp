#include "ComandaAfisareStudenti.h"

ComandaAfisareStudenti::ComandaAfisareStudenti(CFacultate& facultate)
	:facultate(facultate)
{
}

void ComandaAfisareStudenti::Executa()
{
	short nrGp;
	system("cls");
	cout << "\n Numarul grupei (1,2,3...): ";
	cin >> nrGp;
	facultate.printStudentiGrupa(nrGp);
}
