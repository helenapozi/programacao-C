#include <stdio.h>

int main (){
float temperatura , umidade;
unsigned int estoque;



printf("entre com a temperatura\n");
scanf("%f",&temperatura);

printf("entre com a umidade\n");
scanf("%f", &umidade);

printf("entre com o estoque\n");
scanf("%u", &estoque);


if(temperatura > 50){
printf("temperatura esta elevada!\n ");
}else{
    printf("temperatura dentro dos parametros");
}

if (umidade > 70){
    printf("a umidade esta controlada\n");

 }else{
    printf("a umidade esta descontrolada\n");
 }

if (estoque > 100){
    printf("estoque bem abastecido\n");

}else{
    printf("estoque baixando\n");
}
return 0;

}
