/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:18 +0100
 * 1st author:  tony.yam - tony.yam
 * description: verification_carac
 */

#include "regroupe.h"

int verification_carac(int argc, char **argv)
{
    int compt;
    int long_arg;
    int verif_cara_T_E;

    compt = 0;
    verif_cara_T_E = 0;
    while (compt != argc) {
        long_arg = longueur_arg(argv, compt);
        if (argv[compt][0] == '-') {
            if (long_arg >= 2) {
                verif_cara_T_E  = verif_carac_T_E(argv, compt);
            }
        }
        compt = compt + 1;
    }
    return (verif_cara_T_E);
}
