/*
** EPITECH PROJECT, 2022
** task02 Testing task01
** File description:
** This is a unit test to test task01
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void cat(int argc, char *argv[]);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
}

Test(day_12, task01, .init=redirect_all_stdout)
{
    char *test_files[] = {"./cat", "test.txt", NULL};
    cat(2, test_files);
    cr_assert_stdout_eq_str("Hello world!\n");
}
