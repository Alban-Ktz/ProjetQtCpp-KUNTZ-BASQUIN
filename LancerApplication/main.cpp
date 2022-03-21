#include <iostream>
#include "../Pile/Pile.cpp"

using namespace std;

int main()
{

    int answer;
    Pile testPile;

    cout << "Veuillez choisir votre type de structure de donnees" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "1 - Liste" << endl
         << "2 - Pile" << endl
         << "3 - File" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cin >> answer;

    if (answer == 1)
    {
#include "../Liste/Liste.cpp"
        int operation;

        cout << "Vous avez choisi les listes, veuillez choisir votre operation" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "1 - Ajout en tete" << endl
             << "2 - Ajout en queue" << endl
             << "3 - Supprimer en tete" << endl
             << "4 - Supprimer en queue" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cin >> operation;

        Liste liste;
        double element;
        int continuer;

        if (operation == 1)
        {
            cout << "Veuillez renseigner la valeur a ajouter en tete :" << endl;
            cin >> element;
            liste.AjoutEnTete(element);
            liste.afficherListe();
        }
        else if (operation == 2)
        {
            cout << "Veuillez renseigner la valeur a ajouter en queue :" << endl;
            cin >> element;
            liste.AjoutEnQueue(element);
            liste.afficherListe();
        }
        else if (operation == 3)
        {
            cout << "Suppression de l'element" << endl;
            liste.SupprimerEnTete();
            liste.afficherListe();
        }
        else if (operation == 4)
        {
            cout << "Suppression de l'element" << endl;
            liste.SupprimerEnQueue();
            liste.afficherListe();
        }

        cout << "Voulez-vous refaire une operation ?" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "1 - Oui" << endl;
        cout << "2 - Non" << endl;
        cout << "------------------------------------------------------------" << endl;

        cin >> continuer;

        switch (continuer)
        {
        case 1:
            main();
            break;
        case 2:
            break;
        }
    }
    else if (answer == 2)
    {
#include "../Pile/Pile.cpp"

        int operation;

        cout << "Vous avez choisi les piles, veuillez choisir votre operation" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "1 - Empiler" << endl;
        cout << "2 - Depiler" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cin >> operation;

        Pile pile;
        double element;
        int continuer;

        if (operation == 1)
        {
            cout << "Veuillez renseigner la valeur a empiler :" << endl;
            cin >> element;
            testPile.Empiler(element);
            testPile.afficherPile();
        }
        else if (operation == 2)
        {
            pile.Depiler();
            pile.afficherPile();
        }

        cout << "Voulez-vous refaire une operation ?" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "1 - Oui" << endl;
        cout << "2 - Non" << endl;
        cout << "------------------------------------------------------------" << endl;

        cin >> continuer;

        switch (continuer)
        {
        case 1:
            main();
            break;
        case 2:
            break;
        }
    }
    else if (answer == 3)
    {
#include "../File/File.cpp"
        int operation;

        cout << "Vous avez choisi les files, veuillez choisir votre operation" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "1 - Ajout en tete" << endl;
        cout << "2 - Supprimer en queue" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cin >> operation;

        File file;
        double element;
        int continuer;

        if (operation == 1)
        {
            cout << "Veuillez renseigner la valeur a ajouter en tete :" << endl;
            cin >> element;
            file.AjoutEnTete(element);
            file.afficherFile();
        }
        else if (operation == 2)
        {
            file.SupprimerEnQueue();
            file.afficherFile();
        }

        cout << "Voulez-vous refaire une operation ?" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "1 - Oui" << endl;
        cout << "2 - Non" << endl;
        cout << "------------------------------------------------------------" << endl;

        cin >> continuer;

        switch (continuer)
        {
        case 1:
            main();
            break;
        case 2:
            break;
        }
    }
}