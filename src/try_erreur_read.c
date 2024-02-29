/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 23:01 +0100
 * 1st author:  tony.yam - tony.yam
 * description: try_erreur_read
 */

#include <unistd.h>
#include "regroupe.h"

int try_erreur_read(int read, int open)
{
    if (read == -1) {
        close(open);
        return (1);
    }
    return (0);
}
