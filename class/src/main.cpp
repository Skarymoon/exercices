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











int main(int argc, char **argv) {

demanderNom(); 

	return (0);
}