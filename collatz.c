#include <stdio.h>

int main(){
    int n;
    int passos = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    if (n <= 0){
    	printf("Por favor, digite um número posivo.\n");
    return 1;
	}

    printf("Sequencia de Collatz:\n");
    printf("%d ", n);

    while(n != 1) {
        if(n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }

        printf("%d ", n);
        passos++;
    }
printf("\nTotal de passos: %d\n", passos);
}