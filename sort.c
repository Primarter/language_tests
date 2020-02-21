/*
** EPITECH PROJECT, 2019
** language_tests
** File description:
** sort.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int test(char c)
{
    if (c >= 'a' && c <= 'z')
        return (0);
    if (c >= 'A' && c <= 'Z')
        return (0);
    if (c == '_')
        return (0);
    return (1);
}

int alphanum_test(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] > '9' || str[i] < '0')
            return (1);
    return (0);
}

void remove_value(int val, int *tab, int *size)
{
    int *new = malloc((*size - 1) * sizeof(int));
    int i = 0;
    int tmp = 0;

    for (; tab[i] != val; i++);
    tab[i] = tab[*size - 1];
    *size -= 1;
}

int main(int argc, char const *argv[])
{
    int *unsorted_tab = malloc((argc - 1) * sizeof(int));
    int size_unsort = argc - 1;
    int tmp = 0;

    printf("Unsorted list:\n");
    for (int i = 1; argv[i]; i++) {
        if (alphanum_test(argv[i])) {
            write(2, "Invalid arguments\n", 18);
            return (84);
        }
        unsorted_tab[i - 1] = atoi(argv[i]);
        printf("%d ", unsorted_tab[i - 1]);
    }
    printf("\nSorted list:\n");
    while (size_unsort > 0) {
        tmp = unsorted_tab[0];
        for (int i = 1; i < size_unsort; i++) {
            if (tmp > unsorted_tab[i])
                tmp = unsorted_tab[i];
        }
        printf("%d ", tmp);
        remove_value(tmp, unsorted_tab, &size_unsort);
    }
    printf("\n");
    return 0;
}
