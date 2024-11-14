/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** this will have all the prototypes of all the scripts in libmy.a
*/

#ifndef MY_H
    #define MY_H

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int root(int guess, int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_isalpha(char c);
int find_prime_rec(int nb);
int test_is_low(char c);
void frec(int i);
int found_whole(int x, int n);
int prec(int test_value, int b);
int test_is_upper(char c);
int get_min_len(char const *a, char const *b);
void bubble_sort2(int *array, int n, int i);
int is_ascii(char c);
int is_root(int guess, int b);
int is_alpha(char c);
int test_is_char(char c);
int test_is_num(char c);
int evaluate_equal(char const *str, char const *to_find);
int compute_char(char c, int number);
void my_swap_char(char *a, char *b);
char *my_charupcase(char *str);
int evaluate_diff_char(char const a, char const b);
int evaluate_diff_char_placing(char const a, char const b);
int check_is_neg2(int n);
int power_is_satisfy2(int n);
int powrec(int last_n, int p, int is_neg);
int test_if_overflow2(int neg, int p, int last_res, int next_res);
int get_tot_num_of_words(const char *str);
int jump_all_non_alpha(char const *str, int d);
char **my_str_to_word_array(char const *str);
char *concat_params(int argc, char **argv);
int get_total_len(int argc, char **argv);
char *my_strdup(char const *src);
int my_show_word_array(char * const * tab);
void swap(int *a, int *b);
char *my_strlowcase(char *str);


#endif
