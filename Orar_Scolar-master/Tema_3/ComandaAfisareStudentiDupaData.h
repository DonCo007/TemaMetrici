#include "IComanda.h"
#include "Facultate.h"

class ComandaAfisareStudentiDupaData : public IComanda
{
public:
	ComandaAfisareStudentiDupaData(CFacultate& facultate);

	// Inherited via IComanda
	virtual void Executa() override;

private:
	CFacultate& facultate;
};