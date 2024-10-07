#include <stdio.h>
#include <stdio.h>

#define NUM_PRODUTOS 5
#define DIAS_SEMANA 7

int main() {
    
    float preco_custo[NUM_PRODUTOS] = {1.55, 2.27, 5.47, 3.80, 3.15};
    float preco_varejo[NUM_PRODUTOS] = {2.98, 4.50, 9.99, 4.49, 6.87};
    int total_vendas[NUM_PRODUTOS] = {0};
    int quantidade_vendida[DIAS_SEMANA][NUM_PRODUTOS] = {0};
    int dia_maior_venda = 0;
    float maior_venda_dia = 0;
    float lucro_total = 0;
    int total_itens_vendidos = 0;
    float lucro_por_produto[NUM_PRODUTOS] = {0};

    for (int dia = 0; dia < DIAS_SEMANA; dia++) {
        for (int i = 0; i < NUM_PRODUTOS; i++) {
            int codigo_produto, quantidade;
            printf("Digite o codigo do produto (1-5) vendido no dia %d: ", dia + 1);
            scanf("%d", &codigo_produto);

            if (codigo_produto < 1 || codigo_produto > 5) {
                printf("Codigo do produto invalido! Tente novamente.\n");
                i--; 
                continue;
            }

            printf("Digite a quantidade vendida do produto %d: ", codigo_produto);
            scanf("%d", &quantidade);

            quantidade_vendida[dia][codigo_produto - 1] += quantidade;
            total_vendas[codigo_produto - 1] += quantidade;
            total_itens_vendidos += quantidade;

            
            float lucro_por_venda;
            switch (codigo_produto) {
                case 1:
                    lucro_por_venda = preco_varejo[0] - preco_custo[0];
                    break;
                case 2:
                    lucro_por_venda = preco_varejo[1] - preco_custo[1];
                    break;
                case 3:
                    lucro_por_venda = preco_varejo[2] - preco_custo[2];
                    break;
                case 4:
                    lucro_por_venda = preco_varejo[3] - preco_custo[3];
                    break;
                case 5:
                    lucro_por_venda = preco_varejo[4] - preco_custo[4];
                    break;
                default:
                    lucro_por_venda = 0; 
            }

            lucro_total += lucro_por_venda * quantidade;

            
            lucro_por_produto[codigo_produto - 1] += lucro_por_venda * quantidade;
        }
        
        float venda_dia = 0;
        for (int j = 0; j < NUM_PRODUTOS; j++) {
            venda_dia += quantidade_vendida[dia][j] * preco_varejo[j];
        }

        if (venda_dia > maior_venda_dia) {
            maior_venda_dia = venda_dia;
            dia_maior_venda = dia + 1; 
        }
    }

    
    int produto_campeao = 0;
    for (int i = 1; i < NUM_PRODUTOS; i++) {
        if (lucro_por_produto[i] > lucro_por_produto[produto_campeao]) {
            produto_campeao = i;
        }
    }

    
    printf("\nTotal de itens vendidos na semana: %d\n", total_itens_vendidos);
    printf("Lucro total da semana: %.2f\n", lucro_total);
    printf("Dia de maior venda: %d\n", dia_maior_venda);
    printf("Produto campeao da semana: Produto %d (Lucro: %.2f)\n", produto_campeao + 1, lucro_por_produto[produto_campeao]);

    return 0;
}
