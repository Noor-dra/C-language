#include <stdio.h>
int stringlength(char str[]){
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    return length;
}
int main(){
    char str[100];
    printf("enter a string\n");
    scanf("%s",&str);
    printf("Length of the string is :%d",stringlength(str));
    return 0;
    
}