/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookair <macbookair@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:27:40 by macbookair        #+#    #+#             */
/*   Updated: 2024/10/26 11:17:45 by macbookair       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void * ft_memcpy(void * dst, const void * src, size_t n)
{
    if(!dst || !src)
        return dst;
    
    unsigned char* destination;
    unsigned char* source;
    
    destination = (unsigned char*) dst;
    source = (unsigned char*) src;
    size_t i;
    i = 0;
    while(i < n)
    {
        destination[i] = source[i];
        i++;
    }
    
    return dst;
}





/*
Null Termination: The line destination[i] = 0; is not appropriate. memcpy does not add a null terminator after copying the bytes. This could corrupt data when copying non-string data. It is essential to copy exactly n bytes, as memcpy does not assume that the data is a string.
*/