#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
	int pvmonstre = 100;
	int attaquejoueur = 10;
	int pvjoueur = 100;
	int attaquemonstre = 10;
	int contreAttaque = 0;
	int decisionJ = 0;
	int decisionM = 0;
	
	srand(time(NULL));

	while(pvmonstre>0 && pvjoueur>0){
		printf ("Voulez vous attaquer (1) ou vous vous défendre (2) ?\n");
		scanf("%d",&decisionJ);
		decisionM =((rand()%2)+1);
		
		if (decisionM == 2){
			printf("Le monstre se defend.\n");
			attaquejoueur = attaquejoueur/4;
				
		}
		
		if (decisionJ == 2){
			printf("Vous decidez de vous defendre.\n");
			attaquemonstre = attaquemonstre/4;
			
		}
		
		if(decisionJ == 1){
			printf("Vous decidez de l'attaquer.\n");
			pvmonstre = pvmonstre - attaquejoueur;
			
			}
		
		if(decisionM == 1){
			printf("Le monstre vous attaque.\n");
			pvjoueur = pvjoueur - attaquemonstre;
			
		}
		
		
		
	printf ("Le monstre a %d points de vie.\n", pvmonstre);
	printf ("Il vous reste %d points de vie.\n", pvjoueur);
	
	attaquemonstre = 10;
	attaquejoueur = 10;
		
	}	
	
	
	


	return 0;
}
