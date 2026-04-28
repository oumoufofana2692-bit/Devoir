#include <iostream>
using namespace std;
int main()
{
    long long n;
    cout <<" Entrez un entier :";
    cin >>n;
//Tableau pour compter les chiffres de 0 a 9
int compteur[10] = {0};
//Cas ou le nombre est negatif
if (n<0){
    n = -n;
}
//cas special si n = 0
if (n == 0) {
    compteur[0]++;
}
//Parcours du nombre
while (n>0) {
    int chiffre = n % 10;
    compteur[chiffre]++;
    n =n / 10;
}
//Affichage des resultats
cout <<"occurences des chiffres:" <<endl;
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
