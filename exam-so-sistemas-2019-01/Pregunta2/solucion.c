#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

double v;

void* rutina1(void* arg){
    int x = 1250;
    int y = 350;
    int z = 25;

    v = (double)z/y

void* rutina2(void* arg){
    int x = 1250;
    int y = 350;
    int z = 25;

    sleep(2);

    v *= x;

}

int main(){

    pthread_t hilo1;;
    pthread_t hilo2;

    pthread_create(&hilo1, NULL, rutina1, NULL); aca
    pthread_create(&hilo2, NULL, rutina2, NULL);

    pthread_join(hilo1, NULL);  
    pthread_join(hilo2, NULL);

    printf("El valor de la operación es %f\n", v);

    return 0;
}
