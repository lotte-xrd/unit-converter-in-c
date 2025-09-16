#include <stdio.h>

int main(void)
{
    int opcao;
    double celsius, fahrenheit;
    double km, milhas;
    double dolar, euro;
    double m2, ft2;

    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Fahrenheit -> Celsius\n");
    printf("3 - Km -> Milhas\n");
    printf("4 - Milhas -> Km\n");
    printf("5 - Dolar -> Euro\n");
    printf("6 - Euro -> Dolar\n");
    printf("7 - ft2 -> m2\n");
    printf("8 - m2 -> ft2\n");
    scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite a temperatura em celsius: ");
            scanf("%lf", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("Resultado: %.2lf °F\n", fahrenheit);
        }

        if (opcao == 2) {
            printf("Digite a temperatura em fahrenheit: ");
            scanf("%lf", &fahrenheit);
            celsius = (fahrenheit -32) * 5/9;
            printf("Resultado: %.2lf °C\n", celsius);
        }

        if (opcao == 3) {
            printf("Digite a quantidade em km: ");
            scanf("%lf", &km);
            milhas = km * 0.621371;
            printf("Resultado: %.2lf Milhas\n", milhas);
        }

        if (opcao == 4) {
            printf("Digite a quantia em milhas: ");
            scanf("%lf", &milhas);
            km = milhas / 0.621371;
            printf("Resultado: %.2lf Km\n", km);
        }

        if (opcao == 5) {
            printf("Digite o valor em dolar: ");
            scanf("%lf", &dolar);
            euro = dolar * 0.84;
            printf("Resultado: %.2lf Euro\n", euro);
        }

        if (opcao == 6) {
            printf("Digite o valor em euro: ");
            scanf("%lf", &euro);
            dolar = euro * 1.19;
            printf("Resultado: %.2lf Dolar\n", dolar);
        }

        if (opcao == 7) {
            printf("Digite um valor em m2: ");
            scanf("%lf", &ft2);
            m2 = ft2 * 10.7639104;
            printf("Resultado: %.2lf ft2\n", m2);
        }

        if (opcao == 8) {
            printf("Digite um valor em ft2: ");
            scanf("%lf", &m2);
            ft2 = m2 * 0.09290304;
            printf("Resultado: %.2lf m2\n", ft2);
        }

    return 0;
}