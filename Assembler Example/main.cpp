#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	
	int a, b, add, sub, mul, quo, res;
	
	cout << "Enter 2 numbers: ";
	cin >> a;
	cin >> b;
	
	__asm__ ( "addl %%ebx, %%eax;" : "=a" (add) : "a" (a) , "b" (b) );
	__asm__ ( "subl %%ebx, %%eax;" : "=a" (sub) : "a" (a) , "b" (b) );
	__asm__ ( "imull %%ebx, %%eax;" : "=a" (mul) : "a" (a) , "b" (b) );
	__asm__ ( "movl $0x0, %%edx;"
					 "movl %2, %%eax;"
					 "movl %3, %%ebx;"
					 "idivl %%ebx;" : "=a" (quo), "=d" (res) : "a" (a), "b" (b) );
	
	cout << a << " + " << b << " = " << add << endl; 
	cout << a << " - " << b << " = " << sub << endl;
	cout << a << " * " << b << " = " << mul << endl;			
	cout << a << " / " << b << " = " << quo << endl;
	
	return 0;
}
