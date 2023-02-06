#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int flag=1,l;
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<=l;i++){
        if(s[i]!=s[strlen(s)-i-1]){
            flag=0;
            break;
        }
        l--;
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}