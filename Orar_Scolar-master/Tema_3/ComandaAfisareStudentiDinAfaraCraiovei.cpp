#include "ComandaAfisareStudentiDinAfaraCraiovei.h"

ComandaAfisareStudentiDinAfaraCraiovei::ComandaAfisareStudentiDinAfaraCraiovei(CFacultate& facultate)
	:facultate(facultate)
{
}

void ComandaAfisareStudentiDinAfaraCraiovei::Executa()
{
	system("cls");
	facultate.printStudentiAfara();
}
