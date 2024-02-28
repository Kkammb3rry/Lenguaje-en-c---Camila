#include<stdio.h>
main(){
int opcion;
float num1;
float num2;
float result;
printf("\t\t--CALCULADORA--\n");
printf("1.-Sumar\n");
printf("2.-Restar\n");
printf("3.-Multiplicar\n");
printf("4.-Dividir\n");
printf("Selecciona una opcion: ");
scanf("%d", &opcion);

switch (opcion){
case 1:
    printf("Ingresaa el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);
    result = num1 + num2;
    printf("El resultado de tu suma es: %f", result);
    break;

case 2:
    printf("Ingresa el primer numero: ");
    scanf("%f",&num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f",&num2);
    result = num1 - num2;
    printf("El resultado de tu resta es: %f", result);
    break;

case 3:
    printf("Ingresa el primer numero: ");
    scanf ("%f",&num1);
    printf("Ingresa el segundo numero: ");
    scanf ("%f",&num2);
    result = num1 * num2;
    printf("El resultado de tu multiplicacion es: %f",result);
    break;

case 4:
    printf("Ingresa el primer numero: ");
    scanf ("%f",&num1);
    printf("Ingresa el segundo numero: ");
    scanf ("%f",&num2);
    result = num1 / num2;
    printf("El resultado de tu division es: %f",result);
    break;
  }
}

