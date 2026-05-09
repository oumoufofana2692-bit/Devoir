#include <iostream>
#include<memory>
using namespace std;
int main()
{
    //Smart pointer pour le nombre
    unique_ptr<long long> n(new long long);
    cout <<" Entrez un entier :";
    cin >> *n;
//smart pointer pour le tableau
unique_ptr<int[]> compteur (new int[10]());

//Cas ou le nombre est negatif
if (*n<0){
   * n = -*n;
}
//cas special pour 0
if (*n == 0) {
    compteur[0]++;
}
//Parcours du nombre
while (*n>0) {
    int chiffre = *n % 10;
    compteur[chiffre]++;
    *n = *n / 10;
}
//Affichage des resultats
cout <<"occurences des chiffres:" << endl;
for (int i = 0; i < 10; i++) {
    if (compteur[i] > 0){
        cout << " chiffre " <<i<< " : " << compteur[i] << endl;
    }
}
 return 0;
}
    //ecrire un programme C++ qui affiche le nombre de presence de chaque chiffre dans un entier fourni par l'utilisateur
    cout << "bonjour Oumou";
    return 0;
}
