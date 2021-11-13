#include "Facultate.h"
#include "ManagerComenzi.h"

int main()
{
    short nrGp;

    cout << "Numarul de grupe: ";
    cin >> nrGp;
    CFacultate ACE(nrGp);

    ManagerComenzi manager(ACE);
    manager.Start();

    system("pause");
}
