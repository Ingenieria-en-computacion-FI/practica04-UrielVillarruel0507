#include <stdio.h>
#include <stdlib.h>

int main (){
  // TODO(1): Declara un apuntador a entero llamado array
  int *array;

  // TODO(2): Declara una variable para indicar cuantos elementos se requieren
  int n;
  
  printf("¿Cuantos elementos tiene el conjunto?\n");

  // TODO(3): Lee el numero de elementos
  scanf("%d", &n);

  // TODO(4): Usando una llamada a malloc reserva la memoria para el array
  array = (int*)malloc(n * sizeof(int));
  
  if (array != NULL) {
    printf("[ ");

    // TODO(5): Usando un ciclo for imprime la información en el arreglo
    for(int i = 0; i < n; i++){
      printf("%d ", array[i]);
    }

    printf("]\n");

    // TODO(6): libera la memoria reservada por malloc
    free(array);
  }

  return 0;
}
