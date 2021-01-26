# FT_PRINTF function
## recoding printf function


* The prototype of ft_printf should be int ft_printf(const char *, ...);
* You have to recode the libc’s printf function
* It must not do the buffer management like the real printf
* It will manage the following conversions: cspdiuxX%
* It will manage any combination of the following flags: ’-0.*’ and minimum field width with all conversions
