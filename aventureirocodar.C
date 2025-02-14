#include <stdio.h>

int main (){
    int nota1,nota2,nota3;
    int media;
    printf("programa de calculo de media\n");

    printf("digite sua primeira nota\n");
    scanf("%d" , &nota1);

    printf("digire sua segunda nota\n");
    scanf("%d" , &nota2);

    printf("digite sua terceira nota\n");
    scanf("%d" , &nota3);

    media=(nota1+nota2+nota3) /3;
    printf ("a media é: %d" , media);

    return 0;

}
