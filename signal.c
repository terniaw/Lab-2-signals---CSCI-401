ignals
#signals.c
/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

/* global variable */
int a = 0;

void handler(int signalnum) { 
	printf("Hello World!\n");
	a = 1;
	alarm(1); 
}

int main(int abc, char * xyz[]) {
  signal(signalaz, handler); 
  alarm(1); 

  while(1) {
    while(a == 0); 
    printf("Turing was right!\n");
    a = 0;
  }

  return 0; 
}
