#include "associativeTab.h"
#include "insensitive.h"
#include "sensitive.h"


int main()
{
    sensitive pochodna;
    pochodna.insert("Wrazliwy", 44);
    pochodna["wrazliwy"];
    pochodna.insert("WrazliwY", 45);
    pochodna["WrazliwY"];


    insensitive pochodna2;
    pochodna2.insert("NIEWRAZLIWY", 4);
    pochodna2["nieWrAZliwy"];

    sensitive pochodna33 = pochodna2;
    return 0;
}
