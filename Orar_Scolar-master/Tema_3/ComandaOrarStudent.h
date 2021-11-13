#include "IComanda.h"
#include "Facultate.h"

class ComandaOrarStudent : public IComanda
{
public:
	ComandaOrarStudent(CFacultate& facultate);

	// Inherited via IComanda
	virtual void Executa() override;

private:
	CFacultate& facultate;
};

