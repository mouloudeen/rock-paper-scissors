/**
* \file fonction.c
*
* \author  Sid Ali ZITOUNI TERKI
* \version 1.0
* \date 21 april 2023
* \briefs Contains the functions' core
* \see  fonction.h
*/

#include "fonction.h"
#include <stdlib.h>

//Refresh our buffer
/**
 *\fn void flush_buffer(void)
 *\brief  function to refresh the buffer
 *
 *\return void*
 */
void flush_buffer()
{
int c = 0;

while (c != '\n' && c != EOF)
c = getchar();
}

//play rock-paper-scissors
/**
 *\fn void rps(void)
 *\brief  function to play the game
 *
 *\return void*
 */
void rps(void){
    /* Gamers */
    int player, computer;
    /*Result of this game*/
    
    int pointPlayer = 0;
    int pointComputer= 0;
    
    char grasped;
    while ( (pointPlayer < 3) && (pointComputer <3)){
        
        printf("Que voulez vous jouer (1-Pierre, 2-Feuille, 3-Ciseaux): ");
        scanf("%c", &grasped);
        flush_buffer();
        
        if ((grasped != '1') && (grasped != '2') && (grasped != '3')){
            printf("Vous avez le choix soit 1, 2 ou 3\n");
            continue;
        }
        player = (int)grasped - 48;
        computer = rand()%3+1;
        printf("joueur joue %d et ordinateur joue %d\n", player, computer);
        
        int difference = player - computer;
        switch (difference){
            case -2 :
                pointPlayer += 1;
                break;
                
            case -1:
                pointComputer += 1;
                break;
                
            case 0:
                continue;
                break;
            
            case 1:
                pointPlayer += 1;
                break;
                
            case 2:
                pointComputer += 1;
                break;
        }
        
        printf("Points: Ordi: %d et joueur: %d\n", pointComputer, pointPlayer);
        
            
    }
    if (pointPlayer==3){
        printf("Le joueur a gagné\n");
        
    }
    else {
        printf("L'ordinateur a gagné\n");
    }
    
    
}
