/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:04 +0100
 * 1st author:  tony.yam - tony.yam
 * description: print_all
 */

#include "regroupe.h"

int print_all(int argc, char **argv, int E_T)
{
    int compt;

    compt = 0;
    while (compt != argc) {
        print_all_condition(argc, argv, E_T, compt);
        compt = compt + 1;
    }
    return (0);
}

