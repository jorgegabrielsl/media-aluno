#include <stdio.h>
int main()
{
    float a,b,x;

    printf("informe a primeira nota: ");
    scanf("%f",&a);

    printf("informe a segunda nota: ");
    scanf("%f",&b);

    x=(a+b)/2;

    printf("resultado: %0.2f\n",x);
    if(x == 10){
    printf("aprovado com distincao");
    }
    else if(x >= 7){
        printf("aprovado ");
    }
else{
    printf("reprovado");
}
}