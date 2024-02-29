/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:14 +0100
 * 1st author:  tony.yam - tony.yam
 * description: print_all_condition
 */

#include "regroupe.h"

int print_all_condition(int argc, char **argv, int E_T, int compt)
{
    if (argv[compt] > argv[0] && argv[compt][0] != '-' && E_T != 0) {
        fichier_E_T(argv, compt, E_T);
    } else if (argv[compt] > argv[0] && E_T == 0 && argv[compt][0] != '-') {
        lecture_fichier(argv, compt);
    } else if (argv[compt] > argv[0] && E_T == 0 && argv[compt][0] == '-') {
        copie(argc);
    }
    print_all_condition_E_T(argc, argv, E_T, compt);
    return (0);
}
