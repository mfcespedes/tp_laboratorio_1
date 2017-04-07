#include <stdio.h>
#include <stdlib.h>
#include "funcionesTP1.h"

int Factorial(float num);

int main()
{
    char seguir='s';
    int opcion=0;
    float a,b,c;

    while(seguir=='s')
    {
        do{

        printf("\n1- Ingresar 1er operando (A=%.2f)\n",a);
        printf("2- Ingresar 2do operando (B=%.2f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingresar 1er operando: ");
                scanf("%f",&a);
                break;
            case 2:
                system("cls");
                printf("Ingresar 2do operando: ");
                scanf("%f",&b);
                break;
            case 3:
                c=suma(a,b);
                printf("La suma es: %.2f\n",c);
                break;
            case 4:
                c=resta(a,b);
                printf("La resta es: %.2f\n",c);
                break;
            case 5:
                c=division(a,b);
                printf("La division es: %.2f\n",c);
                break;
            case 6:
                c=multiplicacion(a,b);
                printf("La multiplicacion es: %.2f\n",c);
                break;
            case 7:
                c=Factorial(a);
                printf("El factorial es: %.2f\n",c);
                break;
            case 8:
                c=suma(a,b);
                printf("La suma es: %.2f\n",c);
                c=resta(a,b);
                printf("La resta es: %.2f\n",c);
                c=division(a,b);
                printf("La division es: %.2f\n",c);
                c=multiplicacion(a,b);
                printf("La multiplicacion es: %.2f\n",c);
                c=Factorial(a);
                printf("El factorial es: %.2f\n",c);
                break;
            case 9:
                seguir = 'n';
                break;
        }
        }while(opcion!=9);


    }
}

int Factorial(float num)
        {
          if (num==0) return 1;
          return num*Factorial(num-1);
        }

