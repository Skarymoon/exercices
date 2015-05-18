Exercices
=============

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
