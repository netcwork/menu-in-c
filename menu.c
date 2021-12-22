/* 
 * File:   main.c
 * Author: Romano Carmine
 * Description: Creare un menu in linguaggio C
 * Created on 22 dicembre 2021, 15.05
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
// Variabile di confronto
   char scelta;
// Stampa del menu
    printf("      Menu\n");
    printf("-------------------\n");
    printf("-    Opzione A    -\n");
    printf("-    Opzione B    -\n");
    printf("-    Opzione C    -\n");
    printf("-------------------\n");
    
// Esecuzione del comando
    printf("Effettua una scelta: ");
// Ottengo l'input del carattere
    scelta = getchar();
// Parte lo Switch
    switch(scelta){
        case 'a':
            printf("Hai scelto A \n");
            break;
            
            case 'b':
            printf("Hai scelto B \n");
            break;
            
            case 'c':
            printf("Hai scelto C minuscola \n");
            break;
            
        default:
              printf("Opzione errata\n");
    }
    
   // Metto in pausa il programma
    system ("pause");
    return (EXIT_SUCCESS);
}




