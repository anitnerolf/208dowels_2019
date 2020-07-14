/*
** EPITECH PROJECT, 2020
** demography
** File description:
** header file
*/

#ifndef DOWELS_HPP_
#define DOWELS_HPP_

#include <string>

class Dowels {
public:
    Dowels();
    ~Dowels();
    int	check_sum(char **, int);
    int	sum_up(int , int , int);
private:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    int x6;
    int x7;
    int x8;
};

void	print_usage(void);
int	check_arguments(char **, int);
int	check_if_number(std::string);

#endif /* DOWELS_HPP_ */
