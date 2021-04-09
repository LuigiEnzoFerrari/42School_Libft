/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:08:31 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/09 13:43:45 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

char		*ft_xtoa(unsigned n)
{
	size_t	len;
	char	*str;

	len = ft_xnbrlen(n) + 1;
	str = (char *)malloc(sizeof(char) * len);
	ft_xnbrcpy(str, n);
	return (str);
}
