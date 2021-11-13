#include "ComandaAdaugareStudent.h"

ComandaAdaugareStudent::ComandaAdaugareStudent(CFacultate& facultate)
	:facultate(facultate)
{
}

void ComandaAdaugareStudent::Executa()
{
	short nrGp;
	system("cls");

	cout << "\n Numarul grupei (1,2,3...): ";
	cin >> nrGp;
	facultate.addStudent(nrGp);
}
