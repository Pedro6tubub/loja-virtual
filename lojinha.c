#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char opcao;
    int numero, soma, tamanho;
    int p1=0, m1=0, g1=0;
    int p2=0, m2=0, g2=0; 
    int p3=0, m3=0, g3=0;
    int contador1 = 0, contador2 = 0, contador3 = 0;
    double total, mult1, mult2, mult3;

    while (1) {
        printf("//LOJA VIRTUAL KIDS MODA//\n");
        printf("DIGITE A ROUPA QUE DESEJA: \n");
        printf("[1] REGATA\n[2] BLUSAO\n[3] MACACAO\n");
        scanf("%d", &numero);

        while (numero < 1 || numero > 3) {
            printf("//NUMERO INVALIDO//\n");
            printf("DIGITE A ROUPA QUE DESEJA: \n");
            printf("[1] REGATA\n[2] BLUSAO\n[3] MACACAO\n");
            scanf("%d", &numero);
        }
        
        while(1){
			printf("ESCOLHA O TAMANHO DA PECA:\n");
        	printf("[1]P\n[2]M\n[3]G\n");
        	scanf("%d", &tamanho);
        
        	if (numero==1){
        		if (tamanho==1){
        			p1++;
				}
				else if (tamanho==2){
					m1++;
				}
				else if (tamanho==3){
					g1++;
				}
			}
			else if (numero==2){
				if (tamanho==1){
        			p2++;
				}
				else if (tamanho==2){
					m2++;
				}
				else if (tamanho==3){
					g2++;
				}
			}
			else if (numero==3){
				if (tamanho==1){
        			p3++;
				}
				else if (tamanho==2){
					m3++;
				}
				else if (tamanho==3){
					g3++;
				}
			}
			if (tamanho>=1 && tamanho<=3){
				break;
			}
		}
		
        if (numero == 1) contador1++;
        else if (numero == 2) contador2++;
        else if (numero == 3) contador3++;

        printf("Deseja continuar escolhendo? (S/N): ");
        scanf(" %c", &opcao);
        getchar(); 

        if (opcao == 'N' || opcao == 'n') break;
    }

    system("cls");

    mult1 = 39.90 * contador1;
    mult2 = 69.90 * contador2;
    mult3 = 79.99 * contador3;
    total = mult1 + mult2 + mult3;
    soma = contador1 + contador2 + contador3;

    printf("//CARRINHO//\n");
    printf("REGATA // %d UNIDADE(S) //\nBLUSAO // %d UNIDADE(S) //\nMACACAO // %d UNIDADE(S) //\n", contador1, contador2, contador3);
    printf("TAMANHO DAS PECAS:\n");
    printf("//////[P][M][G]\n");
    printf("REGATA  %d %d %d\nBLUSAO  %d %d %d\nMACACAO %d %d %d\n", p1, m1, g1, p2, m2, g2, p3, m3, g3);
    printf("QUANTIDADE DE ROUPAS NO CARRINHO: %d\n", soma);
    printf("VALOR TOTAL: %.2lf\n", total);
    printf("OBRIGADO PELA PREFERENCIA ;)\n");

    return 0;
}
