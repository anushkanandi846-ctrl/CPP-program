#include <iostream>
using namespace std;
void swap(int x, int y)
{
int temp= x;
x=y;
y=temp;
cout<<"After swap: a="<<x<<"b="<<y<<end;
}
int main()
{
int a=40;
int b=50;
cout<<"Before swap :a="<<a<<"b="<<b<<end1;
swap(a,b);
return 0;
}



#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
*a=*b;
*b=temp;
}
int main()
{
int x=5;
int y=10;
cout<<"Before swap: x="<<x<<"y="<<y<<end1;
swap(&x,&y);
cout<<"After swap: x="<<x<<"y="<<y<<end1;
return 0;
}
