#include <stdio.h>
#include <string.h>
#include <locale.h>

int log [5];
int redes [5], matricula[10];
int cont,cont2,cont3=0;

main(){

	setlocale(LC_ALL, "Portuguese");

  for(cont=0;cont< 5; cont++ ){
  	printf("Informe a matrícula do aluno %d  do curso de lógica da programação.\n",cont+1);
  	scanf("%d",&log[cont]);
  }
  
  
  for(cont=0;cont< 5; cont++ ){
  	printf("Informe a matrícula do aluno %d  do curso de redes.\n",cont+1);
  	scanf("%d",&redes[cont]);
  }

  for(cont=0;cont< 5; cont++ ){
  	 for(cont2=0;cont2< 5; cont2++ ){
  	 	
  	 	if(log[cont]==redes[cont2]){
  	 		
  	 		matricula[cont3]= log[cont];
  	 		cont3++;
		   }
  	 	
	   }
  	
  	
  }
  
  printf("\nMatrículas simultâneas nos dois cursos:  ");
  for(cont=0;cont < cont3;cont++){
  	
  	printf("%d  ",matricula[cont]);
  	
  }
  
}




