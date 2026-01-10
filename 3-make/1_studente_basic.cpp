#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    /*********************** Creazione di oggetti ******************************/
    // TODO Creare un nuovo studente "Mario" con eta 17 e media 7
    Studente MO;
    MO.nome="Mario";
    MO.eta=17;
    MO.media=7.00;

    // TODO Creare un nuovo studente "Maria"  (questa volta con un puntatore) con eta 18 e media 8
    Studente MA;
    Studente *p=&MA;;

    p->nome="Maria";
    p->eta=18;
    p->media=8.00;

    /************************** Visualizzazione ********************************/
    // TODO Visualizzare il nome e la media sia di Mario che Maria
    MO.stampaStudente();
    p->stampaStudente();
    return 0;
}
