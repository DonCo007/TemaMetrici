#include "IComanda.h"
#include "Facultate.h"

class ComandaExit : public IComanda
{
public:
	ComandaExit();

	// Inherited via IComanda
	virtual void Executa() override;
};
