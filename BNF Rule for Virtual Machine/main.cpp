/*
Filename: main.cpp
Proyect: BNF Rule for Virtual Machine
Made by: Nava Cuellar José De Jesús
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int add(int,int);
int rest(int,int);
int mult(int,int);
int divi(int,int);

int main() {
	int op1 = 9;
	int op2 = 3;
	
	add(op1,op2);
	rest(op1,op2);
	mult(op1,op2);
	divi(op1,op2);
	
	return 0;
}

int add(int x, int y){
	return (x + y);
}
	
int rest(int x, int y){
	return (x - y);
}
	
int mult(int x, int y){
	return (x * y);
}
	
int divi(int x, int y){
	return (int)(x / y);
}

