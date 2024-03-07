#include <stdio.h>

int main() {
    float cantidad;
    int opcion;

    printf("Bienvenido al conversor de monedas\n");
    printf("Selccione una opción\n\n");
    printf("Opción 1. Quetzales a Dolares\n");
    printf("Opción 2. Dolares a Quetzales\n");
    printf("Opción 3. Dolares a Euros\n");
    printf("Opción 4. Euros a Dolares\n");
    printf("Ingrese la opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f Quetzales son %.2f Dolares\n", cantidad, cantidad / 7.75);
            break;
        case 2:
            printf("Ingrese la cantidad en Dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f Dolares son %.2f Quetzales\n", cantidad, cantidad * 7.75);
            break;
        case 3:
            printf("Ingrese la cantidad en Dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f Dolares son %.2f Euros\n", cantidad, cantidad * 0.82);
            break;
        case 4:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f Euros son %.2f Dolares\n", cantidad, cantidad / 0.82);
            break;
        default:
            printf("Opción no válida\n");
    }

    return 0;
}


/*
---- APUNTES

	-- Para compilar programa de en C
	gcc Conversor.c -o conversor

    -- para ejecutar programa de C
    ./conversor

*/
