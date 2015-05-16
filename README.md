Les commandes shell
======================


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
