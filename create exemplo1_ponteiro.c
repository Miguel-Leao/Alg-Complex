#include <stdio.h>
void trocar(int *i, int *j){
    int aux = *i;
    *i = *j;
    *j = aux;
}
main(){
    int i = 10;
    int j = 15;
    printf("nAntes X = %d e ]=%d", i, j);
    trocar(&i, &j);
    printf("\nDepois X = %d e ]=%d", i,j);
}