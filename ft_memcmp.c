/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:31:46 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/25 22:46:54 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1 = (unsigned char *) s1;
    unsigned char *str2 = (unsigned char *) s2;
    size_t i;
 
   
    
    i = 0;
    
    while (i < n)
    {
       
        if ( str1[i] !=  str2[i])
            
            return ( str1[i] -  str2[i]);

        i++;
    }
    
    return (0);
}
int main()
{
    char iman[] = "iman";
    char iqor[] = "iqor";
    printf("%d \n",ft_memcmp(iman,iqor,4));
    printf("%d\n", memcmp(iman,iqor,4));
}