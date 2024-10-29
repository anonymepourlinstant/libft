/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:30:26 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/28 23:58:40 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <stdio.h> 

void *ft_memset(void *b, int value, size_t len)
{
    size_t i;
    i = 0;
    unsigned char *ptr = (unsigned char *)b;
    while (i < len)
    {
        ptr[i] = (unsigned char)value;
        i++;
    }
    return (b);
}

int main()
{
    int iman[] = {0, 9, 7};
    ft_memset(iman,5,2);
    ft_memset(iman,57,1);
    printf("%d",iman[0]);
}
