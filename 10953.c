#include<stdio.h>
#include<stdlib.h>

long int A[200][2];


int main(){

int t,i,j;
long int top,down;
long int tmp;

while(scanf("%d",&t)!=EOF){
    for(i=0;i<t;i++){
        scanf("%d %d",&A[i][0],&A[i][1]);
    }
    top=0;
    down=1;
    for(i=0;i<t;i++){
        tmp=A[i][0];
        for(j=0;j<t;j++){
           if(j==i){
                continue;
           }else{
                tmp=tmp*A[j][1];
           }
        }
        top = top+tmp;
    }
    for(i=0;i<t;i++){
        down=down*A[i][1];
    }
    //printf("top: %d down: %d",top,down);
    for(i=2;i<100;i++){
        while(top%i==0&&down%i==0){
            top=top/i;
            down=down/i;
        }
    }
    printf("%ld/%ld\n",top,down);

}
return 0;
}
