#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    const unsigned char *p_src = (const unsigned char *)src;
    unsigned char *p_dest = (unsigned char *)dest;

    int i = 0;
    while (i < n)
    {
        p_dest[i] = p_src[i];
        dest++;
        src++;
    }
}


int main() {
    char src[] = "Hello, World!";
    char dest[20];

    memmove(dest, src, strlen(src) + 1); // Copia la cadena incluyendo el carácter nulo
    printf("Destino memmove: %s\n", dest); // Salida: "Destino: Hello, World!"
    
    

    char src2[] = "Bye, World!";
    char dest2[20];

    memmove(dest2, src2, strlen(src2) + 1); // Copia la cadena incluyendo el carácter nulo
    printf("Destino ft_memmove: %s\n", dest2); // Salida: "Destino: Hello, World!"
    
    return 0;
}
