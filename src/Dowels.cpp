/*
** EPITECH PROJECT, 2020
** 208dowels
** File description:
** Dowels
*/

#include "../include/Dowels.hpp"
#include <iostream>
#include <cstring>

Dowels::Dowels()
{
}

Dowels::~Dowels()
{
}

int	Dowels::sum_up(int i, int j, int k)
{
    int x = 0;

    if (i >= 10) {
        x = i;
    } else if ((i + j) >= 10) {
        x = i + j;
    } else {
        x = i + j + k;
    }
    return x;
}

int	Dowels::check_sum(char **av, int ac)
{
    int sum = 0;

    for (int j = 1; j < ac; j++) {
        sum = sum + atoi(av[j]);
    }
    if (sum != 100) {
        std::cout << "Error: Sum of arguments must be equal to 100" << std::endl;
        return 84;
    } else {
        this->a = atoi(av[1]);
        this->b = atoi(av[2]);
        this->c = atoi(av[3]);
        this->d = atoi(av[4]);
        this->e = atoi(av[5]);
        this->f = atoi(av[6]);
        this->g = atoi(av[7]);
        this->h = atoi(av[8]);
        this->i = atoi(av[9]);
        this->x1 = 0;
        this->x2 = 0;
        this->x3 = 0;
        this->x4 = 0;
        this->x5 = 0;
        this->x6 = 0;
        this->x7 = 0;
//        this->x8 = 0;
        // for (int i = ac; i < ac; i++) {
        //     if (atoi(av[1]) >= 10) {
        //         if (atoi(av[2]) >= 10) {
                    
        //         } else if ((atoi(av[2]) + atoi(av[3])) > ato
        //     }
        // }

        ///
        // if (this->a >= 10) {
        //     if (this->b < 10) {
        //         if ((this->a + this->b) < (this->b + this->c)) {
        //             this->x1 = this->a + this->b;
        //         } else {
        //             this->x1 = this->b + this->c;
        //         }
        //     } else {
        //         this->x1 = this->a;
        //     }
        // } else {
        //     if ((this->a + this->b) >= 10) {
        //         this->x1 = this->a + this->b;
        //     } else {
        //         this->x1 = this->a + this->b + this->c;
        //     }
        // }

        // if (this->b >= 10) {
        //     if (this->c < 10) {
        //         if ((this->b + this->c) < (this->c + this->d)) {
        //             this->x2 = this->b + this->c;
        //         } else {
        //             this->x2 = this->c + this->d;
        //         }
        //     } else {
        //         this->x2 = this->b;
        //     }
        // } else {
        //     if ((this->b + this->c) >= 10) {
        //         this->x2 = this->b + this->c;
        //     } else {
        //         this->x2 = this->b + this->c + this->d;
        //     }
        // }

        
        // if (this->c >= 10) {
        //     if (this->d < 10) {
        //         if ((this->c + this->d) < (this->d + this->e)) {
        //             this->x3 = this->c + this->d;
        //         } else {
        //             this->x3 = this->d + this->e;
        //         }
        //     } else {
        //         this->x3 = this->c;
        //     }
        // } else {
        //     if ((this->c + this->d) >= 10) {
        //         this->x3 = this->c + this->d;
        //     } else {
        //         this->x3 = this->c + this->d + this->e;
        //     }
        // }


        // if (this->d >= 10) {
        //     if (this->e < 10) {
        //         if ((this->d + this->e) < (this->e + this->f)) {
        //             this->x4 = this->d + this->e;
        //         } else {
        //             this->x4 = this->e + this->f;
        //         }
        //     } else {
        //         this->x4 = this->d;
        //     }
        // } else {
        //     if ((this->d + this->e) >= 10) {
        //         this->x4 = this->d + this->e;
        //     } else {
        //         this->x4 = this->d + this->e + this->f;
        //     }
        // }

        
        // if (this->e >= 10) {
        //     if (this->f < 10) {
        //         if ((this->e + this->f) < (this->f + this->g)) {
        //             this->x5 = this->e + this->f;
        //         } else {
        //             this->x5 = this->f + this->g;
        //         }
        //     } else {
        //         this->x5 = this->e;
        //     }
        // } else {
        //     if ((this->e + this->f) >= 10) {
        //         this->x5 = this->e + this->f;
        //     } else {
        //         this->x5 = this->e + this->f + this->g;
        //     }
        // }


        // if (this->f >= 10) {
        //     if (this->g < 10) {
        //         if ((this->f + this->g) < (this->g + this->h)) {
        //             this->x6 = this->f + this->g;
        //         } else {
        //             this->x6 = this->g + this->h;
        //         }
        //     } else {
        //         this->x6 = this->f;
        //     }
        // } else {
        //     if ((this->f + this->g) >= 10) {
        //         this->x6 = this->f + this->g;
        //     } else {
        //         this->x6 = this->f + this->g + this->h;
        //     }
        // }

        // if (this->g >= 10) {
        //     if (this->h < 10) {
        //         if ((this->g + this->h) < (this->h + this->i)) {
        //             this->x7 = this->g + this->h;
        //         } else {
        //             this->x7 = this->h + this->i;
        //         }
        //     } else {
        //         this->x7 = this->g;
        //     }
        // } else {
        //     if ((this->g + this->h) >= 10) {
        //         this->x7 = this->g + this->h;
        //     } else {
        //         this->x7 = this->g + this->h + this->i;
        //     }
        // }

        // std::cout << this->x1 << std::endl;
        // std::cout << this->x2 << std::endl;
        // std::cout << this->x3 << std::endl;
        // std::cout << this->x4 << std::endl;
        // std::cout << this->x5 << std::endl;
        // std::cout << this->x6 << std::endl;
        // std::cout << this->x7 << std::endl;


//             this->x1 = this->a;
//             if (this->b >= 10) {
//                 this->x2 = this->b;
//                 if (this->c >= 10) {
//                     this->x3 = this->c
//                 }
//             } else if ((this->b + this->c) >= 10) {
//                 this->x2 = this->b + this->c;
//             } else {
//                 this->x2 = this->b + this->c + this->d;
//             }
// //            std::cout << this->x1 << std::endl;
//         } else if ((this->a + this->b) >= 10) {
//             std::cout << (this->a + this->b) << std::endl;
//         } else {
//             std::cout << (this->a + this->b + this->c) << std::endl;
//         }
    }
    return 0;
}
