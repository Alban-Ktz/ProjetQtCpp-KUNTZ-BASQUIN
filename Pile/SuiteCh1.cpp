#include <iostream>
#include "../Constructeur/ElementCh1.cpp"
using namespace std;


class pile
{
private:
    Elch1 *pPremier;

public:

    pile(Elch1 *pPremier)
    {
        this->pPremier = pPremier;
    };

    pile()
    {
        this->pPremier = NULL;
    }



    bool estVide()
    {
        if (this->pPremier == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void Empiler(int value)
    {

        Elch1 *pileEl = new Elch1(value, this->pPremier);
        this->pPremier = pileEl;
    }

    void Depiler()
    {
        Elch1 *tamp = new Elch1(*(this->pPremier->GetSuivant()));
        free(pPremier);
        this->pPremier = tamp;
    }


    void AfficherPile()
    {
        pile *tamp = new pile(pPremier);

        if (tamp->estVide())
        {

            cout << "Rien a afficher, la Pile est vide." << endl;
        }

        while (!tamp->estVide())
        {
            cout << "[" << tamp->pPremier->GetDonnee() << "]" << endl;
            *tamp = tamp->pPremier->GetSuivant();
        }

        if (tamp->estVide())
        {
            cout << endl;
        }

        free(&tamp);
    }
};