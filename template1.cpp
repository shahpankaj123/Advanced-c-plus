#include<iostream>
#include<conio.h>
using namespace std;
template <class x>
void swap(x a,x b)
{
	x temp=a;
	a=b;
	b=temp;
	cout<<a<<endl<<b<<endl;
}
int main(){
	swap(5,6);
	getch();
	return 0;
}
