#include <stdio.h>

    int main() {
    int x;

    printf("Insira um numero: \n");
    scanf("%d", &x);

    int F = 0;
    int ant = 0;
    

    for (int i = 0; i <= x; i++) {
 
            if (i == 1) {
                F = 1;
                ant = 0;
            } else {
                F += ant;
                ant = F - ant;
            }
               printf("%d\n", F);

        }
 
    }

