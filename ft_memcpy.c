/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:46:26 by cchabeau          #+#    #+#             */
/*   Updated: 2022/10/25 12:35:09 by cchabeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (dst == NULL && src == NULL)
		return (0);
	str = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		str[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
