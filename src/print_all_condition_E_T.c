/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-13 - 18:31 +0100
 * 1st author:  tony.yam - tony.yam
 * description: print_all_condition_E_T
 */

#include "regroupe.h"

int print_all_condition_E_T(int argc, char **argv, int E_T, int compt)
{
    if (argv[compt] > argv[0] && E_T == 1 && argc <= 2) {
        copie_E(argc);
    } else if (argv[compt] > argv[0] && E_T == 2 && argc <= 2) {
        copie_T(argc);
    } else if (argv[compt] > argv[0] && E_T == 3 && argc <= 2) {
        copie_T_E(argc);
    }
    return (0);
}
