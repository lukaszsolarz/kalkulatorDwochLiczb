#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
float x, y;
int wybor;
int main()
{
    for(;;)

{


    cout << "podaj 1 liczba:";
    cin >>x;
    cout << "podaj 2 liczbe:";
    cin>>y;


    cout<< endl;
    cout<<" MENU GLOWNE"<<endl;
    cout <<"------------"<<endl;
    cout<< "1.Dodawanie"<<endl;
    cout<< "2.Odejmowanie"<<endl;
    cout<< "3.Mnozenie"<<endl;
    cout<< "4.Dzielenie"<<endl;
    cout<< "5.Koniec programu"<<endl;


    cout<< "Wybierz :";
    cin>>wybor;

    switch(wybor)
    {
        case 1:
        cout <<"Suma="<<x+y;
        break;

        case 2:
        cout <<"Roznica ="<<x-y;
        break;

        case 3:
        cout <<"Iloczyn="<<x*y;
        break;

        case 4:
            if(y==0) cout<<"nie dzielimy przez zero";

            else cout <<"Iloraz="<<x/y;
        break;


        case 5:
            exit(0);
        break;



        default: cout<< "Nie ma takiej opcji w menu !";
    }

    getchar();getchar();
    system("cls");
}


    return 0;
}
