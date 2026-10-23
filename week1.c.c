#include <stdio.h>

int main() {

char Municipality[100];
char Mayor[100];
int Population;

printf("Municipality financial Management System\n");
printf("Welcome to Windhoek municipality\n");

printf("Enter the name of the Municipality: ");
scanf("%s", Municipality);

printf("Enter the name of the Mayor: ");
scanf("%s", Mayor); 

printf("Enter the population: ");
scanf("%d", &Population);

printf("\n00000000000000000000000000000000");
printf("\n--------------------------------");
printf("\nP0000-------0000000------000000P");
printf("\nMunicipality: %s\n", Municipality);
printf("Mayor: %s\n", Mayor);
printf("Population: %d\n", Population);

return 0;
}