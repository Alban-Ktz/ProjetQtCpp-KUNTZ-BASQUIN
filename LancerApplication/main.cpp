#include <iostream>


using namespace std;

int main()
{

    int answer;

    cout << "Veuillez choisir votre type de structure de donnees" << endl;
    cout << "1 - Liste" << endl << "2 - Pile" << endl << "3 - File" << endl << "4 - Arbre"<< endl;
    cin >> answer;

    if(answer == 1) {
    #include "../Liste/Suitech1.cpp"
    
    SuiteCh1 ch1;


    ch1.AjoutEnTete(14);
    ch1.AjoutEnTete(27);
    ch1.AjoutEnQueue(571);
    ch1.AjoutEnQueue(851);
    ch1.AjoutEnTete(54);
    // ch1.SupprimerEnTete();
    // ch1.SupprimerEnQueue();

    ch1.afficherSuite();

    } else if(answer == 2) {
    #include "../Pile/Suitech1.cpp"

    pile pile;

    
    pile.Empiler(5);
    pile.Empiler(7);
    pile.Empiler(89);

    pile.Depiler();

    pile.AfficherPile();

    } else if(answer == 3) {
        
    } else if(answer == 4) {
        
    }

}