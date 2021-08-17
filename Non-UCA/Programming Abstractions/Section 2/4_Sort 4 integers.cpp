void sort4Integers(int a, int b, int c, int d)
{
int tmp;
if (a > b) { tmp = a; a = b; b = tmp; }
if (c > d) { tmp = c; c = d; d = tmp; }
if (a > c) { tmp = a; a = c; c = tmp; }
if (b > d) { tmp = b; b = d; d = tmp; }
if (b > c) { tmp = b; b = c; c = tmp; }
cout<< a<<endl<<b<<endl<<c<<endl<<d;
}