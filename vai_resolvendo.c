#include <stdio.h>

int main()
{
    int vendas, media = 0, i, contagem = 0;
    
    for ( i = 0; i < 5; i++)
    {
        printf("Valor da %d venda: ", i+1);
        scanf("%d", &vendas); 
        media = media + vendas;
        if (vendas >= 500)
        {
            contagem = contagem + 1;
        }
    }
    system("cls");
    printf("Media: %d",(media)/5);
    printf("\nVendas acima da media: %d", contagem);
    getch();
}


//programa que pegue 5 valores de vendas, separe as acima de 500 e calcule a média delas. Máximo de 4 variáveis.