/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:21:47 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/15 17:07:09 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char * ft_strdup(const char *s1){
    char *d;
    int i;
    char *dest;

    i=0;

    d = (dest = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1));
    if(!d)
        return NULL;//
    while(s1[i]){
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}