#include <iostream>
#include "../Constructeur/ElementCh1.cpp"
using namespace std;

class Liste
{

private:
    Elch1 *pPremier;

public:
    Liste()
    {
        pPremier = nullptr;
    }

    Liste(Elch1 *var)
    {
        pPremier = var;
    }

    void AjoutEnTete(double donnee)
    {
        Elch1 *chaine1 = new Elch1(donnee,pPremier);
        pPremier = chaine1;
    }

    void SupprimerEnTete(){

        Elch1 *chaine1 = pPremier->GetSuivant();
        free(pPremier);
        pPremier = chaine1;

    }

    void AjoutEnQueue(double donnee) {
        Elch1 *chaine1 = new Elch1(donnee, NULL);

        if(pPremier == NULL) {
            pPremier = chaine1;
        } else {
            Elch1 *temp = this->pPremier;
            while(temp->GetSuivant() != NULL) {
                temp = temp->GetSuivant();
            }
            temp->SetSuivant(chaine1);
        }
    }

    void SupprimerEnQueue() {
        Elch1* temp = this->pPremier;
        while (temp->GetSuivant() != NULL)
        {
            temp = temp->GetSuivant();
        }
        
        free(temp);
    }

    void afficherListe()
    {
        Elch1 *current = this->pPremier;
        cout << endl;
        if(current == NULL) {
            cout << "La liste est vide";
        }
        while (current != NULL)
        {
            current->afficherElch();
            current = current->GetSuivant();
        }

        free(&current);
    }
};
