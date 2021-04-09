/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:46:09 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/09 13:39:39 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONV_H
#define FT_CONV_H
#include "../libft.h"

int		ft_tochar(int n);
int		ft_xtochar(unsigned n);
int		ft_utochar(unsigned n);

char	*ft_revitoa(char *str, long int num);
int		ft_atoi(const char *nptr);
char	*ft_xtoa(unsigned n);
char	*ft_itoa(int n);
char	*ft_ftoa(long double n, size_t len);
char	*ft_utoa(unsigned n);
char	*ft_iwtoa(int n, size_t w);

char	*ft_nbrcpy(char *dest, int n);
char	*ft_xnbrcpy(char *dest, unsigned n);
char	*ft_unbrcpy(char *dest, unsigned n);

#endif