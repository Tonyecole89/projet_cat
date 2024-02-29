/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:30 +0100
 * 1st author:  tony.yam - tony.yam
 * description: copie_E
 */

#include <stdlib.h>
#include <unistd.h>
#include "regroupe.h"

int copie_E(int argc)
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
            while (buffer[compteur] != '\n') {
                compteur = compteur + 1;
            }
            if (reader > 1) {
                buffer[compteur] = '$';
                write(1, buffer, reader);
                write(1, "\n", 1);
            }
        }
    }
    free(buffer);
    return (0);
}
