/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:20 +0100
 * 1st author:  tony.yam - tony.yam
 * description: fichier_E_T
 */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "regroupe.h"

int fichier_E_T(char **argv, int compt, int E_T)
{
    int lecture;
    char *buffer;
    int reader;

    reader = -1;
    buffer = malloc(sizeof (char) * 101);
    try_erreur_buffer(argv, buffer, compt);
    lecture = open(argv[compt], O_RDONLY);
    try_erreur_open(argv, lecture, compt);
    reader = read(lecture, buffer, 100);
    try_erreur_read(reader, lecture);
    buffer[reader] = '\0';
    if (E_T == 1) {
        condition_f_E(buffer);
    } else if (E_T == 2) {
        condition_f_T(buffer);
    } else if (E_T == 3) {
        condition_f_T_E(buffer);
    }
    close(lecture);
    free(buffer);
    return (0);
}
