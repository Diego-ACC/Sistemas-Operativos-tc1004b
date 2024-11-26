#include<unistd.h>
#include<stdio.h>

int main(){
    int a = 20;
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo a=%d\n",a);
        sleep(30);
        return 0;
    }
    printf("Soy el proceso padre a=%d\n",a);
    printf("mi hijo es pid=%d\n",pid);
    sleep(30);
    return 0;
}