#include "IComanda.h"
#include "Facultate.h"

class ComandaAfisareMateriiComune : public IComanda
{
public:
	ComandaAfisareMateriiComune(CFacultate& facultate);

	// Inherited via IComanda
	virtual void Executa() override;

private:
	CFacultate& facultate;
};