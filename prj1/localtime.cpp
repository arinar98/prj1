#include <iostream> 
#include <stdio.h>
#include <time.h>
int time()
{
	time_t t;
	t=time(NULL);
   std::cout<<ctime(&t)<<std::endl;
}

