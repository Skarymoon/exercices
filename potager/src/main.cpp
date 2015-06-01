#include <iostream>
#include <string>
#include <cstdlib>

int stamina = 7;
bool toujoursEnForme = true;

void jeLaboureJusquaEpuisement(){
	 
	while (toujoursEnForme == true) { // Ta condition sera toujours vrai. Pare que tu l'as change uniquement ici

	 	std::cout << "Je laboure..." << std::endl;
	 	stamina -= 1;
	

	 	if(stamina == 0){ // putin d'egale a la con la !
			toujoursEnForme = false; // ICI, en dehors de la boucle.
			std::cout << "Je suis trop fatigue pour travailler !" << std::endl;
	 	}
 	}
}

void labourer() {
	// 
	if(stamina == 0){

		std::cout << "Je suis trop fatigue pour travailler !!" << std::endl;
	
	}
	stamina -= 1;
	
}

void planterLegume(int nbDeLegume){
// Ahhhhh pas mal :D Le bonus et tout ! Je ne l'aurai pas fais comme ça, mais ça marche !
	// Sauf que si tu t'épuise alors que tu été entrain de planter. ça ne dit pas que tu es trop fatiguer pour en faire plus
	// Mais c'était pas demandé dans lénoncé
	// Donc tres bien 21/20
	if(stamina == 0 && stamina < 2){ // Bien vu le <2
			std::cout << "Je suis trop fatigue pour planter un legume" << std::endl;
		}

	while(nbDeLegume > 0 && stamina > 0){
		nbDeLegume -= 1;
		stamina -= 2;
		std::cout << "Je plante un legume." << std::endl;

		
	}
}
// Test ?
bool seReposer(){
	// Bon jte laisse taffer sur celle ci du coup. Ok super, je regarde ca alors :):)
	bool rest = false;// rest est true ou false. Tu lui mets 0, donc false
	
	double resultat = rand() % 100 + 1; // maintenant on met rand() % 100 + 1 dans rest qui est un booleen. Donc faux pour 0 et vrai pour le  reste

	std::cout << resultat << std::endl;//jvais manger a toute Ok ca marche, du coup moi aussi je vais y aller
	//Jefais un petit commit push ! Bon'ap !
	if(resultat >= 60){ // La jsais pameme pas comment ça a pu compilé, cest bizarre. Tu compare si un booleen (donc vrai ou faux) est superieur ou égal. Chelou...
	
		rest = true; // attention aux "=" & "==":P !:P ! <-- ca veut dire y'a une connerie ou juste attention general. Une connerie ^^
		// En fait cette ligne va renvoyer true ou false. Tu pourrai recuperer cette valeur en faisant une varable
		// Par ex: bool resultat = rest == true;
		// Finalement c'est pas ce que tu veux. Toi ce que tu voulais c'est mettre la valeur true dans rest.
		// Donc on utilise "=" pour mettre la valeur dans la boite
		// rest =true; hmmmm...... ok, mais au final que je mette true dans la boitem ou que le contenu de la boite soit = a true c'est pareil ??!
		// =>"==" ça sert à comparer des valeurs. et "=" ça sert à affeter une valeur. (mettre une valeur dans une boite/variable)
 	}	// ok j'ai capte (je crois ;))Il faut que tu retienne cette ligne et que tu la comprenne à 100%
// bon sion un dernier truc ou tu t'es fais avoir
// Ma foi ca marche... Parceque sans comparaison je vois pas comment faire....Non mais c'est ce qu'il faut faire, mais la le probleme c'est ça
// Je suis pret a parier que seReposer fait gagner de la stamina dans 99% des cas
// tres probable j'avais teste plusieurs fois d'affilier ==> Toujours true -_-'
	if(rest == true){

		stamina += 7;
		std::cout << "AAAh !! Je me suis bien repose ! Chaud pour aller planter du legume !" << std::endl;
	}

	if(rest == false){

		std::cout << "Pinaizzz, j'ai mal partout, j'ai mal dormis, aujourd'hui glandouille =]" << std::endl;
	}
}






 // Ici pas de ;
	// A toi de jouer, la fonction ici est bien plus simple que celle du dessus. Celle ci ne laboure qu'une seule fois à chaque appel
	// OK ca marche ! Je vois tout ca, merci du coup de main encore...! Bon et puis si je rebloque j'arrete, comme ca je t'emmerde pas toutes les 30 sec
	// On se donne rdv ptet ?!
	// Non c'est mort, tu me contact sur Telegram si tu bloque
	// Mais sache que la majoritée de tes erreurs c'est soit "==", soit
	// if (condi;tion) {
		//Code
	//}
	// while (condition) {
		//Code
	//}
	// for(int a = 0; condition ; a++) {
	//	// Code;
	// }
	// Il faut faire gaffe a bien mettre un ; a la fin de chaque ligne sauf pour if, while et for (et la signature de la fonction aussi)


	// Aller courage, ces exo sont vraiment simple au niveau de la logique. C'est juste de la syntaxe
	// COntacte moicomme tu veux, jsuis sur mon pc entrain de coder la. Jlaisse teamviwer de lancé.
	// Ok !! Nikel grazie:);





int main(int argc, char **argv) {
    labourer();
    labourer();
    labourer();
    labourer();
    labourer();
    labourer();
    planterLegume(2);
    seReposer();
    planterLegume(7);
    
}
// Cool ! Bon sauf que le main n'a pas la meme gueule que ce que je veux. Mais ton programme est bien quand même ^^
// C'est marrant ce que tu as fais ^^ Mais c'est pas exactement l'exo que je t'ai demandé :P
//Ah merde, atta laisse moi voir, de toute facon j'ai pas pu le tester une fois, faut pas le regarder maintenant ;P
 // Et puis la tu vas découvrir un nouveau truc en le lancant :P La boucle infini ! N'oublie pas que CTRL+C sert a stopper un programme dans le terminal