#ifndef COVID_H
#define COVID_H

#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;
void wheretoTest();
void displayArray(string names[], int);
void Advice();

void wheretoTest()
{
    const int LA = 3;
    const int OC = 5;
    const int SB = 5;
    system("color 0E");
    string LAnames[LA] = { "Edendale Library - Echo Park (2011 Sunset Blvd., Los Angeles, CA 90026)",
                           "CVS              - Los Angeles (1919 S. Hoover St., Los Angeles, CA 90007)",
                           "Rite Aid         - Mid City (959 Crenshaw Blvd., Los Angeles, CA 90019)",
    };

    string OCnames[OC] = { "SOS Health Center - Santa Ana ","SOS Health Center - Costa Mesa ",
        "SOS Health Center - Fullerton ", "SOS Health Center - Irvine", "SOS Health Center - Laguna" ,
    };

    string SBnames[SB] = { "McCoy Equestrian and Recreation Center - Chino Hills",
                           "Victor Valley College                  - Victorville ",
                           "National Orange Show (NOS)             - San Bernardino",
                           "Big Bear Lake City Hall                - Big Bear",
                           "Lucerne Valley Senior Center           - Lucerne Valley",
    };



    cout << setw(10) << "***Free Covid-19 testing locations in Los Angeles*** " << endl;
    cout << endl;
    displayArray(LAnames, LA);
    cout << endl;
    cout << setw(10) << "***Free Covid-19 testing locations in Orange County*** " << endl;
    cout << endl;
    displayArray(OCnames, OC);
    cout << endl;
    cout << setw(10) << "***Free Covid-19 testing locations in San Bernardino*** " << endl;
    cout << endl;
    displayArray(SBnames, SB);


}
void displayArray(string names[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << setw(7) << names[i] << endl;
    }
}

void Advice()
{

    cout << "***Here are some advice for you***" << endl;
    Sleep(500);
    cout << "_Stay home." << endl;
    cout << endl;
    cout << "_Get lots of rest." << endl;
    cout << endl;
    Sleep(1000);
    cout << "_Avoid unnecessary contact with the other." << endl;
    cout << endl;
    Sleep(1000);
    cout << "_Wash your hands often with soap and water for at least 20 seconds, " << endl;
    cout << endl;
    cout << " especially after blowing your nose, coughing, or sneezing; going to the bathroom; and before eating or preparing food." << endl;
    cout << endl;
    Sleep(1000);
    cout << "_Drink plenty of fluids(water is best) to avoid dehydration. " << endl;
    cout << endl;
    Sleep(1000);
    cout << "_To help ease a cough, try having a teaspoon of honey. But do not give honey to babies under 12 months. " << endl;


    cout << endl;
}

#endif
