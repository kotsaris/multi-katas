#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int i;
	
	for(i=1; i<=100; i++)

		
		if (i % 5==0){
			printf("fizz\n");
		}
	else	if (i % 3==0){
			printf("buzz\n");
		}
	else printf("%d \n",i);
	getch();
	return 0;
}
