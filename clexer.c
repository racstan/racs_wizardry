#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isDelimiter(char ch){
    if(ch ==' '||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return true;
    }
    return false;
}

bool isOperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return true;
    }
    return false;
}

bool isKeyword(char* str){
    if(!strcmp(str,'if')||!strcmp(str,"else")){
        return(true);
    }
    return false;
}

bool isInteger(char* str){
    int i, len = strlen(str);
    if(len==0){
        return false;
    }
    for(int i=0;i<len;i++){
        
    }
}