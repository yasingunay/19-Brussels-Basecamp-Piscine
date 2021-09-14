#include <stdio.h>
#include <string.h>


unsigned int ft_strlcat(char *dst, const char *src, unsigned int size)
{
    unsigned int    n;
    unsigned int    m;
    unsigned int    p;


     n = 0;
    while (dst[n] != '\0')
        n++;

        p= 0;
    while (src[p] != '\0')
        p++;

    m = 0;
    
    if (size == 0)
        return (p);
    while ((src[m] != '\0') && ((n + m) < (size - 1)))
    {
        dst[n + m] = src[m];
        m++;
    }
    dst[n + m] = '\0';
    if (size > n)
        return (n + p);
    return (size + p);
}

int main()
{
    char dst[20] = "merhaba";
    char src[] = "world";
    int r;
	int size =13;

   
 
    r=ft_strlcat(dst,src,size);
	
    
	printf("%s\n",dst);

    printf("Value returned: %d\n",r);
    if( r > size )
       puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}