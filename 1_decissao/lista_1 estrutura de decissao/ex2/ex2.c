#include <stdio.h>

int main(void)
{
    int mes;

    printf("informe o mes:\n");
    scanf("%d", &mes);

    if(mes>=1 && mes <=3)
    {
        printf("%d primeiro trimestre\n", mes);
    }
    if(mes>=4 && mes <=6)
    {
        printf("%d segundo trimestre\n", mes);
    }
    if(mes>=7 && mes <=9)
    {
        printf("%d terceiro trimestre\n", mes);
    }
    if(mes>=10 && mes <=12)
    {
        printf("%d quarto trimestre\n", mes);
    }
    if(mes>=13)
    {
        printf("%d numero digitado nao corresponde a um mes do ano!\n", mes);
    }
    if(mes<=0)
    {
        printf("%d numero digitado nao corresponde a um mes do ano!\n", mes);
    }
 return 0;
}
