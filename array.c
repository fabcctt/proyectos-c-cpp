#include <stdio.h>
int main(void)
{
  // variables
  int cantidad;
  int suma = 0;
  float promedio;
  int numeros[100];

  // pedir cantidad
  printf("Ingrese la cantidad de numeros que calcularas.\n");
  scanf("%d", &cantidad);
  
  // llenar el array con scanf
  for(int i = 0; i < cantidad; i++)
  {
    printf("Numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }
  // sumar todos los numeros del array
  for(int i = 0; i < cantidad; i++)
  {
  suma += numeros[i];
  }
  // resultados
  promedio = (float)suma / cantidad;
  printf("Resultados.\n");
  printf("%d\n", suma);
  printf("Promedio: %d/%d : %.2f\n", suma, cantidad, promedio);

    return 0;
}