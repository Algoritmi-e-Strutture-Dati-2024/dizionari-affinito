#include <iostream>
#include <string>
#include "Dizionarioesteso.cpp"
using namespace std;

int main() {

    Dizionario<string> dict;

    dict.inserisci("ford", "casaAutomobilistica");
    dict.inserisci("fiesta", "modello");
    dict.inserisci("caricatore", "oggetto");
    dict.inserisci("STline", "linea");
    dict.inserisci("fiesta", "merendina");
    
    cout << "Stampa del dizionario dopo gli inserimenti:" <<endl;
    dict.stampa();
    
    cout << "Recupero del valore associato a 'fiesta': " << dict.recupera("fiesta") <<endl;
    cout << "Recupero del valore associato a 'caricatore': " << dict.recupera("caricatore") <<endl;
    cout << "La chiave 'fiesta' appartiene al dizionario? " << (dict.appartiene("fiesta") ? "Sì" : "No") << endl;
    dict.cancella("caricatore");
    cout << "Stampa del dizionario dopo la cancellazione di 'caricatore':" <<endl;
    dict.stampa();

    return 0;
}
