/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:23:34 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/28 19:13:52 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *str = (char *)needle;
    if(str == NULL)
        return (char *)haystack;
    
    size_t i;
    i =strchr(haystack, str[0])- haystack;
    
    while(i < len && haystack[i] != 0)
    {
        if((strncmp(haystack, str, strlen(str))) == 0)
        {
            return strchr(haystack, str[0]);
        }
        i++;
        haystack++;
    }
    return NULL;
}

int main()
{
    char imaniqor[] = "imaniqor";
    char iqor[] = "man";
    printf("%s",ft_strnstr(imaniqor, iqor, 5));
}


//imaniqor