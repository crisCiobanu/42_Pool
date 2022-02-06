/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:03:48 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/24 08:36:23 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	destlength;
	unsigned int	i;

	length = 0;
	while (dest[length])
		length++;
	destlength = length;
	i = 0;
	if (destlength >= size || !size)
		return (size + ft_strlen(src));
	while (src[i] && i < size - destlength - 1)
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length] = '\0';
	return (destlength + ft_strlen(src));
}
