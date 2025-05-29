/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** include_lib
*/

#ifndef my
#define my

    int my_print_alpha(void);
    int my_print_revalpha(void);
    int my_print_digits(void);
    int my_print_comb(void);
    int my_print_comb2(void);
    int my_put_nbr(int nb);
    int my_power(int nbr, int pow);
    int my_print_combn(int n);
    int my_swap(int *a, int *b);
    void my_putstr(char const *str);
    int my_strlen(char const *str);
    char *my_evil_str(char *str);
    void my_swap_char(char *a, char *b);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *array, int size);
    int my_compute_factorial_it(int nb);
    int my_compute_factorial_rec(int nb);
    int my_compute_power_it(int nb, int p);
    int my_compute_power_rec(int nb, int p);
    int my_compute_square_root(int nb);
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
    void my_putchar(char c);

#endif /* !my */
