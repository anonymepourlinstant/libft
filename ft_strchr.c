/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:20:33 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/28 22:22:21 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *  ft_strchr(const char *s, int c)
{
    int i = 0;
    while(s[i] != 0)
    {
        if(s[i] == c)
        {
            return (char *) &s[i];
        }
        i++;
    }
    return NULL;
}
/*
int main()
{
    char iman[] = "iman";
    char *ptr = 0;
    int *a = NULL;
    void *b = NULL;
    printf("%zu\n%zu\n%zu\n",sizeof(ptr),sizeof(a),sizeof(b));
    
    printf("%s",ft_strchr(iman,'m'));
    
}
*/