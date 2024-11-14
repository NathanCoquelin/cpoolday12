/*
** EPITECH PROJECT, 2022
** task01 cat
** File description:
** This will read files and display them
*/

#include <unistd.h>
#include <fcntl.h>
#include "my.h"

void cat(int argc, char *argv[])
{
    int temp_file;
    int read_file;
    int size = 29999;
    char *str[size + 1];

    for (int i = 1; i < argc; i++) {
        temp_file = open(argv[i], O_RDONLY);
        if (temp_file < 0) {
            my_putstr("Error file could not be opened\n");
            continue;
        }
        for (int j = 0; j < 30000; j++)
            str[j] = 0;
        read_file = read(temp_file, str, size);
        while (read_file != 0) {
            my_putstr(str);
            read_file = read(temp_file, str, size);
        }
        close(temp_file);
    }
}
