// logements_client.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Maison.h"
#include "Appartement.h"
#include "Maison.h"
#include "Quartier.h"
using namespace loge;

int main()
{
    Logement* l = new Maison("adr1",300,9,200,400);
    Logement* a = new Appartement("adr2", 100, 4, 200,3);

    Quartier q;
    q.ajouter(*l);
    q.ajouter(*a);


    q.info();
    delete l;
    delete a;

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
