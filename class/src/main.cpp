#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> tableau;
std::string userName = "NULL";

void demanderNom(){
bool askAgain = false;
	while(askAgain == false){
	std::cout << "Veuillez mettre votre nom :" << std::endl;
	std::cin >> userName;

		if(userName != "NULL"){
			std::cout << "Merci d'avoir mis votre nom, celui-ci est enregistre." << std::endl;
			askAgain = true;
			tableau.push_back(userName);
		}
			else if(userName == "NULL"){
				std::cout << "Erreur, vous n'avez pas renseigne votre nom !!" << std::endl;
				askAgain = false;
			}
	}
}

std::vector<int> tableauMillion(1000000,0);
void creationDuTableau(){

	for(int i=0; i<tableauMillion.size(); i++){
		int valeurEgaleAi = i;
		tableauMillion[i]=valeurEgaleAi;
		std::cout << tableauMillion[i] << std::endl;	
	}
}
std::vector<int> tableauMillionAvecPair(1000000,0);
void creationDuTableauAvecPair(){
	for(int i=0; i<tableauMillionAvecPair.size(); i+=2){
		int valeurEgaleAi = i;
		tableauMillionAvecPair[i]=valeurEgaleAi;
		std::cout << tableauMillionAvecPair[i] << std::endl;
	}
}
/*int affichageDuTableau(std::vector<int> a){
	for(int i=0; i<a.size(); i++){
	std::cout << a[i] << std::endl;	
	}
	
}*/
/*Faire une fonction qui renvoit un boolen, ca prend un int en parametre, si lentier il est pair ca renvoit vrai.*/

bool savoirSiChiffrePair(int a){
bool pair = true;
	if(a%2==0){
		pair==true;
		std::cout << "Le nombre est pair" << std::endl;
	}else{
		pair==false;
		std::cout << "le nombre est impair" << std::endl;
	}
return pair;}






int main(int argc, char **argv) {

/*demanderNom();*/
/*creationDuTableauAvecPair();*/
savoirSiChiffrePair(3);
/*affichageDuTableau(std::vector<int> tableauMillion);*/

	return (0);
}