/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:53:47 by carmen            #+#    #+#             */
/*   Updated: 2024/10/15 23:54:27 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{

    char *str = "Hello!";
    if (ft_isascii(str))
        printf("All characters are ASCII\n");
    else
        printf("Some characters are not ASCII\n");

    return 0;
    }
*/
