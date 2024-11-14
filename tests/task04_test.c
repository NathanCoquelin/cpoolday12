/*
** EPITECH PROJECT, 2022
** Testing task03
** File description:
** This is a unit test to test task03
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void display_line(char const ** arr, int y);
void find_in_line(char const ** arr, int y, char const * needle, int i);
void find_in_file(char * needle, char * str);
void grep(int argc, char * argv []);

char const *test[] = {"hello", "world"};

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
}

Test(day_12, task03_1, .init=redirect_all_stdout)
{
    display_line(test, 0);
    cr_assert_stdout_eq_str("hello\n");
}

Test(day_12, task03_2, .init=redirect_all_stdout)
{
    find_in_line(test, 0, "o", 4);
    cr_assert_stdout_eq_str("hello\n");
}

Test(day_12, task03_3, .init=redirect_all_stdout)
{
    char const *command [] = {"./a.out", "main", "main.c"};
    grep(3, command);
    cr_assert_stdout_eq_str("** task03 main\n** This is the main file from which the grep function is called\nint main(int argc, char * argv[])\n");
}
