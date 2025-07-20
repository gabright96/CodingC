#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int opcao;
char nome[40],adress[50];

float co,ca,h,qsin,angle; 
signed int a,b,c;


printf("Digite seu nome:");
scanf("%s",&nome);
printf("Digite o nome da sua cidade:");
scanf("%s",&adress);



//Menu de opções 
printf("Bem vindo %s ! Escolha uma opcao:\n",nome);
printf("1-Dados pessoais \n");
printf("2-Calculadora trigonometrica \n");
printf("3-Calcular equacao quadrática \n");
printf("4-Sair do programa \n");
scanf("%d",&opcao);
switch(opcao)
{
case 1:
printf("Nome:%s\n",nome);
printf("Adress:%s",adress);

break;

case 2:

printf("Digite o valor do cateto oposto");
scanf("%f",&co);
printf("Digite o valor do cateto adjacente");
scanf("%f",&ca);
 h=sqrt((co*co)+(ca*ca));
qsin=co/h;
angle=asin(qsin);
printf("Hipotenusa=%f e angulo=%f",h,angle);
break;
case 3:

printf("Digite o coeficiente angular:");
scanf("%d",&a);
printf("Digite o coeficiente linear:");
scanf("%d",&b);
printf("Digite o termo independente:");
scanf("%d",&c);
printf("Sua equacao eh:%dx^2 %dx %d =0\n",a,b,c);
signed int delta=(b*b)-(4*a*c);
scanf("%d",&delta);
printf("O determinante eh :%d\n",delta);

if(delta<0){
printf("Determinante negativo");
}
else if(delta>0){
float x1=(-b-sqrt(delta))/(2*a);
float x2=(-b+sqrt(delta))/(2*a);

printf("A primeira raiz eh :%f \n",x1);
printf("A segunda raiz eh :%f\n",x2);
}
else if((delta==0) && (delta!=0)){
float x1=(-b-(sqrt(delta)))/2*a;

printf("Raiz única e igual a :%f\n",x1);
 }
break;
case 4:
printf("Ate mais %s !",nome);
break;
default:
printf("Opcao invalida!");
}
return 0;
}