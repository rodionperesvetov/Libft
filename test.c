/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:39:29 by rperesve          #+#    #+#             */
/*   Updated: 2025/10/30 14:23:36 by rperesve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	//atoi

	char	*number = " 	 -1725nwf23745";
	printf("%d\n", ft_atoi(number));
	printf("%d\n", atoi(number));

	//isalnum

	int	a;
	int	b;
	int	c;

	a = 'a';
	b = '1';
	c = '-';
	printf("%i\n%i\n%i\n", ft_isalnum(a), ft_isalnum(b), ft_isalnum(c));

	//isalpha

	int	a;
	int	b;
	int	c;

	a = 'd';
	b = ']';
	c = 'O';
	printf("%i\n%i\n%i\n", ft_isalpha(a), ft_isalpha(b), ft_isalpha(c));

	//isascii

	int	a;
	int	b;
	int	c;

	a = '/t';
	b = '&';
	c = '/0';
	printf("%i\n%i\n%i\n", ft_isascii(a), ft_isascii(b), ft_isascii(c));

	//isdigit

	int	a;
	int	b;
	int	c;

	a = 'a';
	b = '4';
	c = '-';
	printf("%i\n%i\n%i\n", ft_isdigit(a), ft_isdigit(b), ft_isdigit(c));

	//isprint

	int	a;
	int	b;
	int	c;

	a = '/n';
	b = '1';
	c = ' ';
	printf("%i\n%i\n%i\n", ft_isprint(a), ft_isprint(b), ft_isprint(c));

	//strlen

	char	*text;

	text[50] = "I love dogs";
	printf("%d", ft_strlen(text));

	//strncmp

	char	*first;
	char	*second;

	first[5] = "ABCd";
	second[5] = "ABCD";
	printf("%d\n", ft_strncmp(first, second, 4));
	printf("%d\n", strncmp(first, second, 4));

	//strlcpy

	char	*src;
	char	*dest;

	src[18] = "Caro-Kann defense";
	dest[27] = "Magnus Carlsen is the GOAT";
	ft_strlcpy(dest, src, 18);
	printf("src = %s, dest = %s", src, dest);
	return (0);

	//strlcat

	char	*dest;
	char	*src;

	dest[6] = "First";
	src[7] = "Second";
	printf("%i\n", ft_strlcat(dest, src, 6));
	printf("%s\n", dest);

	//memset

	char	*str;

	str[24] = "Read the fucking manual";
	printf("\nBefore memset(): %s\n", str);
	ft_memset(str + 9, '#', 4 * sizeof(char));
	printf("PC version:  %s", str);
	return (0);

	//bzero

	char	str[24] = "Read the fucking manual";

	printf("\nBefore bzero(): %s\n", str);
	ft_bzero(str + 9, 8 * sizeof(char));
	printf("PC version:  %s", str);
	return (0);

	//memcpy

	char	src[18] = "Caro-Kann defense";
	char	dest[27] = "Magnus Carlsen is the GOAT";

	ft_memcpy(dest, src, 18);
	printf("src = %s, dest = %s", src, dest);
	return (0);

	//memmove

	char str[100] = "SkibidiToilet";
	char *first, *second;

	first = str;
	second = str;
	printf("Original string :%s\n ", str);

	memcpy(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str);

	ft_memmove(second + 8, first, 10);
	printf("ft_memmove overlap : %s\n ", str);

	memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);

	return (0);

	//memchr

	char	str[50] = "There is letter e here\n";

	printf("%p\n", memchr(str, '\n', 23));
	printf("%p\n", ft_memchr(str, '\n', 23));

	//memcmp

	char	first[6] = "ABCZ";
	char	second[6] = "ABCs";

	printf("%d\n", ft_memcmp(first, second, 5));
	printf("%d\n", memcmp(first, second, 5));

	//toupper

	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('\n'));
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('A'));
	printf("%c\n", toupper('\n'));

	//tolower

	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('\n'));
	printf("%c\n", tolower('a'));
	printf("%c\n", tolower('A'));
	printf("%c\n", tolower('\n'));

	//strchr

	printf("%s\n", strchr("Here we go again", 'g'));
	printf("%s\n", ft_strchr("Here we go again", 'g'));

	//strrchr

	printf("%s\n", strrchr("Here we go again", 'e'));
	printf("%s\n", ft_strrchr("Here we go again", 'e'));

	//strnstr

	printf("%s\n", strnstr("May the Force be with you", "Force", 12));
	printf("%s\n", ft_strnstr("May the Force be with you", "Force", 12));

	//calloc

	char	*clc;
	int		i;
	int		j;

	i = 0;
	clc = (char *)calloc(1, 1);
	while (i < 2)
	{
		printf("The address is %p. And the value is %c\n", calloc(1, 1), clc[i]);
		i++;
	}
	j = 0;
	printf("%s", "LoL\n");
	while (j < 2)
	{
		printf("The address is %p. And the value is %c\n", ft_calloc(1, 1), clc[j]);
		j++;
	}
	free(a);
	return (0);

	//strdup

	printf("%s\n", strdup("live"));
	printf("%s\n", ft_strdup("love"));

	//substr

	char const source[] = "Hel!";
	char *ptr = ft_substr(source, 6, 3);
	printf("%s\n", (char *)ptr);

	free(ptr);
	return (EXIT_SUCCESS);

	//strjoin

	char	str1[] = "";
	char	str2[] = "World!";
	char	*s = ft_strjoin(str1, str2);

	printf("%s\n", s);
	free(s);
}
