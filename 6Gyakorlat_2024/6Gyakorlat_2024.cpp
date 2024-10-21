#include<iomanip>
#include <iostream>
#include<string>

using namespace std;

struct dolgozo {
    string nev;
    int fiz;
};

int main()
{
    dolgozo csop[5];
    int i, ossz = 0;

    for (i = 0; i < 5; i++)
    {
        cout << "Adja meg az " << i + 1 << ". dolgozo nevet: ";
        getline(cin, csop[i].nev);
        cout << "Adja meg a fizetest: ";
        cin >> csop[i].fiz;
        cin.ignore();
    }
        system("cls");
        cout.setf(ios::left);

        for ( i = 0; i < 5; i++)
        {
            cout << setw(25) << csop[i].nev << "\t" << csop[i].fiz << endl;
            ossz = ossz + csop[i].fiz;
        }

        cout << "\nAcsoport osszfizetese: " << ossz << endl;
    
}
