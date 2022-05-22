/* Autor: Luis Gonzalo Guzman Sanchez, Realizado: 17/03/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  

	-El uso de include para las librerías
    -Uso de la librería math.h
    -Arreglo por método de la burbuja
    -Ciclos
    -Contador
    -Condicionales
    -Arreglos
    -#define MAX  para definir cierta cantidad para el arreglo
*/
#include<stdio.h>
// Definiciones
#define MAX 10
#include<math.h>
//const int TAMANO=50;
int main(){
	//Declaración de variables
	//int edades[10];
	int edades[MAX], aux, centro;
	float media, suma=0, var, desviacion, mediana;
	//Leer datos del teclado para llenar el arreglo completo
	for (int i=0;i<MAX;i++){ //Ciclos
	//for (int i=0;i<10;i++){
		printf("Introduce la edad del alumno #%d: ", i);
		scanf("%d", &edades[i]);
	}
	//Imprimir todo el arreglo
	printf("Listado de Alumnos\n");
	for (int i=0;i<MAX;i++){
	// for (int i=0;i<10;i++){	
		printf("Edad del alumno #%d: %d\n", i, edades[i]);
	}
	//Calcular la media
	for (int i=0;i<MAX;i++){	
		suma=suma+edades[i];
	}
	media=suma/MAX;
	printf("La media es: %.2f\n", media);
	//Varianza
	suma=0;
	for (int i=0;i<MAX;i++){	
		suma=suma+pow(edades[i]-media,2);
	}
	var=suma/MAX;
	printf("La varianza es: %.2f\n", var);
	//Desviacion estandar
	desviacion=sqrt(var);
	printf("La desviacion estandar es: %.2f\n", desviacion);
	//Ordenamiendo del arreglo por el metodo de la burbuja
	//Usando el codigo de https://es.wikipedia.org/wiki/Ordenamiento_de_burbuja
	for(int z = 1; z < MAX; ++z) {
      	for(int v = 0; v < (MAX - z); v++) {
         	if(edades[v] > edades[v+1]){
            	aux = edades[v];
            	edades[v] = edades[v + 1];
            	edades[v + 1] = aux;
         	}
      	}
    }
    //Imprimir todo el arreglo
    printf("Listado de Alumnos Ordenados\n");
    for (int i=0;i<MAX;i++){	
		printf("Edad del alumno #%d: %d\n",i,edades[i]);
	}
	//calcular la mediana
	if (MAX%2==0){
		centro=MAX/2;
		mediana = (edades[centro]+edades[centro-1])/2.0;
	}
	else{
		centro=MAX/2;
		mediana=edades[centro];
	}
	printf("La mediana es: %.2f\n", mediana); //Salida
	return 0;
}

    
