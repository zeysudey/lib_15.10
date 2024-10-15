/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:07:27 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/15 12:52:14 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void * ft_memset(void *b, int c, size_t len){
    int i;

    i=0;
    
    while (i < len)
    {
        *((unsigned char *)b + i) = (unsigned char)c;
        i++;
    }
    return (b);// void * olduğu için return değeri olabilir.
}
