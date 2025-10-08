#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x;
	int y;
	char signe;
	printf("Salut à toi jeune padawan !\n");
	printf("Choisis un opérateur (+, *, /, -, %%) :\n");
        scanf("%c", &signe);
	printf("écrivez un nombre entier :\n");
        scanf("%d", &x);
        printf("écrivez un second nombre entier :\n");
        scanf("%d", &y);
	if(signe == '+')
	{
	printf("addition\n");
	int resultat = x + y;
	printf("%d + %d = %d\n", x, y, resultat);
	}
	else if(signe == '-')
        {
	printf("soustraction\n");
	int resultat = x - y;
        printf("%d - %d = %d\n", x, y, resultat);
        }
	else if(signe == '*')
        {
	printf("multiplication\n");
	int resultat = x * y;
        printf("%d * %d = %d\n", x, y, resultat);
        }
	else if(signe == '/')
        {
	printf("division\n");
		if(x, y == 0)
		{
			printf("On ne peut pas diviser par 0 imbécile (～￣▽￣)～\n");
		}
		else
		{double resultat = (double) x / (double) y;
        	printf("%d / %d = %.2f\n", x, y, resultat);
		}
        }
	else if(signe == '%')
        {
	printf("modulo\n");
	int resultat = x % y;
        printf("%d %% %d = %d\n", x, y, resultat);
        }
	else
        {
	printf("l'opérateur n'est pas reconnu débilos (～￣▽￣)～\n");
        }
	exit(0);
}
