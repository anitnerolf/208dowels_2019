/*
** EPITECH PROJECT, 2020
** main
** File description:
** cpp
*/

#include "../include/Dowels.hpp"
#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
    Dowels d;

    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        print_usage();
    } else if (ac == 10) {
        if (check_arguments(av, ac) == 84) {
            std::cout << "Arguments must be integers!" << std::endl;
            return (84);
        } else
            return (d.check_sum(av, ac));
    } else {
        std::cout << "Wrong argument number!" << std::endl;
        return (84);
    }
    return (0);
}

int	check_arguments(char **av, int ac)
{
    int i = 1;

    for (i = 1; i < ac; i++) {
        if (check_if_number(av[i]) == 84)
            return (84);
    }
    return (0);
}

void    print_usage(void)
{
    std::cout << "USAGE\n\t./208dowels 00 01 02 03 04 05 06 07 08\n" << std::endl;
    std::cout << "DESCRIPTION\n\t0i\tsize of the observed class" << std::endl;
}

int	check_if_number(std::string str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] > 57 || str[i] < 48))
            return (84);
        i++;
    }
    return 0;
}
