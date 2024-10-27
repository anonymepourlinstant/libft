/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:30:26 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/25 21:42:23 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <stdio.h> 

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    i = 0;
    char *ptr = (char *)b;
    while (i < len)
    {
        ptr[i] = (char)c;
        i++;
    }
    return b;
}