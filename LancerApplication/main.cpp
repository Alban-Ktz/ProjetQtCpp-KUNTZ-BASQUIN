#include <iostream>


using namespace std;

int main()
{

    int answer;

    cout << "Veuillez choisir votre type de structure de donnees" << endl;
    cout << "1 - Liste" << endl << "2 - Pile" << endl << "3 - File" << endl << "4 - Arbre"<< endl;
    cin >> answer;

    if(answer == 1) {
    #include "../Liste/Liste.cpp"
    
    Liste liste;


    liste.AjoutEnTete(14);
    liste.AjoutEnTete(27);
    liste.AjoutEnQueue(571);
    liste.AjoutEnQueue(851);
    liste.AjoutEnTete(54);
    // liste.SupprimerEnTete();
    // liste.SupprimerEnQueue();

    liste.afficherListe();

    } else if(answer == 2) {
    #include "../Pile/Pile.cpp"

    Pile pile;

    
    pile.Empiler(5);
    pile.Empiler(7);
    pile.Empiler(89);

    pile.Depiler();

    pile.afficherPile();

    } else if(answer == 3) {
    #include "../File/File.cpp"

    File file;

    file.AjoutEnTete(14);
    file.AjoutEnTete(15);
    file.AjoutEnTete(47);
    file.AjoutEnTete(2);
    //file.SupprimerEnQueue();

    file.afficherFile();     
    } 

}