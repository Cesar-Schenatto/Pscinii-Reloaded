#include <stdlib.h>
#include <stdio.h>

int strlen(char *str){
    int i;

    i = 0;
    while (str[i])    
        i++;   
    return (i);
}

char *strcpy(char *dest, char *src)
{
    int c; 

    c = 0;
    while(src[c])
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return (dest);
}

char *ft_strdup(char *src){
    
    int size;
    char *ret;

    size = strlen(src);
    ret = malloc((size + 1) * (sizeof(char)));
    if (ret) 
    {
        strcpy(ret, src);
        return (ret);
    }
        
    else
        return (NULL);
    
}

int main (void) {
    char buffer[] = "I'm Still Alive"
    printf("%s ", ft_strdup(buffer));
}
