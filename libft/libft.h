/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiri <abiri@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:38:53 by abiri             #+#    #+#             */
/*   Updated: 2018/11/07 19:23:10 by abiri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strncat(char *s1, const char *s2, size_t n);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_putstr(char const *s);
void				ft_putendl(const char *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr(int nb);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
char				*ft_itoa(int n);
int					ft_putchar(int c);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void				ft_startc(int colorcode);
void				ft_endc(void);
int					ft_pow(int num, int power);
int					ft_count_if(char **tab, int (*f)(char*));
int					ft_sqrt(int nb);
void				ft_intsort(int *tab, int size);
void				ft_strsort(char **tab, int wordcount);
int					ft_charreplace(char *str, char from, char to);
int					ft_putnbr_base(long nbr, char *base);

int					ft_strzero(char *str);
int					ft_wcharlen(int unicode);
int					ft_wstrlen(int *str);
int					ft_wstrlen_min(int *str, int min);
void				ft_putwchar(int unicode);
int					ft_putstrf(char *str);
#endif
