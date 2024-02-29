/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-04 - 14:37 +0100
 * 1st author:  tony.yam - tony.yam
 * description: cat.c
 */

#include "regroupe.h"

int cat(int argc, char **argv)
{
    int compt;
    int verification_caractere;

    compt = 0;
    while (compt != argc) {
        if (argv[compt][0] == '-') {
            if (argv[compt][1] == 'h') {
                helper(argv);
                return (0);
            }
        }
        compt = compt + 1;
    }
    verification_exe(argc);
    verification_carac(argc, argv);
    verification_caractere = verification_carac(argc, argv);
    print_all(argc, argv, verification_caractere);
    return (0);
}
