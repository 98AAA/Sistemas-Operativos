
/*
#pid_ = int GNU C es la variable que que contiene el proceso id
 getpid = obtiene el ID del prceso actual.
getppid() = Obtiene el ID del pdre del proceso acatual
fork() = Si sale bien 
                   El proceso padre: Nos va a regresar el proceso del hijo
                   El hijo nos va a regresar un 0
         Si Falla:
                 El proceso padre me regresa un -1
                 El hijo no se crea.
*/
#include<unistd.h>
#include<stdio.h>

int main(void)
{
pid_t procid;
printf("My current processs id is %d \n ", getpid());
procid = fork()
printf("Fork ID %d \n", procid);
printf("Calling fork %d \n", getpid())




return 0;
}
