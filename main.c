#include <stdio.h>

int main() {
    char municipalityName[50];
    char mayorName[50];
    int population;

    printf("Welcome to Windhoek Municipality\n");

    printf("Enter Municipality Name: ");
    fgets(municipalityName, sizeof(municipalityName), stdin);

    printf("Enter Mayor Name: ");
    fgets(mayorName, sizeof(mayorName), stdin);

    printf("Enter population: ");
    scanf("%d", &population);

    printf("\n---------REPORTS---------\n");
    printf("Municipality name: %s", municipalityName);
    printf("Mayor name: Mr. %s", mayorName);
    printf("Population: %d\n", population);

    return 0;
}