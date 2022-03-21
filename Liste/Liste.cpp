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

        if (pPremier == NULL) {
            cout << "Erreur - Impossible de supprimer en tête, la liste est deja vide !" << endl;
        } else {
            pPremier = pPremier->GetSuivant();
        }   

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
        if( temp == NULL ){
            cout << "Erreur - Impossible de supprimer en tête, la liste est deja vide !" << endl;
        } else if(temp->GetSuivant() == nullptr) {
            pPremier=NULL;
        } else {
            while (temp->GetSuivant()->GetSuivant() != NULL) {
                temp = temp->GetSuivant();
            }
            temp->SetSuivant(nullptr);
        }
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
