/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 23:19 +0100
 * 1st author:  tony.yam - tony.yam
 * description: longueur_arg
 */

#include "regroupe.h"

int longueur_arg(char **argv, int index)
{
    int compt;

    compt = 0;
    while (argv[index][compt] != '\0') {
        compt = compt + 1;
    }
    return (compt);
}
