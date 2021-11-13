#include "IComanda.h"
#include "Facultate.h"

class ComandaAdaugareStudent : public IComanda
{
public:
	ComandaAdaugareStudent(CFacultate& facultate);

	// Inherited via IComanda
	virtual void Executa() override;

private:
	CFacultate& facultate;
};