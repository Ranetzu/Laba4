#pragma once
#include <iostream>
using namespace std;

    class Tarifs {

    private:

        int SellWater;
        int SellGaz;
        int SellElectric;

    public:

        Tarifs(int sw, int sg, int se);

        int GetSellWater() const;
        int GetSellGaz() const;
        int GetSellElectric() const;

        void AddSellWater(int);
        void AddSellGaz(int);
        void AddSellElectric(int);
    };
    class Human {

    private:

        std::string secondName;
        int dolg = 0;

    public:

        Human(std::string);

        std::string GetSecondName() const;
        int GetDolg() const;

        void AddSecondName(std::string);
        void Adddolg(int);
    };
    class NumberHouse {

    private:

        int numberHouse;
        int numberKV;

    public:

        NumberHouse(int, int);

        int GetnumberHouse() const;
        int GetnumberKV() const;

        void AddnumberHouse(int);
        void AddnumberKV(int);

    };

