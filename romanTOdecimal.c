#include<stdio.h>
#include<string.h>

int romanTOdecimal(char s);

main()
{
	char x[1000];
	int dec = 0;
	int l, i;
	
	printf("Enter a roman numeral to convert to decimal (I, V, X, L, C, D, M are the valid numerals):\n");
	scanf("%s", x);
	
	l = strlen(x);
	
	for(i = 0; i < l; ++i)
	{
		if(romanTOdecimal(x[i]) >= romanTOdecimal(x[i + 1]))
            dec = dec + romanTOdecimal(x[i]);
             
        else
            dec = dec + (romanTOdecimal(x[i + 1]) - romanTOdecimal(x[i]));
	}
	
	printf("%d", dec);
	
}

int romanTOdecimal(char s)
{
	int n;
	
	switch(s)
	{
        case 'I': n = 1;
		break;
        case 'V': n = 5;
		break;
        case 'X': n = 10;
		break;
        case 'L': n = 50;
		break;
        case 'C': n = 100;
		break;
        case 'D': n = 500;
		break;
        case 'M': n = 1000;
		break;
        case '\0': n = 0;
		break;
    }
    return n;
}
