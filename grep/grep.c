/*
** EPITECH PROJECT, 2022
** task03 grep
** File description:
** This will search in files for specific words
*/

#include "my.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void display_line(char const ** arr, int y)
{
    my_putstr(arr[y]);
    my_putchar('\n');
}

void find_in_line(char const **arr, int y, char const *needle, int i)
{
    unsigned int j = 0;

    while (arr[y][i] != '\0' && needle[j] != '\0') {
        if (arr[y][i] != needle[j]) {
            return;
        }
        i++;
        j++;
    }
    display_line(arr, y);
}

void find_in_file(char * needle, char * str)
{
    int y = 0;
    char const ** arr_of_lines = my_strtok(str, '\n');

    while (arr_of_lines[y] != NULL) {
        for (int i = 0; i < my_strlen(arr_of_lines[y]); i++) {
            find_in_line(arr_of_lines, y, needle, i);
        }
        y++;
    }
}

void read_files(int argc, char * argv[])
{
    int temp_file;
    int read_file;
    char str[30001];
    char *needle = argv[1];

    for (int i = 2; i < argc; i++) {
        temp_file = open(argv[i], O_RDONLY);
        if (temp_file < 0) {
            my_putstr("Error file could not be opened\n");
            continue;
        }
        for (int j = 0; j <= 30001; j++)
            str[j] = 0;
        read_file = read(temp_file, str, 30000);
        while (read_file != 0) {
            find_in_file(needle, str);
            read_file = read(temp_file, str, 30000);
        }
        close(temp_file);
    }
}

void grep(int argc, char * argv [])
{
    if (argc < 2)
        return;
    read_files(argc, argv);
}
