/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:05:51 by lzipp             #+#    #+#             */
/*   Updated: 2024/02/25 17:04:16 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

# define BUFFER_SIZE 100
# define OPEN_MAX 10240

# define OPEN_FILE_ERROR "Could not open file"
# define CLOSE_FILE_ERROR "Could not close file"
# define READ_FILE_ERROR "Could not read from file"
# define WRITE_FILE_ERROR "Could not write to file"

int				ft_atoi(const char *str);
char			*ft_itoa(int n);
long long		ft_power(long long base, long long exponent);
int				ft_dec_len(long long n);
int				ft_hex_len(unsigned long long n);

void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
void			*ft_recalloc(void *ptr, size_t len, size_t data_size);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);

void			ft_safe_free(void **ptr);
void			ft_free_2d_arr(void **arr);
void			ft_free_3d_arr(void ***arr);
void			ft_free_4d_arr(void ****arr);

int				ft_null_terminated_arr_len(void **arr);

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);

int				ft_tolower(int c);
int				ft_toupper(int c);
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
char			*ft_join_in_place(char *s1, const char *s2);
unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strrncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_trim_in_place(char const *s1, char const *set);

char			*get_next_line(int fd);

int				ft_printf(const char *str, ...);
int				ft_printfn(const char *str, ...);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
