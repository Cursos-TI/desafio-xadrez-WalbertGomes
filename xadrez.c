#include <stdio.h>

    int main(){

        int iBispo = 1;
        int iRainha = 1;

        printf("Primeiro Movimento\n");
        //movimento da Torre usando for
        for (int i = 0; i < 5; i++){
            printf("torre moveu-se para Direita\n");  //imprime o resutado do movimento
        }

        printf("Segundo Movimento\n");

        //movimento do Bispo usando while
        while (iBispo <= 5 )
        {
            printf("Bispo moveu-se para cima direita\n");
            iBispo++;
        }

        printf("Terceiro Movimento\n");
        //movimento da Rainha usando do while
        do
        {
        printf("Rainha moveu-se para esquerda\n");
        iRainha++;
        } while (iRainha <= 5 );
        

        return 0;
    }
