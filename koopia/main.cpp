#include "associativTab.h"




int main()
{

    assocTab wiek;
    wiek.insert("Ala", 12);
    wiek.clear();
    wiek.insert("Ala", 12);
    wiek.insert("Piotr", 16);
    wiek.insert("Jan", 44);
    wiek.displayAll();

    assocTab wiek2;
    wiek2 = wiek;
    wiek2.displayAll();

    int x = wiek["Ala"] ;
    cout << x;
    int y = wiek["x"];
    cout << y;

    sensitive pochodna;
    pochodna.insert("WITAM", 4);
    pochodna["witam"];

    notSensitive pochodna2;
    pochodna2.insert("WITAM", 4);
    pochodna2["witam"];
    return 0;
}
