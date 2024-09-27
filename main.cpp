#include <iostream>
using namespace std;

int main() {
    int n, i, conDebito, contPromossi;
    double voto, somma, media;

    do {
        cout << "quanti studenti ci sono in classe?" << endl;
        cin >> n;
    } while (n < 0);
    contPromossi = 0;
    conDebito = 0;
    somma = 0;
    i = 0;
    while (i < n) {
        cout << "inserisci il voto del" << i + 1 << "alunno" << endl;
        cin >> voto;
        if (voto >= 6) {
            contPromossi = contPromossi + 1;
        } else {
            conDebito = conDebito + 1;
        }
        i = i + 1;
        somma = somma + voto;
    }
    media = somma / n;
    cout << "saranno promossi" << contPromossi << "studenti. Avranno il debito" << conDebito << " studenti" << endl;
    cout << "la media dei voti della classe è" << media << endl;
    return 0; 
}


