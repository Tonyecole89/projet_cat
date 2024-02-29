/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:55 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lecture_fichier
 */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "regroupe.h"

int lecture_fichier(char **argv, int compt)
{
    int lecture;
    char *buffer;
    int reader;

    reader = 1;
    buffer = malloc(sizeof (char) * 101);
    try_erreur_buffer(argv, buffer, compt);
    lecture = open(argv[compt], O_RDONLY);
    try_erreur_open(argv, lecture, compt);
    while (reader > 0) {
        reader = read(lecture, buffer, 100);
        try_erreur_read(reader, lecture);
        buffer[reader] = '\0';
        write(1, buffer, reader);
    }
    close(lecture);
    free(buffer);
    return (0);
}
