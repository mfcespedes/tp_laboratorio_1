#include <stdio.h>
#include <stdlib.h>
#include "funcionestp2.h"

int menor18, edad19a35, mayor35;

/**
 * \brief Inicializa en cero los estados
 * \param Busca en una estructura los datos
 * \param Indica la cantidad de elementos del array
 * \return No devuelve nada
 */

void iniciarCero(DatosPersonales persona[], int T)
{
    int i;
    for (i=0; i<T; i++)
    {
        persona[i].estado = 0;
    }
}

/**
 * \brief Carga los datos solicitados
 * \param Busca en una estructura los datos a solicitar
 * \param Indica la cantidad de elementos del array
 * \return No devuelve nada
 */

void agregar(DatosPersonales persona[], int T)
{
    int i;
    for(i=0; i<T; i++)
    {
        if(persona[i].estado == 0)
        {
            printf("Ingrese el nombre: ");
            fflush(stdin);
            gets(persona[i].nombre);

            printf("Ingrese la edad: ");
            scanf("%d", &persona[i].edad);

            if (persona[i].edad<19)
            {
                menor18++;
            }
            if (persona[i].edad>35)
            {
                mayor35++;
            }
            if (persona[i].edad>=19&&persona[i].edad<=35)
            {
                edad19a35++;
            }

            printf("Ingrese el DNI: ");
            scanf("%d", &persona[i].dni);

            persona[i].estado = 1;
            break;


        }
    }
}

/**
 * \brief Borra los datos cargados
 * \param Busca en una estructura los datos a borrar
 * \param Indica la cantidad de elementos del array
 * \return No devuelve nada
 */

void borrar(DatosPersonales persona[], int T)
{

    int i,flagUbico=0;
    long int auxDni;
    char elimino;

    for(i=0; i<T; i++)
    {
        if(persona[i].estado == 1)
        {
            printf("Ingrese el DNI: ");
            scanf("%d", &auxDni);

            if(auxDni == persona[i].dni)
            {
                printf("%s\t%d\t%d\n", persona[i].nombre,persona[i].edad,persona[i].dni);
                printf("Seguro que desea eliminar s/n: ");
                elimino = getche();

                if(elimino == 's')
                {
                    persona[i].estado = 0;

                }
                else
                {
                    printf("Accion cancelada por el usuario!!!");
                }
                flagUbico = 1;
                break;
            }
        }
    }
    if(flagUbico==0)
    {
        printf("DNI no cargado\n");
    }
}

/**
 * \brief Ordena y muestra los datos cargados
 * \param Busca en una estructura los datos a ordenar y mostrar
 * \param Indica la cantidad de elementos del array
 * \return No devuelve nada
 */

void ordenar(DatosPersonales persona[], int T)
{
    DatosPersonales auxPersona;
    int i,j;

    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(strcmp(persona[i].nombre, persona[j].nombre)>0)
            {
                auxPersona = persona[i];
                persona[i] = persona[j];
                persona[j] = auxPersona;
            }
            else
            {
                if(strcmp(persona[i].nombre, persona[j].nombre)==0)
                {
                    if(persona[i].dni>persona[j].dni)
                    {
                        auxPersona = persona[i];
                        persona[i] = persona[j];
                        persona[j] = auxPersona;
                    }
                }
            }

        }
    }

    printf("Nombre\tEdad\tDNI\n");
    for(i=0; i<T; i++)
    {
        if(persona[i].estado==1)
        {
            printf("%s\t%d\t%d\n", persona[i].nombre, persona[i].edad,persona[i].dni);
        }

    }

}

/**
 * \brief grafica los datos cargados
 * \param Busca en una estructura los datos a graficar
 * \param Indica la cantidad de elementos del array
 * \return un grafico en barras
 */

int grafico (DatosPersonales persona[])
{
    int i, flag, mayorEdad;
    if(menor18>=edad19a35&&menor18>=mayor35)
    {
        mayorEdad=menor18;
    }
    if(edad19a35>=menor18&&edad19a35>=mayor35)
    {
        mayorEdad=edad19a35;
    }
    if(mayor35>=edad19a35&&mayor35>=menor18)
    {
         mayorEdad=mayor35;
    }
    for(i=mayorEdad; i>0; i--)
    {
            printf("%02d|",i);
            if(i<=menor18)
            {
                printf("*");
            }
            if(i<=edad19a35)
            {
                flag=1;
                printf("\t*");
            }
            if(i<=mayor35)
            {
                if(flag==0)
                    printf("\t\t*");
                if(flag==1)
                    printf("\t*");
            }

        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n    %d\t%d\t%d", menor18, edad19a35, mayor35);
    return 0;
}
