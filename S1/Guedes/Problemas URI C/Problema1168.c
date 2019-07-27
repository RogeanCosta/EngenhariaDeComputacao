#include<stdio.h>

int main()
{
    char string[10000];
    int N, soma, i;

    scanf("%d", &N);
    while(N > 0)
    {
        i = 0;
        soma = 0;
        string[i] = '\0';
        scanf("%s", &string);
        while(string[i])
        {
            switch(string[i])
            {
                case '1':
                    soma = soma + 2;
                    break;
                case '2':
                    soma = soma + 5;
                    break;
                case '3':
                    soma = soma + 5;
                    break;
                case '4':
                    soma = soma + 4;
                    break;
                case '5':
                    soma = soma + 5;
                    break;
                case '6':
                    soma = soma + 6;
                    break;
                case '7':
                    soma = soma + 3;
                    break;
                case '8':
                    soma = soma + 7;
                    break;
                case '9':
                    soma = soma + 6;
                    break;
                case '0':
                    soma = soma + 6;
                    break;
                default:
                    break;
            }
            i++;
        }
        printf("%d leds\n", soma);


        N--;
    }

    return 0;
}
