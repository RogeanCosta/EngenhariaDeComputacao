#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[15], palavra2[15], palavra3[15];

    gets(palavra1);
    gets(palavra2);
    gets(palavra3);

    if(strcasecmp(palavra1, "vertebrado") == 0)
    {
        if(strcasecmp(palavra2, "ave") == 0)
        {
            if(strcasecmp(palavra3, "carnivoro") == 0)
                puts("aguia");
            else if(strcasecmp(palavra3, "onivoro") == 0)
                puts("pomba");
        }

        else if(strcasecmp(palavra2, "mamifero") == 0)
        {
           if(strcasecmp(palavra3, "onivoro") == 0)
               puts("homem");
           else if(strcasecmp(palavra3, "herbivoro") == 0)
               puts("vaca");
        }
    }

    else if(strcasecmp(palavra1, "invertebrado") == 0)
    {
        if(strcasecmp(palavra2, "inseto") == 0)
        {
            if(strcasecmp(palavra3, "hematofago") == 0)
                puts("pulga");
            else if(strcasecmp(palavra3, "herbivoro") == 0)
                puts("lagarta");
        }

        else if(strcasecmp(palavra2, "anelideo") == 0)
        {
            if(strcasecmp(palavra3, "hematofago") == 0)
                puts("sanguessuga");
            else if(strcasecmp(palavra3, "onivoro") == 0)
                puts("minhoca");
        }
    }

    return 0;
}
