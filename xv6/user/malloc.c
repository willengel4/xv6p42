#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(int argc, char *argv[])
{
	int i;
	for(i=0;i<10;i++)
	{
		int *a = (int *)malloc(sizeof(int));
		printf(1,"address =%d\n ",a);
	}

	int *add = (int *)malloc(4096);
	printf(1,"address 4096 =%d\n ",add);

	for(i=0;i<10;i++)
	{
		int *b = (int *)malloc(sizeof(int));
		printf(1,"address =%d\n ",b);
	}
	
	int *addr2 = (int *)malloc(4096);
	printf(1,"address 4096 =%d\n ",addr2);
  	exit();
}
