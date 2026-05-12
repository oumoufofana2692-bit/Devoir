#include <iostream>
#include <memory>
using namespace std;
int main()
{
    auto n= make_unique<long long >();
    auto compteur= make_unique<int[]>(10);
    int chiffre;
    cout <<" Entrez un entier :";
    cin >>*n;
if (*n<0){
    *n = -*n;
}
if (*n == 0) {
    compteur[0]++;
}
while (*n>0) {
    chiffre = *n % 10;
    compteur[chiffre]++;
    *n /= 10;
}
cout <<"occurences des chiffres:" <<endl;
for (int i=0; i < 10; i++) {
    if (compteur[i] > 0){
        cout << " chiffre " <<i<< " : " << compteur[i] << endl;
    }
}
 return 0;
}