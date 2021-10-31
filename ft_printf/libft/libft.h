/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:59:47 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 20:30:39 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

size_t			ft_strlen(char *str);
int				ft_arraybilen(char **array);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_strncmp(char *s1, char *s2, size_t n);
int				ft_atoi(char *str);
int				ft_isalpha(int str);
int				ft_isprint(int str);
int				ft_isdigit(int str);
int				ft_isalnum(int str);
int				ft_toupper(int str);
int				ft_tolower(int str);
char			*ft_str_tolower(char	*str);
void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *destination, const void *source, size_t num);
void			*ft_memccpy(void *dest, const void *src, int c, size_t cnt);
void			*ft_memchr(void *buf, int ch, size_t length);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
char			*ft_strchr(const char *str, int character);
char			*ft_strrchr(const char *str, int c);
int				ft_strcmp(const char *s1, const char *s2);
void			*ft_memmove(void *destination, const void *source, size_t num);
int				ft_isascii(int c);
void			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(const char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_chrjoin(char const *s1, char chr);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			**ft_split_comma(char *s, char c);
char			*ft_itoa(int n);
char			*ft_itoa_unsint(unsigned int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_putstr(char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_freetab(char **arraybi);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
