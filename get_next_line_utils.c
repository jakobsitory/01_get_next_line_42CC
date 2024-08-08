/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:32:22 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 10:40:13 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * Calculates the length of a string.
 * 
 * @param str Pointer to the string whose length is to be calculated.
 * @return The length of the string, excluding the terminating null byte ('\0').
 */
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * Locates the first occurrence of a character in a string.
 * 
 * @param s Pointer to the string to be searched.
 * @param c The character to search for, represented as an int, but treated as a char.
 * @return A pointer to the matched character in the string, or NULL if the character is not found.
 *         If `c` is '\0', returns a pointer to the terminator of the string.
 */
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

/**
 * Copies a string into another, ensuring not to exceed the given size and always null-terminating.
 * 
 * @param dest Pointer to the destination string array where the content is to be copied.
 * @param src Pointer to the source string to be copied.
 * @param size The size of the destination buffer.
 * @return The total length of the string it tried to create, which means the length of `src`.
 */
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

/**
 * Appends a string to another, ensuring not to exceed the given size and always null-terminating.
 * 
 * @param dest Pointer to the destination string to which `src` is appended.
 * @param src Pointer to the source string to be appended to `dest`.
 * @param size The size of the destination buffer.
 * @return The total length of the string it tried to create, which is the initial length of `dest`
 *         plus the length of `src`.
 */
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

/**
 * Concatenates two strings into a new string, allocating memory for the new string.
 * 
 * @param s1 Pointer to the first source string.
 * @param s2 Pointer to the second source string.
 * @return A pointer to the newly created string that joins `s1` and `s2`, or NULL if the allocation fails.
 */
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
