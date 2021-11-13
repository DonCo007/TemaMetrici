#include "IComanda.h"
#include "Facultate.h"

class ComandaAfisareStudentiDinAfaraCraiovei : public IComanda
{
public:
	ComandaAfisareStudentiDinAfaraCraiovei(CFacultate& facultate);

	// Inherited via IComanda
	virtual void Executa() override;

private:
	CFacultate& facultate;
};