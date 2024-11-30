#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define PI 3.14

int main()
{
    int iInput = 0;
    float fRadius = 0;
    float fNum1 = 0;
    float fNum2 = 0;
    float fResult = 0;
    bool boRunApp = true;
    while(boRunApp)
    {
        printf("\nKreisberechnung");
        printf("\n1.\t\t Fläche berechnen");
        printf("\n2.\t\t Zahlensumme berechnen");
        printf("\n3.\t\t Zahlenprodukt berechnen");
        printf("\n4.\t\t Programm beenden");

        printf("\nIhre Eingabe: ");
        scanf("%i", &iInput);

        switch (iInput)
        {
            case 1:
                printf("\nFläche berechnen");
                printf("\nGib den Radius ein: ");
                scanf("%f", &fRadius);
                fResult = PI * pow(fRadius, 2);
                break;

            case 2:
                printf("\nZahlensumme berechnen (Summe von 1 bis eingegebener Endwert)");
                printf("\nGib den Endwert ein: ");
                scanf("%f", &fNum2);
                for(; fNum1 <= fNum2; fNum1++)
                {
                    fResult += fNum1;
                }
                break;

            case 3:
                printf("\nZahlenprodukt berechnen (Produkt von 1 bis eingegebener Endwert)");
                printf("\nGib den Endwert ein: ");
                scanf("%f", &fNum2);
                fResult = 1;
                for(fNum1 = 1; fNum1 <= fNum2; fNum1++)
                {
                    fResult *= fNum1;
                }
                break;

            case 4:
                printf("\nProgramm beenden ...");
                boRunApp = false;
                break;
            
            default:
                printf("\nUngültige Eingabe");
                break;
        }
        if(boRunApp)
        {
            printf("Ergebnis: %0.2f", fResult);
        } 

        iInput = 0;
        fRadius = 0;
        fNum1 = 0;
        fNum2 = 0;
        fResult = 0;
    }
}