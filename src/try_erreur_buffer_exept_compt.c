/*
 * E89 Pedagogical & Technical Lab
 * project:     projet 1
 * created on:  2023-12-12 - 23:01 +0100
 * 1st author:  tony.yam - tony.yam
 * description: try_erreur_buffer_exept_compt
 */

#include "regroupe.h"

int try_erreur_buffer_exept_compt(char *buffer)
{
    if (!buffer) {
        debug_erreur_exept_compt();
        return (1);
    }
    return (0);
}
