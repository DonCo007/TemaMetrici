#pragma once
#include <vector>
#include "IComanda.h"
#include "Facultate.h"

class ManagerComenzi
{
public:
	ManagerComenzi(CFacultate & facultate);

	void Start();

private:
	std::vector<IComanda*> comenzi;
};
