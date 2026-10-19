#include <stdio.h>


int isvowel(char ch){
 
 return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int count(char shr[]){
    int vcount=0;int i=0;
    while(shr[i]!='\0'){
     if(isvowel(shr[i]))
        vcount++;
    }
     return vcount;
}
int main(){
    char str[100];
    printf("enter a string\n");
    scanf("%s",str);
    printf(" Number of vowels:%d",count(str));
    return 0;
    
}