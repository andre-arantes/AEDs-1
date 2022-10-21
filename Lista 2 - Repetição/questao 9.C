#include <stdio.h>

/*
b) Determine e escreva o valor total de compra e de venda de todas as mercadorias, 
assim como o lucro total. 


Uma linha para cada mercadoria, com o preco de compra e venda;
Quando ultima linha = 0, quebra o codigo
Quantas mercadorias proporcionaram 
lucro < 10%
lucro >= 10% && lucro <= 20%
lucro > 20%
*/

int main(void) {
  int repeticao = 1; // 1) ligada/ 2) desligada
  int lucro10 = 0, lucro20 =0, lucro30 =0 ;

  float totalcompra = 0 , totalvenda =0, totallucro = 0;
  float compra, venda;
  
  while(repeticao != 0){
      // Digitar o preco da compra da mercadoria
      printf("\nDigite o valor da compra: ");
      scanf("%f", &compra);
    totalcompra += compra;
      if(compra > 0){
        
      // Digitar o preco da venda
      printf("\nDigite o valor da venda: ");
      scanf("%f", &venda);
      totalvenda += venda;
      // Calcular o lucro
      float lucro = (venda - compra);
        totallucro += lucro;
      //printf("\n%.2f de lucro!", lucro);
      
      // Calcular porcentagem do lucro
      float porcentagemlucro = (lucro/compra) * 100;
      if(porcentagemlucro < 10){
        lucro10++;
      } else if (porcentagemlucro > 20){
        lucro30++;
      } else  {
        lucro20++;
      }
      } else {
        repeticao = 0;
      }
        
    }

  printf("\n%d Items com lucro menor que 10%%", lucro10);
  printf("\n%d Items com lucro entre 10%% e 20%%", lucro20);
    printf("\n%d Items com lucro maior de 20%%", lucro30);

  printf("\nValor total de compras: %.2f", totalcompra);
  printf("\nValor total de vendas: %.2f", totalvenda);
  printf("\nValor total de lucro: %.2f", totallucro);
  

  
  return 0;
}
