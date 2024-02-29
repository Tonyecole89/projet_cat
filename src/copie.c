/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:41 +0100
 * 1st author:  tony.yam - tony.yam
 * description: copie
 */

#include <stdlib.h>
#include <unistd.h>
#include "regroupe.h"

int copie(int argc)
{
    int reader;
    char *buffer;

    reader = -1;
    buffer = malloc(sizeof (char) * 100);
    try_erreur_buffer_exept_compt(buffer);
    while (reader != 0) {
        if (argc >= 1) {
            reader = read(0, buffer, 100);
            try_erreur_read_exept_lecture(reader);
            write(1, buffer, reader);
        } else {
            return (1);
        }
    }
    free(buffer);
    return (0);
}
