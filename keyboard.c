#include <stdio.h>
#define  T 500

int main()

{
	int c;
	
	while(1)
	{
		c=getchar();
		
		if (c==97)
			Beep(261, T); /*close to a C */
		if (c==119)
			Beep(277, T); /*close to a C# */
		if (c==115)
			Beep(293, T);
		if (c==101)
			Beep(311, T);
		if (c==100)
			Beep(329, T);
		if (c==102)
			Beep(349, T);
		if (c==116)
			Beep(369, T);
		if (c==103)
			Beep(392, T);
		if (c==121)
			Beep(415, T);
		if (c==104)
			Beep(440, T);
		if (c==117)
			Beep(466, T);
		if (c==106)
			Beep(493, T);
		if (c==107)
			Beep(523, T);
		
		
	}		
		
	return 0;
}


