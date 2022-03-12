#include <iostream>
using namespace std;

class Elch1
{
private:
    double donnee;
    Elch1* suivant;

public:
    Elch1(double donnee, Elch1 *suivant)
    {
        this->donnee = donnee;
        this->suivant = suivant;
    }

    Elch1(double donnee)
    {
        this->donnee = donnee;
        this->suivant = NULL;
    }

    double GetDonnee()
    {
        return this->donnee;
    }

    void SetDonnee(double donnee)
    {
        this->donnee = donnee;
    }

    Elch1 *GetSuivant()
    {
        return this->suivant;
    }

    void SetSuivant(Elch1 *suivant)
    {
        this->suivant = suivant;
    }

    void afficherElch()
    {
        cout << "Value : " << donnee << " | address : " << suivant << endl; 
    }
};