#include <stdio.h>
#include <math.h>

// Aufgabe 2.1
/*
int main(void) {
    int x; // Eingabe-Variablen
    int y; //
    int addition; // Ergebnis- oder Ausgabe-Variablen
    int subtraktion;
    int multiplikation;
    int division;
    int modulo;
    printf("\n\t1 . R e c h e n p r o g r a m m\n");
    printf("\nBitte x eingeben :");
    scanf("%i",&x);
    printf("Bitte y eingeben :");
    scanf("%i",&y);
    addition = x+y;
    subtraktion = x-y;
    multiplikation = x*y;
    division = x/y;
    modulo = x%y;
    printf("\n %i + %i ist %i",x,y,addition);
    printf("\n %i - %i ist %i",x,y,subtraktion);
    printf("\n %i * %i ist %i",x,y,multiplikation);
    printf("\n %i / %i ist %i",x,y,division);
    printf("\n %i %% %i ist %i",x,y,modulo);
    printf("\n");

    return 0;
}
*/

// Es werden zuerst 7 Variablen deklariert. Die x und y Variable wird eingelesen und später mit Hilfe von
// Rechenoperationen in den Variablen "addition", "subtraktion", "multiplikation", "division" und "module" gespeichert.
// Danach wird die x und y Variable mit dem jeweiligen Ergebnis der Rechenoperation ausgegeben.

// Für x = 12 und y = 8 passt das Ergebnis noch in die Speichervariablen, wenn man allerdings für x und y 2000000000 eingibt,
// passt das Ergebnis, nicht mehr in den Datentyp. Es kommt zum Überlauf.

/*---------------------------------------------------------------------------*/

// Aufgabe 2.2
/*
int main(void) {
    float x; // Eingabe-Variablen
    float y; //
    float addition; // Ergebnis- oder Ausgabe-Variablen
    float subtraktion;
    float multiplikation;
    float division;
    float modulo;
    printf("\n\t1 . R e c h e n p r o g r a m m\n");
    printf("\nBitte x eingeben :");
    scanf("%f",&x);

    while(getchar() != '\n');

    printf("Bitte y eingeben :");
    scanf("%f",&y);
    addition = x+y;
    subtraktion = x-y;
    multiplikation = x*y;
    division = x/y;
    //modulo = x%y;
    printf("\n %f + %f ist %f",x,y,addition);
    printf("\n %f - %f ist %f",x,y,subtraktion);
    printf("\n %f * %f ist %f",x,y,multiplikation);
    printf("\n %f / %f ist %f",x,y,division);
    //printf("\n %f %% %f ist %f",x,y,modulo);
    printf("\n");

    return 0;
}
*/

// Mit float als Datentyp funktioniert der % (Modulo) Operator nicht mehr.
// Wenn man Nachkommastellen angibt, muss man den Buffer clearen, damit der zweite Einlesevorgang nicht übersprungen wird.

/*--------------------------------------------------------------*/

// Aufgabe 2.3
/*
int main(void) {
    int iAge = 0; // Alter
    int iHearbeatRate = 0; // Herzschläge pro Minute
    int iHearbeatsSinceBirth = 0;

    printf("\nBitte Alter eingeben :");
    scanf("%i",&iAge);
    printf("Bitte Herzschläge/min eingeben :");
    scanf("%i",&iHearbeatRate);
    
    iHearbeatsSinceBirth = iHearbeatRate * 60 * 24 * 365 * iAge;
    
    printf("\nHerzschläge seit Geburt bei einem Alter von %i: %i", iAge, iHearbeatsSinceBirth);
    return 0;
}
*/

/*---------------------------------------------------------*/

// Aufgabe 2.4
int main(void) {
    float fNumber = 0; // Alter
    float fResult = 0;

    printf("\nBitte Nummer eingeben :");
    scanf("%f",&fNumber);

    fResult = sqrt(fNumber);
    printf("\nWurzel aus %.2f: %.2f", fNumber, fResult);

    fResult = log10(fNumber);
    printf("\nLog aus %.2f: %.2f", fNumber, fResult);    

    fResult = pow(fNumber, 2);
    printf("\n2er Potenz aus %.2f: %.2f", fNumber, fResult); 

    return 0;
}