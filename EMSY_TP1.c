//-----------------------------------------------------------------------------------//
// Nom du projet 		: EMSY TP1 
// Nom du fichier 		: EMSY_TP1.c 
// Date de création 	: 27.09.2024
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : 
//
//
// Remarques :           
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf
#include <math.h>

#define _USE_MATH_DEFINES


int main(void)
{
    int longueurCarre = 3;
    int largeurCarre = 4;
    int surfaceCarre = 0;

    surfaceCarre = longueurCarre * largeurCarre;
    printf("surfaceCarre = %d", surfaceCarre);
    return(surfaceCarre);
}

