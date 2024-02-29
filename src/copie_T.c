/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-13 - 16:41 +0100
 * 1st author:  tony.yam - tony.yam
 * description: copie_T
 */

#include <stdlib.h>
#include <unistd.h>
#include "regroupe.h"

int copie_T(int argc)
{
    int reader;
    char *buffer;
    int compteur;

    reader = -1;
    compteur = 0;
    buffer = malloc(sizeof (char) * 100);
    try_erreur_buffer_exept_compt(buffer);
    while (reader != 0) {
        compteur = 0;
        if (argc >= 1) {
            reader = read(0, buffer, 100);
            try_erreur_read_exept_lecture(reader);
            while (buffer[compteur] != '\t') {
                compteur = compteur + 1;
            }
            if (reader > 1) {
                write(1, "^", 1);
                buffer[compteur] = 'I';
                write(1, buffer, reader);
            }
        }
    }
    free(buffer);
    return (0);
}
