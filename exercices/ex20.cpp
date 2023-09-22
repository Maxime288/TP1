#include <stdio.h>
void echange(int*x, int*y)
{
    int buffer=*x;
    *x = *y;
    *y = buffer;
}
int main()
{
    int a = 3, b = 5;
    prinft("a = %d\n",a);
    prinft("b = %d\n",b);
    echange(&a, &b);
    prinft("a = %d\n",a);
    prinft("b = %d\n",b);
    return 0;
    
}