#include <stdio.h>

    int main(void)
    {

        float peso, altura, imc;

        printf("informe o peso:\n");
        scanf("%f", &peso);

        printf("informe a altura:\n");
        scanf("%f", &altura);


        imc = peso / (altura*altura);

        if(imc>=0 && imc <=20)
        {
            printf("IMC = %f abaixo do peso\n", imc);
        }
         if(imc>=21 && imc <=25)
        {
            printf("IMC = %f peso normal\n", imc);
        }
        if(imc>=26 && imc <=30)
        {
            printf("IMC = %f acima do peso\n", imc);
        }
        if(imc>=31 && imc <=34)
        {
            printf("IMC = %f Obeso\n", imc);
        }
        if(imc>34)
        {
            printf("IMC = %f peso normal\n", imc);
        }



        return 0;
    }
