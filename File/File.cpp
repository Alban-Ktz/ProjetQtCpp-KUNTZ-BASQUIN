#include <iostream>
#include "../Constructeur/ElementCh1.cpp"
using namespace std;

class File
{

private:
    Elch1 *pPremier;

public:
    File(Elch1 *pPremier)
    {
        this->pPremier = pPremier;
    };

    File()
    {
        this->pPremier = NULL;
    }

    void AjoutEnTete(int value)
    {

        Elch1 *chaine1 = new Elch1(value, pPremier);
        this->pPremier = chaine1;
    }

    void SupprimerEnQueue()
    {
        if (pPremier == NULL) {
            cout << "Erreur - Impossible de defiler, la file est deja vide !" << endl;
        } else {
            pPremier = pPremier->GetSuivant();
        }   
    }

    void afficherFile()
    {
        Elch1 *current = this->pPremier;
        cout << endl;
        if (current == NULL)
        {
            cout << "La File est vide";
        }
        while (current != NULL)
        {
            current->afficherElch();
            current = current->GetSuivant();
        }

        free(&current);
    }
};