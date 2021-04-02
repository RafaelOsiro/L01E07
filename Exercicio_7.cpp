/*Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de matrícula do funcionário, o número de horas trabalhadas, o 
valor que recebe por hora e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados de entrada e os dados de 
saída.*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Variable Declaration
    char *c, fullName[60];
    int gender, employeeRegistration;
    float workHours, hourValue, salary;
    bool validation;

    //Code
    printf("Programa para calcular o holerite\n\n");

    validation = false;
    gender = 0;

    printf("Digite o nome do funcionario: ");
    scanf("%s", &fullName);

    while (validation != true)
    {
        printf("\nDigite: \n");
        printf("1 - para sexo Masculino\n");
        printf("2 - para sexo Feminino\n");
        printf(": ");
        scanf("%d", &gender);

        if (gender == 1)
        {
            validation = true;
        }
        else if (gender == 2)
        {
            validation = true;
        }
        else
        {
            validation = false;
            printf("Dados inv\240lidos!\n");
            printf("Digite 1 ou 2\n\n");
        }
    }

    validation = false;

    while (validation != true)
    {
        printf("\nDigite a matr\241cula do funcion\240rio: ");
        scanf("%d", &employeeRegistration);

        if (employeeRegistration > 0)
        {
            validation = true;
        }
        else
        {
            validation = false;
            printf("\n\nDados inv\240lidos!\n");
            printf("Digite a matr\241cula maior que 0.\n\n");
        }
    }

    validation = false;

    while (validation != true)
    {
        printf("\nQuantidade de horas trabalhadas: ");
        scanf("%f", &workHours);

        if (workHours >= 0)
        {
            validation = true;
        }
        else
        {
            validation = false;
            printf("\n\nDados inv\240lidos!\n");
            printf("A quantidade de horas trabalhadas precisa ser positiva!\n\n");
        }
    }

    validation = false;

    while (validation != true)
    {
        printf("Valor da hora: ");
        scanf("%f", &hourValue);

        if (hourValue >= 0)
        {
            validation = true;
        }
        else
        {
            validation = false;
            printf("\n\nDados inv\240lidos!\n");
            printf("O valor da hora precisa ser positivo\n\n");
        }
    }

    printf("\n\n\nMatricula: %d.", employeeRegistration);
    printf("\nNome completo: %s.", fullName);
    switch (gender)
    {
    case 1:
        printf("\nSexo: Masculino.");
        break;
    case 2:
        printf("\nSexo: Feminino.");
        break;
    }
    printf("\nHoras trabalhadas: %.2f.", workHours);
    printf("\nValor das horas: R$%.2f.", hourValue);
    printf("\nSal\240rio: %.2f H x R$%.2f = R$%.2f", workHours, hourValue, (workHours * hourValue));


    scanf("%c", &c);
    return 0;
}
