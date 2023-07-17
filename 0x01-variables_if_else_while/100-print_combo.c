#include <stdio.h>

/**
 *
 * main - program to print combo of two digits 
 *
 * Return: 0 on Success
 */
int main(void)
{       
        int a, b;
        
        a = '0';
        b = '1';
        
        while (a <= '9')
        {       
                while (b <= '9')
                {
                        if (!(a > b) || a == b)
                        {
                                putchar(a);
                                putchar(b);
                                if (a == '8' && b == '9')
                                {
                               		 putchar(10);
                                }
                                else
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
			b++;
                }
		b = '0';
		a++;
	}
	return (0);
}
