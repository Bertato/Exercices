#include <stdio.h>


int main (){
	int pvmonstre = 100;
	int attaquejoueur = 10;
	int pvjoueur = 100;
	int attaquemonstre = 10;
	
	
	while(pvmonstre>0){
		printf("Vous decidez de l'attaquer.\n");
		pvmonstre = pvmonstre - attaquejoueur;
		printf("Votre ennemi a %d points de vie.\n", pvmonstre);
		
	}
	
	


	return 0;
}