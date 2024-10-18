/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:18:11 by zyilmaz           #+#    #+#             */
/*   Updated: 2024/10/15 17:48:54 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set){
    char	*result;
	int		start;
	int		end;
	int		i;
	int		j;

	if (!s1 || !set)
		return NULL;

	start = 0;
	end = ft_strlen(s1) - 1;

	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;

	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return NULL;

	i = start;
	j = 0;
	while (i <= end)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = '\0';

	return (result);
}