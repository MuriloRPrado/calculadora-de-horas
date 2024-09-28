#include <iostream>
#include <conio.h>
#include <Windows.h>

int main()
{
    //Declarando as variáveis
    int opcao, minutosResultado, horasResultado, horasInicial = 0, minutosInicial = 0, horasFinal = 0, minutosFinal = 0;
    char resposta = 's';

    while (resposta == 's') {

        //Iniciando com o menu
        system("cls");
        printf("Bem vindo a Calculadora de Horas \n\n");
        printf("1- Iniciar  \n");
        printf("0- Sair     \n");
        scanf_s("%d", &opcao);

        switch (opcao) {

        case 0: 
            printf("Deseja voltar? (s/n) \n");
            resposta = _getche();
            printf("\n\n");
            break;

        case 1:
            system("cls");
            printf("Digite as horas iniciais: \n");
            scanf_s("%d", &horasInicial);
            printf("Digite os minutos iniciais: \n");
            scanf_s("%d", &minutosInicial);
            printf("\n");
            printf("Agora digite as horas finais: \n");
            scanf_s("%d", &horasFinal);
            printf("Digite os minutos finais: \n");
            scanf_s("%d", &minutosFinal);
            printf("\n");

            horasResultado = horasInicial + horasFinal;             //Cálcula as horas
            minutosResultado = minutosInicial + minutosFinal;       //Cálcula os minutos

            if (minutosResultado == 60) {       //Quando os minutos for igual a 60, incrementa + 1 no resultado das horas
                horasResultado += 1;
                system("cls");
                printf("Resultado: %d:00 \n\n", horasResultado);
                printf("Deseja calcular novamente? (s/n) \n");

            }
            else if (minutosResultado > 60) {   //Quando os minutos for maior que 60, incrementa + 1 no resultado das horas e calcula a diferença nos minutos
                horasResultado += 1;
                minutosResultado -= 60;

                if (minutosResultado < 10) { //Se menor que 10, insere um 0 na frente dos minutos para que fique formatado com dois números
                    system("cls");
                    printf("Resultado: %d:0%d \n\n", horasResultado, minutosResultado);
                    printf("Deseja calcular novamente? (s/n) \n");

                }
                else { //Se maior ou igual a 10, reflete o resultado dos minutos calculados
                    system("cls");
                    printf("Resultado: %d:%d \n\n", horasResultado, minutosResultado);
                    printf("Deseja calcular novamente? (s/n) \n");
                }

            }
            else {
                system("cls");
                printf("Resultado: %d:%d \n\n", horasResultado, minutosResultado);
                printf("Deseja calcular novamente? (s/n) \n");
            }

            resposta = _getche();
            printf("\n\n");
            break;

        default:
            printf("Opcao Incorreta \n");
            Sleep(3000);
            break;
        }
    }

    system("pause");
}