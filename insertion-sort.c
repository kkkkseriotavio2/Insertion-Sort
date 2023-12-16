//  Algoritmo de Ordenação por Inserção
#include <stdio.h>

int v[9] = {35, 8, 5, 1, 21, 1, 2, 3, 12};

int main(void){

    for (int j = 1; j < 9; j++){
        int t = v[j];
        int i = j - 1;
        while (i > -1 && v[i] > t){
            v[i+1] = v[i];
            i = i - 1;
        }
        v[i+1] = t;
        int n = 0;
        do{
            if(n < 8){
                printf("%d, ", v[n]);
            }
            else{
                printf("%d.\n", v[n]);
            }
            n++;
        }while (n != 9);
    }
    return 0;
}
