#include<stdio.h>
main(){
 int opcion;
 int num1;
 int num2;
 int num3;
 float  resultPP;
 float  resultSP;
 float  resultTP;
 float  promedio;
 float resultado;

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
    resultPP=(num1*.3)+(num2*.7)/2;
    printf("Promedio de Primer parcial es:%f\n",resultado);
    break;

    case 2:
    printf("Ingresa la calificacion del examen: ");
    scanf("%f",&num1);
    printf("Ingresa la calificacion de evaluacion continua: ");
    scanf("%f",&num2);
    resultado=num1-num2;
    printf("Promedio de Segundo parcial:%f\n",resultado);
    break;
    case 3:
    printf("Ingresa la calificacion del examen: ");
    scanf("%f",&num1);
    printf("Ingresa la calificacion de evaluacion continua: ");
    scanf("%f",&num2);
    resultado=num1*num2;
    printf("Promedio de Tercer parcial:%f\n",resultado);
    break;

    case 4:
    printf("Ingresa la calificacion del primer parcial");
    scanf("%f",&num1);
    printf("Ingresa la calificacion del segundo parcial");
    scanf("%f",&num2);
    printf("Ingresa la calificacion del tercer parcial");
    scanf("%f",&num3);
    promedio=num1+num2+num3/3;
    printf("El promedio final es: %f\n",promedio);
    break;

    case 5:
    printf("GRACIAS POR UTILIZAR EL PROGRAMA :3   \n");
    break;

    }//SWITCH//
    system("pause");
    }while(opcion != 5);

}
