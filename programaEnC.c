int main() {
    // Definicion de variables
    int legajo = 0;
    int cantidad_horas = 0;
    int valor_hora = 200;
    int sueldo = 0;
    int sueldo_total = 0;


    // int calculoSueldo(int cantidad_horas, int valor_hora); {
    //     return cantidad_horas * valor_hora;
    // }

        


    // Entrada de datos
    printf("Ingrese el legajo: ");
    scanf("%d",&legajo);

    while (legajo !=0) {
        printf("Ingrese cantidad de horas: ");
        scanf("%d", &cantidad_horas);

        sueldo = cantidad_horas * valor_hora;
        sueldo_total += sueldo;

        printf("El sueldo es de: %d\n", sueldo);

        printf("Ingrese el legajo: ");
        scanf("%d",&legajo);
    }
    
    printf("El sueldo total es de: %d\n", sueldo_total);
    
    
    return 0;
}