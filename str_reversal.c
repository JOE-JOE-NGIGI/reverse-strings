#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
   //declare two pointers of type char
   //user_str holds the user defined string
   //str_rev holds the reversed string
    char *user_str, *str_rev;

    //declere two integer variables
    //j a counter variable
    //lngth for storing the string length
    int j, lngth;

    printf("Please  key in your string: ");
    
    //use dynamic memory allocation to store user string
    scanf("%m[^\n]", &user_str); 

    lngth = 0;
    while(user_str[lngth] != '\0')
    {
        lngth++;
    }

    str_rev = (char*)malloc(lngth * sizeof(char));

    for (j=0; j<lngth; j++)
    {
        //reversing the string
        str_rev[j] = user_str[lngth - j - 1];
    }

    printf("Sring has been reversed to: %s\n", str_rev);

    free(user_str); //freeing memory used by user string
    free(str_rev);  //freeing memory used by reversed string
}