// Inclusão de bibliotecas (pré-processador)
#include <stdio.h>
// Define funções como atof()
#include <stdlib.h> 
#include <string.h> 

// Função principal do programa
int main() { 

// Declarando variáveis 
char altura[20];
float peso;
float imc;
char classificacao[50];
// Flag para controlar o loop
    float condicao; 
     do {
         printf("Bem-vindo ao sistema de cálculo de IMC!\n");
         printf("\n=============== MENU IMC ===================\n");
         printf("1 - Calcular IMC\n");
         printf("2 - Sair\n");
         printf("Informe a opção desejada:\n");
         scanf("%f", &condicao);
         
         // verificação se a altura tem ponto ou virgula
         if (condicao == 1) {  
            printf("Informe o seu peso:\n"); // Informando os dados
            scanf("%f", &peso); // Recebendo os dados informados
    
            // Bloco de verificação para altura
             do {
                printf("Informe sua altura (sem ponto):\n");
                scanf("%s", altura);
                
                // verificação se a altura tem ponto ou virgula
                if (strchr(altura, '.') != NULL || strchr(altura, ',') != NULL) {  
                     // se tiver da erro 
                     printf("Erro: informe a altura APENAS com números e sem pontos ou vírgulas.\n"); 
                    }
            // se não tiver ponto passa normalmente
            } while (strchr(altura, '.') != NULL || strchr(altura, ',') != NULL); 
            // Fim do bloco de verificação
    
        // Convertendo STRING para número FLOAT com ATOF
        float altura_num_cm = atof(altura);
        
        // Calculo: Se a altura foi lida em cm (ex: 175), divida por 100 para ficar correto
        float altura_m = altura_num_cm / 100.0;
        
        // Calculo para resultado
        imc = (peso/(altura_m*altura_m)); 
        
        // Verificação para saber em qual tabela encaixa o IMC do usuário 
          if (imc > 40.0) {
            // 1ª Condição (a mais alta): Se for maior que 40
            strcpy(classificacao, "Obesidade Grau III (Morbida)"); 
            
        } else if (imc >= 35.0) {
            // 2ª Condição: Se não for a 1ª E for maior ou igual a 35
            strcpy(classificacao, "Obesidade Grau II");
            
        } else if (imc >= 30.0) {
            // 3ª Condição: Se não for nenhuma das anteriores E for maior ou igual a 30
            strcpy(classificacao, "Obesidade Grau I");
            
        } else if (imc >= 25.0) {
            // ... e assim por diante
            strcpy(classificacao, "Sobrepeso");
            
        } else if (imc >= 18.5) {
            // A faixa mais comum e ideal
            strcpy(classificacao, "Peso Normal");
            
        } else {
            // Se não se encaixar em NENHUMA das condições acima, usa-se o 'else' final.
            // Neste caso, seria menor que 18.5
            strcpy(classificacao, "Abaixo do peso");
        }
      
            printf("\n============RESULTADO DO CALCULO ============\n");
            printf("Seu IMC e: %.2f\n", imc);
            printf("Classificacao: %s\n", classificacao);
            printf("\n============================================\n");
            
        // Se caso for diferente que 1 então vamos finalizar o programa     
        } else{
            printf("\nSaindo do calculo IMC\n");
        }
    } while (condicao != 2); 
    
  return 0;
}
    
