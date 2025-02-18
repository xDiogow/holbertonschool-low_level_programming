#include "main.h"
#include <stdio.h>

void jack_bauer(void)
{
	int current_hour = 0;
	int current_minute = 0;

	while (current_hour < 24) 
	{
		printf("%d:%d\n", current_hour, current_minute);

		current_minute++;
		
		if (current_minute >= 60)
		{
			current_minute = 0;
			current_hour++;
		}
	}
}
