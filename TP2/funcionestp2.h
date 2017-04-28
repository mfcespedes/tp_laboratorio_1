typedef struct
{
    char nombre[30];
    int edad;
    long int dni;
    int estado;
} DatosPersonales;

void iniciarCero(DatosPersonales persona[], int T);
void agregar(DatosPersonales persona[], int T);
void borrar(DatosPersonales persona[], int T);
void ordenar(DatosPersonales persona[], int T);
int grafico (DatosPersonales persona[]);
