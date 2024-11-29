#include "class.h"

Tarifs::Tarifs(int sw, int sg, int se) {

    if (sw < 0 or sg < 0 or se < 0) {

        throw std::out_of_range("You Dead!");

    }

    SellWater = sw;
    SellGaz = sg;
    SellElectric = se;
}

int Tarifs::GetSellWater() const {

    return SellWater;

}
int Tarifs::GetSellGaz() const {

    return SellGaz;

}
int Tarifs::GetSellElectric() const {

    return SellElectric;

}
string Human::GetSecondName() const {

    return secondName;

}
int Human::GetDolg() const {

    return dolg;

}

Human::Human(string f) {

    secondName = f;


}
int NumberHouse::GetnumberHouse() const {

    return numberHouse;

}
int NumberHouse::GetnumberKV() const {

    return numberKV;

}

NumberHouse::NumberHouse(int nh, int nkv) {

    if (nh < 0 or nkv < 0) {

        throw std::out_of_range("You Dead!");

    }

    numberHouse = nh;
    numberKV = nkv;
}
void Tarifs::AddSellWater(int f) {
    if (f < 0 or f > 100000 or cin.fail()) {

        cout << "Unknown number." << endl;

    }
    else {
        SellWater = f;
    }
}
void Tarifs::AddSellGaz(int c) {
    if (c < 0 or c > 100000) {

        cout << "Unknown number." << endl;

    }
    else {
        SellGaz = c;
    }
}
void Tarifs::AddSellElectric(int l) {
    if (l < 0 or l > 100000) {

        cout << "Unknown number." << endl;

    }
    else {
        SellElectric = l;
    }
}
void Human::AddSecondName(string na) {

    secondName = na;

}
void Human::Adddolg(int k) {
    dolg += k;
}