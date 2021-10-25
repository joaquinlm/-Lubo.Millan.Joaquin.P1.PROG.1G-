#include <stdio.h>
#include <stdlib.h>
#define TAM_STR 20

float aplicarAumento(float precioSinAumento);
int reemplazarCaracteres(char cadena[], int tam, char charOriginal, char charSustituto);

int main()
{   

    char cadena[TAM_STR] = "pepe";
    int contadorCambios = reemplazarCaracteres(cadena, TAM_STR, 'p', 't');
    printf("%s\n", cadena);
    printf("El caracter se remplazo %d veces\n", contadorCambios);
    float precioSinAumento = 5;
    float precioConAumento =  aplicarAumento(precioSinAumento);
    printf("%f\n", precioConAumento);
    return 0;
}

float aplicarAumento(float precioSinAumento){
    float precioConAumento = 0;
    if(precioSinAumento>0){

    precioConAumento = precioSinAumento + (precioSinAumento/100)*5;
    }
}
//Crear una función que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer parámetro, un carácter como segundo y otro carácter como tercero, la misma deberá reemplazar cada ocurrencia del segundo parámetro por el tercero y devolver la cantidad de veces que se reemplazo ese carácter en la cadena 
int reemplazarCaracteres(char cadena[], int tam, char charOriginal, char charSustituto)
{   int contador = 0;
    if( cadena!=NULL && tam>0){
    for(int i = 0; i < tam; i++)
    {
      if(cadena[i]==charOriginal)
      {
        cadena[i]=charSustituto;
        contador++;
      }
    }    
  }
  return contador;
}

