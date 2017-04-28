#include <stdio.h>
#include <stdlib.h>
#include "funcionestp2.h"
#define A 20

int main()
{
    DatosPersonales persona[A];
    int opc;
    char seguir='s';

    iniciarCero(persona, A);

    while(seguir=='s')
    {
        printf("\n1. Agregar una persona\n2. Borrar una persona\n3. Imprimir lista ordenada por nombre\n4. Imprimir Grafico de edades\n5. Salir\n");
        scanf("%d", &opc);

        switch(opc)
        {
        case 1:
            agregar(persona,A);
            break;
        case 2:
            borrar(persona,A);
            break;
        case 3:
            ordenar(persona, A);
            break;
        case 4:
            grafico(persona);
            break;
        case 5:
            seguir='n';
            break;
        }
    }
}
