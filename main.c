#include<stdio.h>

int main(){
	
	int vector[30];
	int i,j;
	int mayor;
	
	
	for(int i=0; i<30;i++){
		
		printf("Dame un numero: \t");
		scanf("%d",&vector[i]);
	}
	for(int j=0; j<30;j++){

	
	if(vector[j]>mayor){
		mayor=vector[j]; //Ordenamiento por metodo de la burbuja
	}
	
	
		}
		
		printf("El mayor es %d",mayor);
		
		
	
}
