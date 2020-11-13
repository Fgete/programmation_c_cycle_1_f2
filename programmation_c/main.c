#include <stdio.h>
#include <stdlib.h>
#include <string.h> // STRING MANIP
// CONSTANT
#define tableScale 10
#define stringLength 255

int main()
{
    /*
    printf("Hello world! \n");

    float myFloat;

    printf("Mon float : %ld \n", sizeof(myFloat));

    printf("Saisir un reel dans myFloat \n", myFloat);
    scanf("%d", &myFloat);
    */

    /*
    int n_a = 0, n_b = 0;
    char c_car = 'a';
    float flt_f = 0.0;
    int n_test; // NOT INITIALISED !

    printf("Hello \n");
    printf("Exemple program \n");

    printf("n_a : %d \n", n_a);
    printf("n_b : %d \n", n_b);
    printf("c_car : %c \n", c_car);
    printf("flt_f : %f \n", flt_f);
    printf("n_test : %d (not initialised)\n", n_test);

    printf("Enter an integer : \n");
    scanf("%d", &n_test);
    printf("n_test : %d \n", n_test);
    printf("height : %d \n", height);

    fflush(stdin); // Empty the standard input buffer
    */

    /*
    // EXERCICE 1

    printf("EXERCICE 1 \n");
    printf(" \n");

    int i, n, som;
    som = 0;
    i = 0;

    while (i < 4){
        printf("Enter an integer : \n");
        scanf("%d", &n);
        som += n;
        i++;
    }
    printf("Somme : %d \n", som);
    printf(" \n");

    // EXERCICE 2

    printf("EXERCICE 2 \n");
    printf(" \n");

    int j, m, som2;
    float moy;
    som2 = 0;
    moy = 0;
    m = 0;
    j = 0;

    while (m != -1){
        printf("Mark %d : \n", j);
        scanf("%d", &m);
        if (m != -1){
            som2 += m;
            j++;
        }
    }

    moy = (float)som2 / (float)j;
    printf("Average of these %d marks : %f \n", j, moy);
    printf(" \n");

    // EXERCICE 3

    printf("EXERCICE 3 \n");
    printf(" \n");

    int k, l, scale;

    printf("Enter the triangle scale : \n");
    scanf("%d", &scale);
    for (k = 0; k < scale; k++){
        for (l = 0; l <= k; l++){
            putchar('*');
        }
        printf(" \n");
    }
    scanf("");
    */

    /*
    // ARRAY

    int myTable[tableScale][tableScale];
    int i, j;

    for (i = 0; i < tableScale; i++){
        for (j = 0; j < tableScale; j++){
            myTable[i][j] = i*10 + j;
            printf("%d \n", myTable[i][j]);
        }
    }
    */

    // STRING (DOESN'T EXIST)

    char myString[tableScale];

    printf("Enter your string :\n");
    scanf("%s", myString); // no '&' -- the array is a pointer

    printf("Your string : %s \n", myString);

    // WE CAN INCLUDE <string.h> TO DO SO

    strcpy(myString, "lagStudio"); // copy string b -> a

    printf("Your string : %s \n", myString);
    printf("Your string length : %d \n", strlen(myString));

    fflush(stdin);

    // fgets string (get string with spaces)
    printf("Enter your string :\n");
    fgets(myString, stringLength, stdin);
    printf("%s \n", myString);

    return 0;
}



















