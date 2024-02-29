/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 21:16 +0100
 * 1st author:  tony.yam - tony.yam
 * description: regroupe.h
 */

#ifndef REGROUPE_H_
#define REGROUPE_H_

int main(int argc, char **argv);
int cat(int argc, char **argv);
int print_all(int argc, char **argv, int E_T);
int print_all_condition(int argc, char **argv, int E_T, int compt);
int verification_exe(int argc);
int verification_carac(int argc, char **argv);
int verif_carac_T_E(char **argv, int compt);
int fichier_E_T(char **argv, int compt, int E_T);
int condition_f_T_E(char *buffer);
int condition_f_T(char *buffer);
int condition_f_E(char *buffer);
int copie_E(int argc);
int copie(int argc);
int lecture_fichier(char **argv, int compt);
int helper(char **argv);
int try_erreur_read_exept_lecture(int read);
int try_erreur_read(int read, int open);
int try_erreur_buffer_exept_compt(char *buffer);
int try_erreur_buffer(char **argv, char *buffer, int compt);
int try_erreur_open(char **argv, int test_open, int compt);
int debug_erreur_exept_compt();
int debug_erreur(char **argv, int compt);
int have_a_erreur(int number);
int longueur_arg_erreur(char *erreur);
int longueur_arg(char **argv, int index);

#endif
