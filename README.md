Pour plus de simpliciter, je te conseille fortement de lire ce fichier depuis github directement.

Exercices Easy
===============

## Le potager
##### 1. Préparer le terrain
* Créer un dossier "potager" à la racine du dépôt
* Y copier les fichiers main.cpp et Makefile
* Créer également un dossier src/ et obj/. L'architecture doit être la suivante :
	

    potager/
        Makefile
		obj/
		src/
			inc/
			main.cpp
    tableau_infernal/
	utils/
	
* Ouvrir sublime text et bien faire attention d'ouvrir et travailler sur le fichier main.cpp dans le dossier potager/src
        
##### 2. On retourne la terre
* Voici la fonction main:


    int main(int argc, char **argv) {
        labourer();
        labourer();
        labourer();
        labourer();
        labourer();
        labourer();
        labourer();
    }
    
* Créer une fonction "labourer" qui ne prends pas de paramètre et qui renvoie rien __void labourer(){}__
* Cette fonction affiche dans le terminal "Je laboure..." suivit d'un retour à la ligne. (std::cout)
* Créer ensuite une variable globale (en dehors de toute fonction, donc tout le monde y a accès), de type int, appelé stamina, avec pour valeur de départ "7".
* Modifier ensuite la fonction labourer(). A chaque fois que la fonction est appelé, la variable stamina décroît de 1 à la fin de la fonction.
* Si la stamina est inférieure ou égale à 0, la fonction labourer affichera "Je suis trop fatigué pour labourer." suivit d'un retour à la ligne. (l'autre message ne doit pas s'afficher dans ce cas).
* Déplacer ensuite la variable stamina dans un header appelé "potager.h" et situé dans exercices/potager/src/inc/potager.h (il faudra donc inclure le header dans main.cpp)
* Le résultat de cet exercice devrait être :


    Je laboure...
    Je laboure...
    Je laboure...
    Je laboure...
    Je laboure...
    Je laboure...
    Je laboure...
    Je suis trop fatigué pour labourer.

#####3. On plante des légumes

* Voici la fonction main:


    int main(int argc, char** argv){
        labourer();
        planterLegume(4);
        labourer();
        return(0);
    }
* Créer une fonction __void planterLegume(int nb){}__, qui ne renvoit rien et qui a un paramètre de type entier.
* La fonction affiche "Je plante un légume." autant de fois que nb (le paramètre)
* A chaque légume planté, on réduit la variable stamina de 2.
* Si la stamina est inferieur ou égale à 0, on affichera à la place "Je suis trop fatigué pour planter."
* Le résultat de cet exercice devrait être :


    Je laboure...
    Je plante un légume.
    Je plante un légume.
    Je suis trop fatigué pour planter.
    Je suis trop fatigué pour planter.
* __Bonus !__ Faire en sorte que si on est trop fatigué pour planter un légume, on n'arrête d'essayer d'en planter. (Indice: mot clé __break__ dans une boucle). Le résultat serait donc:
    
    
    Je laboure...
    Je plante un légume.
    Je plante un légume.
    Je suis trop fatigué pour planter.
    
##### 4. On se recharge

* Voici la fonction main:


    int main(int argc, char** argv){
        labourer()
        planterLegume(4);
        bool resultat = rest(60);
        if (resultat == true) {
            stamina += 7;
            std::cout << "Je me suis bien reposé !" << std::end;
        }
        return (0);
    }

* Creer une fonction rest qui renvoit un booléen et qui prend en paramètre un entier __bool rest(int time){}__.
* Si le temps de repos (le paramètre time) est supérieur ou égal à 60, on s'est reposé, la fonction renvera donc vrai.
* Sinon on a mal dormi et la fonction renvoit faux.
* Le résultat doit être :


    Je laboure...
    Je plante un légume.
    Je plante un légume.
    Je plante une légume.
    Je suis trop fatigué pour planter.
    Je me suis bien reposé !
    
##### 5. Random
* Voici la fonction main:
    

    int main(int argc, char **argv){
        int a = myRandom(0, 100);
        std::cout << a << std::endl;
    }
* Trouver sur le net une fonction qui renvoit un nombre aléatoire qui renvoit un entier entre un min est un max. __int myRandom(int min, int max){}__. Utiliser l'include <rand> ou <rand.h>. La fonction a utiliser est rand(time);
* Le résultat doit être un nombre entre 1 et 100.

##### 6. On se recharge v2
* rest ne prend plus de paramètre. Il doit utiliser la fonction myRandom. Dans 50% des cas il renvoit vrai et dans 50 autre % il renvoit faux.
* Il affichera aussi "Je me suis bien reposé" si ça renvoit vrai, sinon il affiche "J'ai mal dormi, j'ai mal partout".
* Faire un main qui utilise toutes les fonctionnalités. Labourer, planter, se reposer, replanter, se reposer. Etc

####Enjoy


Exercices Advanced
===================

# Le tableau infernal
1. Mise en place de l'environnement
	* Créer un dossier nommé "tableau_infernal" à la racine du dépôt.
	* On travaillera exclusivement dans ce dossier pour cet exercice
	* Créer un dossier "src" et un dossier "obj" à la racine du dossier de travail.
	* Récupère les fichiers Makefile et main.cpp dans le dossier utils
2. Le programme
	* Créer dans la fonction main un tableau d'entier ("myTab") avec pour valeur "12, 5, 42, 1598, 0".
	* Créer une fonction qui prend en paramètre un tableau d'entier et qui l'affiche dans la console (std::cout).
	* Créer une fonction qui prend en paramètre un tableau d'entier et qui doit afficher à l'aide de std::cout les nombres dans l'ordre croissant.
	* Ensuite modifie cette fonction pour qu'elle tri ce tableau, donc celui du main et non une copie ! (référence).
	* Et finalement changer "myTab" avec les valeurs "0, 9, 0, 8, 0, 123, 1, 0", le trier dans l'ordre croissant avec la fonction, et l'afficher avec l'autre fonction.
	* Enfin, créer une fonction "int myRandom(int min, int max)" qui renvoit un nombre entier entre min et max.
	* Et pour finir, créer myTab avec 100 nombres aléatoires, les trier dans l'ordre croissant, et les afficher.
3. Le rendu
	* Pour ajouter tous les nouveaux fichiers au dépôt: __git add cheminComplet__. par ex: __git add exercices/1/main.cpp__
	* On peut ajouter tous les fichiers d'un coup avec: __git add .__ à la racine du dépôt
	* Ensuite faire un __git commit -a -m "un message de commit"__
	* Puis enfin un __git push origin master__
4. Petit bonus GiT important
	* On peut savoir la différence qu'on a avec le dépot en faisant __git status__ (quels fichiers ne sont pas ajoutés, lequels ne sont pas commit...)
	* Si tu galères sur une erreur, demande à Google, il doit savoir ;)
	* C'est possible que git ne marche pas car tu n'as pas mis ton nom et adresse e-mail (https://git-scm.com/book/en/v2/Getting-Started-First-Time-Git-Setup, section Identity)