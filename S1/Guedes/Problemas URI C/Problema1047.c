#include<stdio.h>

int main()
{
    int hora_inicio, hora_fim, minuto_inicio, minuto_fim, periodo_hora, periodo_minuto;
    scanf("%d %d %d %d", &hora_inicio, &minuto_inicio, &hora_fim, &minuto_fim);

    if(hora_inicio == hora_fim)
    {
        periodo_hora = 24;
        if(minuto_inicio == minuto_fim)
        {
            periodo_minuto = 0;
        }

        else
        {
            if(minuto_fim < minuto_inicio)
            {
                periodo_minuto = (minuto_fim + 60) - minuto_inicio;
                if(hora_inicio != 0 && hora_fim != 0)
                    periodo_hora -= 1;
            }
            else
            {
                periodo_hora = 0;
                periodo_minuto = minuto_fim - minuto_inicio;
            }
        }
    }

    else
    {
        if(hora_fim < hora_inicio)
        {
            periodo_hora = (hora_fim + 24) - hora_inicio;
            if(minuto_fim < minuto_inicio)
            {
                periodo_minuto = (minuto_fim + 60) - minuto_inicio;
                periodo_hora -= 1;
            }
            else
            {
                periodo_minuto = minuto_fim - minuto_inicio;
            }
        }

        else
        {
            periodo_hora = hora_fim - hora_inicio;
            if(minuto_fim < minuto_inicio)
            {
                periodo_minuto = (minuto_fim + 60) - minuto_inicio;
                periodo_hora -= 1;
            }
            else
            {
                periodo_minuto = minuto_fim - minuto_inicio;
            }
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", periodo_hora, periodo_minuto);
    return 0;
}
