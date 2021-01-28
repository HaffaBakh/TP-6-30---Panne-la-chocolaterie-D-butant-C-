// TP 6/30 - Panne à la chocolaterie (Débutant C++) 

#include <iostream>
using namespace std;


int main() {

	cout << "Bienvenue à la chocolaterie" << endl;

	int ProdChocolatNoir = 117;

	// Afficher le nombre de chocolats produit en 10 min
	cout << "Le nombre de chocolat produit en 10 min est de " << ProdChocolatNoir * 10 << endl;

	// Afficher le nombre de chocolats produit en 40 min
	cout << "Le nombre de chocolat produit en 40 min est de " << ProdChocolatNoir * 40 << endl;

	// Afficher le nombre de chocolats produit en 1h15 min soit 75 min car (60+15)
	cout << "Le nombre de chocolat produit en 1h15 est de " << ProdChocolatNoir * 75 << endl;


}