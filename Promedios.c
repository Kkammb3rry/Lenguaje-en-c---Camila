#include<stdio.h>
main(){
 int opcion;
 float num1;
 float num2;
 float num3;
 float resultPP;
 float resultSP;
 float resultTP;
 float promedio;
 float result;

  do{
    system("cls");//clear screen//
    printf("\t\t--Calculadora--\n");
    printf("1.-Primer Parcial\n2.-Segundo Parcial\n3.-Tercer Parcial\n4.-Calcular Promedio\n5.-SALIR\n");
    printf("Selecciona una opcion:");
    scanf("%d",&opcion);

    switch (opcion)
    {

    case 1:
    printf("Ingresa la calificacion del examen: ");
    scanf("%f",&num1);
    printf("Ingresa la calificacion de evaluacion continua: ");
    scanf("%f",&num2);
    resultPP=(num1*.3)+(num2*.7);
    printf("Promedio de Primer parcial es:%f\n", resultPP);
    break;

    case 2:
    printf("Ingresa la calificacion del examen: ");
    scanf("%f",&num1);
    printf("Ingresa la calificacion de evaluacion continua: ");
    scanf("%f",&num2);
    resultSP=(num1*.3)+(num2*.7);
    printf("Promedio de Segundo parcial:%f\n",resultSP);
    break;

    case 3:
    printf("Ingresa la calificacion del examen: ");
    scanf("%f",&num1);
    printf("Ingresa la calificacion de evaluacion continua: ");
    scanf("%f",&num2);
    resultTP=(num1*.3)+(num2*.7);
    printf("Promedio de Tercer parcial:%f\n",resultTP);
    break;

    case 4:
    promedio=(resultPP)+(resultSP)+(resultTP);
    result=promedio/3;
    printf("El promedio final es: %f\n",result);
    break;

    case 5:
    printf("GRACIAS POR UTILIZAR EL PROGRAMA :3   \n");
    break;

    }//SWITCH//
    system("pause");
    }while(opcion != 5);
}
