#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 
int tglobal = 0;
void *Thread(void *vargp) { 
	int *myid = (int *)vargp; 
	static int tstatic = 0; 
    int tlocal=0;
	++tstatic; 
	++tglobal; 
	++tlocal; 
	printf("Thread ID: %d, Static: %d, Global: %d\n, Local: %d\n", *myid, ++tstatic, ++tglobal,++tlocal); 
} 

int main() { 
	int i; 
	pthread_t tid; 
	for (i = 0; i < 3; i++) 
		pthread_create(&tid, NULL, Thread, (void *)&tid); 

	pthread_exit(NULL); 
	return 0; 
} 
