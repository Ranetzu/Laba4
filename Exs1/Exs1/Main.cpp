#include "Class.h"
#include "Function.h"

int menuNum;
void menu() {
    cout << "Menu:" << endl;
    cout << "Enter 1 for enter a new sell of water." << endl;
    cout << "Enter 2 for enter a new sell of Gaz." << endl;
    cout << "Enter 3 for enter a new sell of Electric." << endl;
    cout << "Enter 4 for enter a second name of human." << endl;
    cout << "Enter 5 for get a dolg with name." << endl;
    cout << "Enter 6 for add tarif of Water for human." << endl;
    cout << "Enter 7 for add tarif of Gaz for human." << endl;
    cout << "Enter 8 for add tarif of Electric for human." << endl;
    cout << "Enter 9 for end of work." << endl;
    cout << "Your choice is: ";
    cin >> menuNum;
}
void syst() {
    system("pause");
    system("cls");
}
void main()
{
    Tarifs Tarif(0, 0, 12);
    Tarifs& tarif = Tarif;
    Human human("name");
    NumberHouse numberHouse(0, 0);
    string name;
    string vvod;



    while (menuNum != 9) {
        menu();
        switch (menuNum) {
        case 1:
            cout << "Enter a new sell of Water:";
            int k;
            cin >> k;
            Tarif.AddSellWater(k);
            cout << endl << "New sell of water:" << Tarif.GetSellWater() << endl;
            syst();
            break;
        case 2:
            cout << "Enter a new number of Gaz:";
            cin >> k;
            Tarif.AddSellGaz(k);
            cout << endl << "New sell of gaz:" << Tarif.GetSellGaz() << endl;
            syst();
            break;
        case 3:
            cout << "Enter a new number of Electric:";
            cin >> k;
            Tarif.AddSellElectric(k);
            cout << endl << "New sell of electric:" << Tarif.GetSellElectric() << endl;
            syst();
            break;
        case 4:
            cout << "Get second name of human:";
            cin >> name;
            human.AddSecondName(name);
            cout << human.GetSecondName() << endl;
            syst();
            break;
        case 5:
            cout << "Enter name:" << " " << endl;
            cin >> vvod;
            DolgName(human, vvod);
            syst();
            break;
        case 6:
            addUslWater(tarif, human);
            syst();
            break;
        case 7:
            addUslGaz(tarif, human);
            syst();
            break;
        case 8:
            addUslElectr(tarif, human);
            syst();
            break;
        default:
            cout << "Unknown number." << endl;
            syst();
            break;
        }// end switch
    }// end while
    syst();
}
