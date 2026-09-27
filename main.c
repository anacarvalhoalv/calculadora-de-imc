#include <stdio.h>

    float peso, altura, imc;
    
    char resposta;

int main()
{
    
    printf("\n----------CALCULADORA DE IMC----------\n\n\n");
    
    do{
        printf("Informe seu peso: ");
        scanf("%f", &peso);
     
        printf("\nInforme sua altura: ");
        scanf("%f", &altura);
    
        imc = peso / (altura * altura);
    
        printf("\nSeu IMC e: %.1f\n", imc);
    
        if (imc < 18.5) {
            printf("\nAbaixo do peso ideal\n");
        }
            
        else if (imc >= 18.5 && imc <= 24.9) {
            printf("\nPeso ideal\n");
        }
        else if (imc >= 25 && imc <= 29.9){
            printf("\nSobrepeso\n");
        }
        else if (imc >= 30 && imc <= 34.9){
            printf("\nObesidade grau I\n");
        }
        else if(imc >= 35 && imc <= 39.9){
            printf("\nObesidade grau II\n");
        }
        else if (imc >= 40) {
            printf("\nObesidade grau III\n");
        }
        
        printf("\nDeseja refazer a consulta? (s/n): ");
    	scanf(" %c", &resposta);
        
    }while (resposta == 's' || resposta == 'S');
    
    printf("\nPrograma encerrado.\n");
    

    


    return 0;
}