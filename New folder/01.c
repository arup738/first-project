#include <stdio.h>
int main(){
    int i;
    for(i=1000;i>=1;i--){
        if(i%5==1){
            printf("%d\n",i);
        }
        else{
            printf("%d\t",i);
        }
    }
    return 0;
}
