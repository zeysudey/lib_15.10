/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
static int num_len(int n){
    int len;
    
    len=0;
    if(n<=0){
        len=1;
    }
    while(n!=0){
        n=n/10;
        len++;
    }
    return len;
}
char *ft_itoa(int n){
    int leng;
    char *str;
    int sign;
    
    sign =0;
    leng=num_len(n);
    str=(char *)malloc(sizeof(char)*(leng+1));
    
    if(!str)
        return NULL;
    if(n<0){
        sign=1;
        n=-n;
    }
    for (int i = leng - 1; i >= sign; i--) {
        str[i] = (n % 10) + '0'; 
        n /= 10;
    }
    if (sign) {
        str[0] = '-'; 
    }
    return str;
}
int main(){
    printf("%s",ft_itoa(234));
}
