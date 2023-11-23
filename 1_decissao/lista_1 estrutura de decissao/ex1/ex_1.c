#include<stdio.h>

int main(void)
{
    int idade;

    printf("informe uma idade:");
    scanf("%d", &idade);


    if(idade>=0 && idade <=4)
    {
        printf("%d anos AINDA EH CEDO PARA JOGAR FUTBOL!", idade);
    }
    if(idade>=5 && idade <=10)
    {
        printf("%d anos sub-10", idade);
    }
    if(idade>=11 && idade<=17)
    {
        printf("%d anos sub-17", idade);
    }
     if(idade>=18 && idade<=20)
    {
        printf("%d anos sub-20", idade);
    }
     if(idade>=21 && idade<=35)
    {
        printf("%d anos PROFISSIONAL", idade);
    }
     if(idade>=36 && idade<=55)
    {
        printf("%d anos MAsTER", idade);
    }
     if(idade>=56)
    {
        printf("%d anos MELHOR APOSENTAR AS CHUTEIRAS!", idade);
    }
    if(idade<0)
        printf("%d anos dado incorreto!!", idade);
    return 0;
}
