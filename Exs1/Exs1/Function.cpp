#include "Function.h"

void addUslElectr(Tarifs& tarif, Human& human) {

    cout << tarif.GetSellElectric() << " to " << human.GetSecondName() << endl;
    human.Adddolg(tarif.GetSellElectric());

}
void addUslGaz(Tarifs& tarif, Human& human) {

    cout << tarif.GetSellGaz() << " to " << human.GetSecondName() << endl;
    human.Adddolg(tarif.GetSellGaz());

}
void addUslWater(Tarifs& tarif, Human& human) {

    cout << tarif.GetSellWater() << " to " << human.GetSecondName() << endl;;
    human.Adddolg(tarif.GetSellWater());

}
void DolgName(Human& human, string name) {

    if (human.GetSecondName() == name) {
        cout << human.GetDolg() << endl;
    }
    else {
        cout << "Unknown name." << endl;
    }

}