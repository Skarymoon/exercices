#include <iostream>
#include <string>



void troudBal(std::string phrase1, std::string phrase2){


	std::cout << phrase1 << std::endl;
	std::cout << phrase2 << std::endl;

}
void cacaBoudin (std::string phrase1, bool display){

	if (display == true){

		std::cout << phrase1 << std::endl;
	}
}

int laDerniereFonction(std::string dernierePhrase, int repet){
	
	
	for(int unTruc = 0;unTruc<repet; ++unTruc){

		std::cout << dernierePhrase << std::endl;
}


}


int main(int argc, char* args[]) {

troudBal("Ceci est la premiere ligne", "Ceci est la deuxieme ligne");

cacaBoudin("Le bool est OK donc je m'affiche", true);

cacaBoudin("On s'en fou ca s'affiche pas", false);

laDerniereFonction("S'affiche autant de fois que tu veux", 4);


return (0);
}
































/*#include <iostream>


int const nombreDeLignes = 5;
int afficherTableau (int myTab[], int const nombreDeLignes){
	
	for (int i = 0; i<nombreDeLignes; i++){
	
		std::cout << myTab[i] << std::endl;
	
	}
}


int affichageTableauTri(int myTab[], int const nombreDeLignes){
	int valeurMini = myTab[0];
	int valeurMini2 = myTab[0];
	int valeurMini3 = myTab[0];
	int valeurMini4 = 10000;
	int valeurMini5 = 10000;

	for(int i=0; i<nombreDeLignes; ++i){

		if (myTab[i]<valeurMini){

			valeurMini = myTab[i]; 

		}
		if(myTab[i]<valeurMini2 && myTab[i]>valeurMini){

			valeurMini2 = myTab[i];
		}
		if(myTab[i]<valeurMini3 && myTab[i]>valeurMini2){

			valeurMini3 = myTab[i];
		}
		if(myTab[i]<valeurMini4 && myTab[i]>valeurMini3){

			valeurMini4 = myTab[i];
		}
		if (myTab[i]<valeurMini5 && myTab[i]>valeurMini4){

			valeurMini5 = myTab[i];
		}

	}
	std::cout << valeurMini << std::endl;
	std::cout << valeurMini2 << std::endl;
	std::cout << valeurMini3 << std::endl;
	std::cout << valeurMini4 << std::endl;
	std::cout << valeurMini5 << std::endl;
}






int main(int argc, char* args[]) {



int const nombreDeLignes = 5;
int myTab [nombreDeLignes];	

myTab[0] = 120;
myTab[1] = 5;
myTab[2] = 42;
myTab[3] = 1598;
myTab[4] = 0;

afficherTableau (myTab, nombreDeLignes);

affichageTableauTri (myTab, nombreDeLignes);


return (0);
}


/*int myTab2 [nombreDeLignes];{
for (int i = 0; i<nombreDeLignes; i++){

	if (myTab[0]<myTab[1], myTab[2], myTab[3], myTab[4], myTab[5]){

		myTab2[0] = myTab[0];}

	else if (myTab[1]<myTab[0], myTab[2], myTab[3], myTab[4], myTab[5]){

		myTab2[0] = myTab[1];}

}}*/



/*int tableauParOrdreCroissant (myTab[nombreDeLignes]);

	for (int i=0; myTab[i+1]<myTab[i]; i++){

		
	}*/

 	


/*if (myTab[4] < myTab[3]){
 		myTab[3]=myTab[4];
 		
 	}
 	if (myTab[3] < myTab[2]){
 		myTab[2]=myTab[3];
 	}*/