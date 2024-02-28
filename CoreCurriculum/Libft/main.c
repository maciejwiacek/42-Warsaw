#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char destination[20] = "Hello, ";
    char source[] = "world!";

    // Concatenate source to destination with length checking
    size_t result = ft_strlcat(destination, source, 20);

    if (result >= 20) {
        printf("Concatenation resulted in truncation.\n");
    } else {
        printf("Concatenated string: %s\n", destination);
    }

    return 0;
}
