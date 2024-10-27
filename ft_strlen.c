/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:20:35 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/25 15:58:28 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdio.h>
size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while(s[i] != 0)
    {
	i++;
    }
    return i;
}
/*
int main()
{
    char iman[]="iman";
    printf("%zu",ft_strlen(iman));
    
}
*/
