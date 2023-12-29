/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:32:22 by jschott           #+#    #+#             */
/*   Updated: 2023/06/26 08:50:29 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen (src);
	i = 0;
	if ((int) size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			l_dest;
	size_t			l_src;

	l_dest = ft_strlen (dest);
	l_src = ft_strlen (src);
	j = 0;
	i = l_dest;
	if (size == 0 || size <= l_dest)
		return (size + l_src);
	while (src[j] != '\0' && j < size - l_dest - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l_dest + l_src);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*joinstr;
	long int	joinlen;

	joinlen = (ft_strlen(s1) + ft_strlen(s2));
	joinstr = (char *) malloc (joinlen + 1);
	if (!joinstr)
		return (NULL);
	ft_strlcpy(joinstr, s1, joinlen + 1);
	ft_strlcat(joinstr, s2, joinlen + 1);
	return (joinstr);
}
