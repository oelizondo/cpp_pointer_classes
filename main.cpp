#include <iostream>

using namespace std;

#include "lista.h"

int main() {
    Lista<int> *lUno, *lDos;

    lUno = new Lista<int>();

    delete lUno;

    return 0;

}