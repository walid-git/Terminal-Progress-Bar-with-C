#include <stdio.h>
#include <unistd.h>

int main (int argc, char ** argv) {
int j,i=0;

for(;i<=100;i++){
	printf("\rLoading [");
	for(j=0;j<i;j+=5)
		printf("#");
	for(;j<100;j+=5)
		printf(" ");
	printf("] %3d%% ",i);
	fflush(stdout);
	/*
	Do your stuff here 
	*/
	usleep(100000);
}
printf("\rDone    [####################] 100%% \n");
return 0;
}


