#include <stdlib.h>
#include "NumberList.h"

int main()
{
    NumberList nl;
    nl.Init();
    nl.Add(10);
    nl.Add(4);
    nl.Add(18);
    nl.Add(3);
    nl.Print();
    nl.Sort();
    nl.Print();
}