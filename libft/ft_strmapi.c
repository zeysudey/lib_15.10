char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    int len;
    unsigned int i;
    char *str;
    
    len = ft_strlen(s);
    i = 0;
    if(!s)
        return NULL;
    
    str = (char*)malloc(sizeof(char) * (len + 1));
    if(str == NULL)
        return NULL;
        
    while(i<len){
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}
