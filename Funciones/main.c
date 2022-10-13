 float cantidad;
    char choice;

    printf("\tConvertidor de Dolares/Pesos.\n\n");

    printf("Si quieres convertir de dolares a pesos presiona 'p'.\n");
    printf("Si quieres convertir de pesos a dolares presiona 'd'.\n");
    scanf(" %c", &choice);
    if(choice == 'p' || choice == 'P')
    {
        printf("Escribe la cantidad de dolares a convertir en pesos: \n");
        scanf("%f", &cantidad);

        float conversion =  Dolares(cantidad);

        printf("El resultado es: %f \n", conversion);

    }else if(choice == 'd' || choice == 'D')
    {
        printf("Escribe la cantidad de pesos a convertir en dolares: \n");
        scanf("%f", &cantidad);

        float conversion =  Pesos(cantidad);

        printf("El resultado es: %f \n", conversion);

    }


