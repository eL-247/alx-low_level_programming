#include <stdio.h>

int main(void)
{
char c;
    printf("\n\n\tEnter a character: ");
        scanf("%c", &c);  
	    
	    // %d displays the integer value of a character
    // %c displays the actual character
        printf("\n\tASCII value of %c = %d \n\n", c, c);
	    //             
                return 0;
}
