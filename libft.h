/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njennes <njennes@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:34:44 by njennes           #+#    #+#             */
/*   Updated: 2022/07/12 17:15:20 by njennes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

# define FALSE 0
# define FT_FALSE 0
# define TRUE 1
# define FT_TRUE 1

# include <inttypes.h>
# ifdef __linux__
#  include <stdint.h>
#  define OPEN_MAX 1024
# endif

# define BUFFER_SIZE 1024

# define PI 3.141592653589793
# define TWO_PI 6.2831853071796
# define HALF_PI 1.5707963267949
# define PI_3_4 2.3561944901923
# define PI_5_4 3.9269908169872
# define PI_7_4 5.4977871437821
# define PI_3_2 4.7123889803847

# define FT_ANY 0
# define FT_EACH 1
# define FT_UNIQUE 2
# define FT_GROUPS 3

# define FREE_NONE 0
# define FREE_FIRST 1
# define FREE_SECOND 2
# define FREE_BOTH 	3

# define GC_GET 1
# define GC_SET_CALLBACK 2
# define GC_SET_CALLBACK_PARAM 3

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_StringV
{
	char	*chars;
	int		size;
}			t_StringV;

typedef struct s_vec2
{
	double	x;
	double	y;
}			t_vec2;

typedef struct s_ivec2
{
	int64_t	x;
	int64_t	y;
}			t_ivec2;

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}			t_vec3;

typedef struct s_ivec3
{
	int64_t	x;
	int64_t	y;
	int64_t	z;
}			t_ivec3;

typedef struct s_vec4
{
	double	x;
	double	y;
	double	z;
	double	w;
}			t_vec4;

typedef struct s_mat4
{
	float	m[4][4];
}			t_mat4;

typedef struct s_proj
{
	double	right;
	double	left;
	double	top;
	double	bot;
	double	far;
	double	near;
	double	aspect;
}			t_proj;

typedef struct s_darray
{
	void	*items;
	size_t	item_size;
	size_t	capacity;
	size_t	size;
}			t_darray;

//Character Testing
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_valid_args(size_t argc, char **argv, char *format);
int			ft_strisalpha(char *str);
int			ft_strisdigit(char *str);

//C style Strings Manipulation
char		*ft_strskip_digit(char *str);
char		*ft_strskip_alpha(char *str);
char		*ft_strskip_space(char *str);
char		*ft_strskip_alnum(char *str);
int			ft_end_with(char *str, char *end);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_triml(char *str);
char		*ft_trimr(char *str);
char		*ft_trim(char *str);
int			ft_atoi(const char *str);
long		ft_atol_base(char *str, char *base);
long		ft_atol(const char *str);
char		*ft_strdup(const char *s1);
char		*ft_strappend(char *str, char c);
char		*ft_strchr(const char *s, int c);
int			ft_strichr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strjoin(char *s1, char *s2, int to_free);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrnstr(const char *haystack, const char *needle, size_t len);
char		**ft_split(char const *s, char c);
int			ft_split_size(char **t);
void		ft_split_free(char **t);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_str_count(char *str, char c, int mode);
size_t		ft_word_size(char *str);
int			ft_nbrlen(long nb);

//Stringview
t_StringV	sv_create(const char *str);
t_StringV	sv_copy(t_StringV other);
void		sv_delete(t_StringV stringV);

//Basic IO
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(char *s, int fd);
int			ft_putstr(char *s);
int			ft_putendl_fd(char *s, int fd);
int			ft_putnbr(long n);
int			ft_putnbr_fd(long n, int fd);
int			ft_putnbr_base_fd(size_t nbr, char *base, int fd);
char		*ft_get_next_line(int fd);
int			ft_printf(const char *str, ...);
int			ft_dprintf(int fd, const char *format, ...);
void		ft_print_vec2(t_vec2 v);
void		ft_print_ivec2(t_ivec2 v);
void		ft_print_vec3(t_vec3 v);
void		ft_print_vec4(t_vec4 v);

//Standard
void		ft_error_exit(char *message);
char		ft_randc(void);
uint32_t	ft_randi(uint32_t min, uint32_t max);

//Memory Management
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memseti(void *b, int c, size_t len);
void		*ft_memsetl(void *b, int64_t c, size_t len);
void		*ft_memsetf(void *b, float c, size_t len);
void		*ft_memsetd(void *b, double c, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_calloc(size_t count, size_t size);

//lists
int			ft_lstsize(t_list *lst);
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstnew(void *content);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//Dynamic array
t_darray	darray_create(size_t item_size);
int			darray_exists(t_darray *array);
int			darray_add(t_darray *array, void *element);
void		*darray_get(t_darray *array, size_t index);
void		darray_remove(t_darray *array, size_t index);
size_t		darray_size(t_darray *array);
void		darray_free(t_darray *array);

//Maths Basics
double		ft_abs(double nb);
double		ft_sqrt(double nb);
long		ft_fact(long value);
double		ft_pow2(double value);
double		ft_cos(double x);
double		ft_sin(double x);
double		ft_modf(double x, double y);
double		ft_lerpf(double base, double high, double value);
double		ft_ilerpf(double base, double high, double value);
uint64_t	ft_maxui(uint64_t a, uint64_t b);
int64_t		ft_maxi(int64_t a, int64_t b);
double		ft_maxf(double a, double b);
uint64_t	ft_minui(uint64_t a, uint64_t b);
int64_t		ft_mini(int64_t a, int64_t b);
double		ft_minf(double a, double b);

//Vectors
t_vec2		vec2(double x, double y);
t_vec2		vec2_copy(t_vec2 old);
t_vec2		vec2_zero(void);
t_vec2		vec2_set(double value);
t_vec2		*vec2_add(t_vec2 *self, const t_vec2 other);
t_vec2		*vec2_multi(t_vec2 *self, int64_t value);
t_vec2		*vec2_multf(t_vec2 *self, double value);
t_vec2		*vec2_multv2(t_vec2 *self, t_vec2 vec);
t_vec2		*vec2_divi(t_vec2 *self, int64_t value);
t_vec2		*vec2_divf(t_vec2 *self, double value);
t_vec2		*vec2_divv2(t_vec2 *self, t_vec2 vec);
t_vec2		*vec2_normalize(t_vec2 *vec);
t_vec2		vec2_normalized(t_vec2 vec);
double		vec2_mag(t_vec2 vec);
t_ivec2		v2_to_iv2(t_vec2 vec);
t_vec3		v2_to_v3(t_vec2 vec);
t_vec4		v2_to_v4(t_vec2 vec);

t_ivec2		ivec2(int64_t x, int64_t y);
t_ivec2		ivec2_copy(t_ivec2 old);
t_ivec2		ivec2_zero(void);
t_ivec2		ivec2_set(int64_t value);
t_ivec2		*ivec2_add(t_ivec2 *self, const t_ivec2 other);
t_ivec2		*ivec2_multi(t_ivec2 *self, int64_t value);
t_ivec2		*ivec2_multf(t_ivec2 *self, double value);
t_ivec2		*ivec2_multv2(t_ivec2 *self, t_ivec2 vec);
t_ivec2		*ivec2_divi(t_ivec2 *self, int64_t value);
t_ivec2		*ivec2_divf(t_ivec2 *self, double value);
t_ivec2		*ivec2_divv2(t_ivec2 *self, t_ivec2 vec);
t_ivec2		*ivec2_normalize(t_ivec2 *vec);
t_ivec2		ivec2_normalized(t_ivec2 vec);
double		ivec2_mag(t_ivec2 vec);
t_vec2		iv2_to_v2(t_ivec2 vec);
t_vec3		iv2_to_v3(t_ivec2 vec);
t_vec4		iv2_to_v4(t_ivec2 vec);

t_vec3		vec3(double x, double y, double z);
t_vec3		vec3_copy(t_vec3 old);
t_vec3		vec3_zero(void);
t_vec3		vec3_set(double value);
t_vec3		*vec3_add(t_vec3 *self, const t_vec3 other);
t_vec3		*vec3_multi(t_vec3 *self, long value);
t_vec3		*vec3_multf(t_vec3 *self, double value);
t_vec3		*vec3_multv3(t_vec3 *self, t_vec3 vec);
t_vec3		*vec3_divi(t_vec3 *self, long value);
t_vec3		*vec3_divf(t_vec3 *self, double value);
t_vec3		*vec3_divv3(t_vec3 *self, t_vec3 vec);
t_vec3		*vec3_normalize(t_vec3 *vec);
t_vec3		*vec3_clamp_max(t_vec3 *vec, double x, double y, double z);
t_vec3		*vec3_clamp_min(t_vec3 *vec, int x, int y, int z);
t_vec3		vec3_normalized(t_vec3 vec);
t_vec3		vec3_lerpf(t_vec3 base, t_vec3 high, double value);
double		vec3_mag(t_vec3 vec);

t_ivec3		ivec3(int64_t x, int64_t y, int64_t z);
t_ivec3		ivec3_copy(t_ivec3 old);
t_ivec3		ivec3_zero(void);
t_ivec3		ivec3_set(int64_t value);
t_ivec3		*ivec3_add(t_ivec3 *self, const t_ivec3 other);
t_ivec3		*ivec3_multi(t_ivec3 *self, int64_t value);
t_ivec3		*ivec3_multf(t_ivec3 *self, double value);
t_ivec3		*ivec3_multv3(t_ivec3 *self, t_ivec3 vec);
t_ivec3		*ivec3_divi(t_ivec3 *self, int64_t value);
t_ivec3		*ivec3_divf(t_ivec3 *self, double value);
t_ivec3		*ivec3_divv3(t_ivec3 *self, t_ivec3 vec);
t_ivec3		*ivec3_normalize(t_ivec3 *vec);
t_ivec3		*ivec3_clamp_max(t_ivec3 *vec, int64_t x, int64_t y, int64_t z);
t_ivec3		*ivec3_clamp_min(t_ivec3 *vec, int64_t x, int64_t y, int64_t z);
t_ivec3		ivec3_normalized(t_ivec3 vec);
t_ivec3		ivec3_lerpf(t_ivec3 base, t_ivec3 high, double value);
double		ivec3_mag(t_ivec3 vec);

t_vec4		vec4(double x, double y, double z, double w);
t_vec4		vec4_copy(t_vec4 old);
t_vec4		vec4_zero(void);
t_vec4		vec4_set(double value);
t_vec4		*vec4_add(t_vec4 *self, const t_vec4 other);
t_vec4		*vec4_multi(t_vec4 *self, long value);
t_vec4		*vec4_multf(t_vec4 *self, double value);
t_vec4		*vec4_multv4(t_vec4 *self, t_vec4 vec);
t_vec4		*vec4_divi(t_vec4 *self, long value);
t_vec4		*vec4_divf(t_vec4 *self, double value);
t_vec4		*vec4_divv4(t_vec4 *self, t_vec4 vec);

//Matrix
t_mat4		mat4(double value);
t_mat4		mat4_copy(t_mat4 old);
t_mat4		mat4_zero(void);
t_mat4		mat4_identity(void);
t_mat4		*mat4_multi(t_mat4 *self, int value);
t_mat4		*mat4_multf(t_mat4 *self, double value);
t_vec4		mat4_multv4(t_mat4 self, t_vec4 other);
t_mat4		mat4_multm4(t_mat4 self, t_mat4 other);
t_mat4		mat4_translate(t_mat4 self, t_vec3 vec);
t_mat4		mat4_rotatex(t_mat4 self, double value);
t_mat4		mat4_rotatey(t_mat4 self, double value);
t_mat4		mat4_rotatez(t_mat4 self, double value);
t_mat4		mat4_rotate(t_vec3 vec);
t_mat4		mat4_rotate_axis(double angle, t_vec3 axis);
t_mat4		mat4_ortho(t_proj proj);
t_mat4		mat4_scalef(double value);
t_mat4		mat4_scalev3(t_vec3 vec);

//Garbage collector
typedef struct s_gc
{
	void	**pointers;
	size_t	ptrs_count;
	size_t	capacity;
	size_t	first_free;
	int		(*callback)(void *);
	void	*param;
}			t_gc;

t_gc		*gc_get(void);
int			gc_getfootprint(void);
void		gc_clean(void);
void		gc_free(void *ptr);
void		gc_destroy(void **ptr);
void		gc_set_callback(int (*callback)());
void		*gc_calloc(size_t count, size_t size);
char		*gc_strdup(const char *s1);
char		*gc_strappend(char *str, char c);
char		*gc_strjoin(char *s1, char *s2, int to_free);
char		*gc_substr(char const *s, unsigned int start, size_t len);
char		**gc_split(char const *s, char c);
char		*gc_get_next_line(int fd);
void		gc_split_free(char **t);
char		**gc_strarray_init(void);
char		**gc_strarray_from(char **other, size_t size);
char		**gc_strarray_fromstr(char *str);
void		gc_strarray_free(char **array);
char		**gc_strarray_append(char **array, char *str);
char		*gc_strarray_asstr(char **array);
size_t		gc_strarray_size(char **array);
char		*gc_itoa(int n);
void		gc_free2d(void **ptr, size_t size);

#endif
