#include "ComandaOrarStudent.h"

ComandaOrarStudent::ComandaOrarStudent(CFacultate& facultate)
	:facultate(facultate)
{
}

void ComandaOrarStudent::Executa()
{
	string nume;
	system("cls");
	cin.get();

	cout << "Numele complet al studentului: ";
	std::getline(cin, nume);
	short ret = facultate.cautaStudent(nume);
	if (ret == -1)
		cout << "Studentul nu exista!\n";
	else
		facultate.printOrarGrupa(ret);
}
