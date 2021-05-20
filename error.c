/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:43:47 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/20 16:22:44 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Here is where the errors are found and handled.
*/

#include "push_swap.h"

int check_str_int_limits(char *str)
{
    int i;
    int j;
    char max_int[10] = "2147483647";

    i = (str[0] == '-');
    j = 0;
    while (str[i])
    {
        if (str[i] > max_int[j] + (j == 9 && str[0] == '-'))
            return (2);
        i++;
        j++;
    }
    return (0);
}

int arg_error(int ac, char **av)
{
    int i;
    int j;
    int len;

    j = 0;
    while (av[++j])
    {
        len = ft_strlen(av[j]);
        if (len > 11 || (len > 10 && av[j][0] != '-'))
            return (2);
        i  = (av[j][0] == '-') - 1;
        while (av[j][++i])
            if (!ft_isdigit(av[j][i]))
                return (2);
        if ((len == 10 && av[j][0] != '-') || len == 11)
            return (check_str_int_limits(av[j]));
    }
    return (0);
}