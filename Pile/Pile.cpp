#include <iostream>
#include "../Constructeur/ElementCh1.cpp"
using namespace std;

class Pile
{

private:
    Elch1 *pPremier;

public:
    Pile(Elch1 *pPremier)
    {
        this->pPremier = pPremier;
    };

    Pile()
    {
        this->pPremier = NULL;
    }

    void Empiler(int value)
    {

        Elch1 *chaine1 = new Elch1(value, this->pPremier);
        this->pPremier = chaine1;
    }

    void Depiler()
    {
        Elch1 *temp = new Elch1(*(this->pPremier->GetSuivant()));
        free(pPremier);
        this->pPremier = temp;
    }

    void afficherPile()
    {
        Elch1 *current = this->pPremier;
        cout << endl;
        if (current == NULL)
        {
            cout << "La pile est vide";
        }
        while (current != NULL)
        {
            current->afficherElch();
            current = current->GetSuivant();
        }

        free(&current);
    }
};