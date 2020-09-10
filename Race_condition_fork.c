#include<unistd.h>
#include<stdlib.h>
int main(){
    int i,j;
    i=fork();
    if(i==0){
        for(j=1;j<=10;j++)
         printf("Child Process\n");
        exit(0);
    }
    else{
        for(j=1;j<=10;j++)
         printf("Parent Process\n");

    }
   exit(0);
}
