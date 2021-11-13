#include "IComanda.h"
#include "Facultate.h"

class ComandaAfisareStudenti : public IComanda
{
public:
	ComandaAfisareStudenti(CFacultate& facultate);

	// Inherited via IComanda
	virtual void Executa() override;

private:
	CFacultate & facultate;
};