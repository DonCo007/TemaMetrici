#include "IComanda.h"
#include "Facultate.h"

class ComandaAdaugareOrar : public IComanda
{
public:
	ComandaAdaugareOrar(CFacultate& facultate);

	// Inherited via IComanda
	virtual void Executa() override;

private:
	CFacultate& facultate;
};