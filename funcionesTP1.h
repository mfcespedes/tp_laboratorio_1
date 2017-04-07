float suma(float a,float b){
    float resultado;
    resultado=a+b;
    return resultado;
}

float resta(float a,float b){
    float resultado;
    resultado=a-b;
    return resultado;
}

float multiplicacion(float a,float b){
    float resultado;
    resultado=a*b;
    return resultado;
}

float division(float a,float b){
    float resultado;
    while(b==0){
        printf("Ingrese un numero mayor a 0: ");
        scanf("%f",&b);
    }
    resultado=a/b;
    return resultado;
}
