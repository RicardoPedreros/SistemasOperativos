#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "solucion.h"

int main(int argc, char** argv){
	pid_t pid;
	
	pid=fork();
	int id=getpid();
	if(pid==0){
		int x = 20;

  		printf("fibonacci(%d) = ",x);
  		x = fibonacci(x);
  		printf("%d\n",x);
  		guardarEntero("archivo",x);
	}
	if(pid>0){
		wait(NULL);
		int n = (int)leerEntero("archivo");
		int res = 100 * n;
		printf("%d\n",res);
	}
}
