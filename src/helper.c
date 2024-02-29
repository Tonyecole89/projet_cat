/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:58 +0100
 * 1st author:  tony.yam - tony.yam
 * description: helper
 */

#include <unistd.h>
#include "regroupe.h"

int helper(char **argv)
{
    char *help;
    int long_arg;

    long_arg = longueur_arg(argv, 0);
    write(1, "Usage: ", 7);
    write(1, argv[0], long_arg);
    help = " [OPTION]... [FILE]...\n"
        "Concatenate FILE(s) to standard output.\n"
        "With no FILE, or when FILE is -, read standard input.\n"
        "-E, --show-ends          display $ at end of each line\n"
        "-T, --show-tabs          display TAB characters as ^I\n"
        "    -help        display this help and exit\n";
    write(1, help, 270);
    return (0);
}
