#include <stdio.h>
#include <stdlib.h>

int main (){
  // TODO(1): Declara dos apuntadores a entero llamados array, array2
  int *array, *array2;
  // TODO(2): Declara una variable para indicar cuantos elementos se requieren
  int n;
  
  printf("¿Cuantos elementos tiene el conjunto?\n");
  // TODO(3): Lee el numero de elementos
  scanf("%d", &n);
  // TODO(4): Usando una llamada a malloc reserva la memoria para array
  array = (int*)malloc(n * sizeof(int));
  
  if (array != NULL) {
    // TODO(5): Usando un ciclo for inserta los datos en el arreglo
    for(int i = 0; i < n; i++){
      printf("Elemento %d: ", i+1);
      scanf("%d", &array[i]);
    }

    printf("[ ");
    // TODO(6): Usando un ciclo for imprime la información en el arreglo
    for(int i = 0; i < n; i++){
      printf("%d ", array[i]);
    }

    printf("]\n");
    // TODO(7): Asigna a array2, el arreglo duplicando su tamaño usando realloc
    array2 = realloc(array, (2*n) * sizeof(int));

    if (array2 != NULL) {
      // TODO(8): Usando un ciclo for inserta los datos faltantes en el arreglo
      for(int i = n; i < 2*n; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &array2[i]);
      }

      printf("[ ");
      // TODO(9): Usando un ciclo for imprime la información en el arreglo
      for(int i = 0; i < 2*n; i++){
        printf("%d ", array2[i]);
      }

      printf("]\n");
    }
    // TODO(10): libera la memoria reservada por realloc
    free(array2);
  }

  return 0;
}
