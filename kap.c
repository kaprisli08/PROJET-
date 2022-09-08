#include<stdio.h>
// calculer la moyenne génerale de l'étudiant :
int main(){
	char code[40],nom[20];
	float somme=0, moyenne=0, note;
	printf("donner votre nom:");
	scanf("%s", &nom);
		printf("donner votre code massar:");
	scanf("%s", &code);
	for(int i=1; i<=3; i++){
		printf("votre %d  note :", i);
		scanf("%f", &note);
		somme += note;
		
		}
		printf(" CODE MASSAR:%s\n", code);
		moyenne =somme / 3 ;	
		printf("monsieur %s votre moyenne generale est: %f \n", nom ,moyenne );
		printf("Resultat :");
		if(moyenne>= 10){
		
			printf("admis");
		}else {
			printf("non admis");
		}
		
		
	}
		
	
	
