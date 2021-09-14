#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int                i;
    unsigned int    j;
	int len_dest;
	int len_src;
	unsigned int value =0;
	


	 len_dest = 0;
    while (dest[len_dest] != '\0')
        len_dest++;

		len_src = 0;
    while (dest[len_src] != '\0')
        len_src++;

    i = 0;
    while (dest[i] != '\0')
        i++;
    j = 0;

    	while (src[j] != '\0' && (j < size) && (size >= (len_dest +2)))
    	{
		
        
			dest[len_dest + i] = src[j];
        	

			i++;
       	 j++;
    	}
		
    dest[len_dest + i] = '\0';
	printf("%s\n",dest);
	if(size <= len_src)
	value = (len_dest + size);
	else 
	value=len_dest+len_src;
	
    
	
    return (value);
}




int main()
{
    char dest[100] = "hello";
    char src[] = "world";
    int r;
   // int size = 11;
   // char buffer[size];
    r=ft_strlcat(dest,src,3);
    printf("%d\n",r);
    
    //strcpy(buffer,first);
    //r = strlcat(dest,src,size);

    //puts(dest);
    //printf("Value returned: %d\n",r);
    //if( r > size )
       // puts("String truncated");
   // else
       // puts("String was fully copied");

    return(0);
}