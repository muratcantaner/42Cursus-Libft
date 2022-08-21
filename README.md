<h1 align="center">
     LIBFT
</h1>


#### DESCRIPTION
###### This project is your very first project as a student at 42. You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.

-----------

| SKILLS |
| :--- |
| Imperative programming |
| Rigor |
| Algorithms & AI |

-------------

| KEYWORDS |
| :--- |
| Unix Logic |

<br>

### Functions from `<ctype.h>` library

* [`ft_isascii`](/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](/ft_isalpha.c)			- alphabetic character test.
* [`ft_islower`](/ft_islower.c) *	- lower-case character test.
* [`ft_isupper`](/ft_isupper.c) *	- upper-case character test.
* [`ft_isdigit`](/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_atof`](/ft_atof.c) *		- convert ASCII string to integer.
* [`ft_calloc`](/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](/ft_strlen.c)				- find length of string.
* [`ft_strchr`](/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](/ft_strstr.c) *		- locate a substring in a string.
* [`ft_strnstr`](/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](/ft_strcmp.c) *		- compare strings.
* [`ft_strncmp`](/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strcpy`](/ft_strcpy.c) *		- copy strings.
* [`ft_strncpy`](/ft_strncpy.c) *	- copy strings (size-bounded).
* [`ft_strdup`](/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strcat`](/ft_strcat.c) *		- concatenate strings (s2 into s1).
* [`ft_strncat`](/ft_strncat.c) *	- concatenate strings (s2 into s1, size-bounded).
* [`ft_strlcpy`](/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar_fd`](put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](put/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](put/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](put/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](/ft_lstmap.c)				- apply function to content of all list's elements into new list.

_Note: functions marked with * are bonus functions (not mandatory by the project's subject)._
