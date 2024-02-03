/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:26:57 by lzipp             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/10/11 11:22:20 by lzipp            ###   ########.fr       */
=======
/*   Updated: 2024/02/03 13:20:35 by lzipp            ###   ########.fr       */
>>>>>>> aaf5e28fb79653d8b64bc1cab09598b8b4edd67c
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
<<<<<<< HEAD

int				ft_atoi(const char *str);

void			ft_bzero(void *s, size_t n);

void			*ft_calloc(size_t count, size_t size);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

char			*ft_itoa(int n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memcpy(void *dst, const void *src, size_t n);

void			*ft_memmove(void *dst, const void *src, size_t len);

void			*ft_memset(void *b, int c, size_t len);

void			ft_putchar_fd(char c, int fd);

void			ft_putendl_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

void			ft_putstr_fd(char const *s, int fd);

char			**ft_split(char const *s, char c);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strdup(const char *s1);

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strjoin(char const *s1, char const *s2);

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize);

unsigned int	ft_strlcpy(char *dest, char *src, size_t size);

size_t			ft_strlen(const char *s);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);

char			*ft_strtrim(char const *s1, char const *set);

int				ft_tolower(int c);

int				ft_toupper(int c);

=======
# include <limits.h>
# include <stdarg.h>

int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
void			*ft_recalloc(void *ptr, size_t len, size_t data_size);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_null_terminated_arr_len(void **arr);

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

void			ft_putchar_fd(char c, int fd);
int				ft_putchar_int(const char c);
int				ft_putstr_int(const char *s);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char const *s, int fd);
int				ft_putnbr_int(int n, int len);
int				ft_putu_int(unsigned int n, int len);
int				ft_puthex_big_int(unsigned int n, int len);
int				ft_puthex_small_int(unsigned int n, int len);
int				ft_putpointer_int(unsigned long n, int len);

char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strdup(const char *s1);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strrncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
char			*ft_strtrim(char const *s1, char const *set);

>>>>>>> aaf5e28fb79653d8b64bc1cab09598b8b4edd67c
// bonus part 2

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void			ft_lstadd_front(t_list **lst, t_list *new);
<<<<<<< HEAD

t_list			*ft_lstlast(t_list *lst);

void			ft_lstclear(t_list **lst, void (*del)(void*));

void			ft_lstadd_back(t_list **lst, t_list *new);

void			ft_lstdelone(t_list *lst, void (*del)(void *));

void			ft_lstiter(t_list *lst, void (*f)(void *));

t_list			*ft_lstnew(void *content);

int				ft_lstsize(t_list *lst);

=======
t_list			*ft_lstlast(t_list *lst);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));

t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
>>>>>>> aaf5e28fb79653d8b64bc1cab09598b8b4edd67c
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
