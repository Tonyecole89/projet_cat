/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:19 +0100
 * 1st author:  tony.yam - tony.yam
 * description: verif_carac_T_E
 */

#include "regroupe.h"

int verif_carac_T_E(char **argv, int compt)
{
    if (argv[compt][1] == 'T' && argv[compt][2] == 'E') {
        return (3);
    } else if (argv[compt][1] == 'T') {
        return (2);
    } else if (argv[compt][1] == 'E') {
        return (1);
    }
    return (0);
}
