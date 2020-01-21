#include <stdio.h>


int main (){
	int pv = 100;
	printf("Votre ennemi a %d points de vie.\n", pv);
	printf("Vous decidez de l'attaquer.\n");
	int attaque = 10;
	pv = pv - attaque;
	printf("Votre ennemi a %d points de vie.\n", pv);
	
	return 0;
}