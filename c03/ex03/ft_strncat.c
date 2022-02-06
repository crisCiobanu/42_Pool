/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:48:50 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/20 11:53:23 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length;
	unsigned int	i;

	i = 0;
	length = 0;
	while (dest[length])
	{
		length++;
	}
	while (src[i] && i < nb)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
