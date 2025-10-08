#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x;
	int y;
	char signe;
	printf("choisissez un opérateur (+, *, /, -, %%) :\n");
        scanf("%c", &signe);
	printf("écrivez un nombre entier :\n");
        scanf("%d", &x);
        printf("écrivez un second nombre entier :\n");
        scanf("%d", &y);
	if(signe == '+')
	{
	printf("addition\n");
	}
	else if(signe == '-')
        {
	printf("soustraction\n");
        }
	else if(signe == '*')
        {
	printf("multiplication\n");
        }
	else if(signe == '/')
        {
	printf("division\n");
        }
	else if(signe == '%')
        {
	printf("modulo\n");
        }
	else
        {
	printf("l'opérateur n'est pas reconnu.\n");
        }
	exit(0);
}
