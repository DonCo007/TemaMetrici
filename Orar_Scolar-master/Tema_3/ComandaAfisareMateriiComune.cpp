#include "ComandaAfisareMateriiComune.h"

ComandaAfisareMateriiComune::ComandaAfisareMateriiComune(CFacultate& facultate)
	:facultate(facultate)
{
}

void ComandaAfisareMateriiComune::Executa()
{
	system("cls");
	facultate.printMaterieComuna();
}
