#include "ComandaAfisareStudentiDupaData.h"

ComandaAfisareStudentiDupaData::ComandaAfisareStudentiDupaData(CFacultate& facultate)
	:facultate(facultate)
{
}

void ComandaAfisareStudentiDupaData::Executa()
{
	system("cls");
	CData data;
	data.read();
	facultate.printStudentiData(data);
}
