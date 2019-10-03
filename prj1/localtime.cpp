#include <iostream> 
#include <stdio.h>
#include <time.h>
int time()
{
	time_t t;
	srtuct tm *t_m;
	t=time(NULL):
	t_m=localtime(&t);
   std::cout<<"time is"<<t_m->tm_hour<<":"t_m->tm_minute<<":"<<t_m->tm_second<<std::endl;
}

