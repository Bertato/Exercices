#include <stdio.h>


int main (){
	int pvmonstre = 100;
	int attaquejoueur = 10;
	int pvjoueur = 100;
	int attaquemonstre = 10;
	int contreAttaque = 0;
	

	while(pvmonstre>0){
		printf("Vous decidez de l'attaquer.\n");
		pvmonstre = pvmonstre - attaquejoueur;
		contreAttaque = 1;
		printf("Votre ennemi a %d points de vie.\n", pvmonstre);
		if (contreAttaque = 1){
			pvjoueur = pvjoueur - attaquemonstre;
			printf ("Votre ennemi a contre-attaque, vous avez %d points de vie.\n", pvjoueur);
		}
	}
	
	


	return 0;
}