#ifndef Memory_h
#define Memory_h

#include <iostream>
#include <stddef.h>
#include <string>

#include "Instruction.h"

using namespace std;

class Memory{
	Instruction* program;
	
public:
	Memory();
	Memory(int);	
	void addInstruction(int,Instruction);
	Instruction getInstruction(int);
};

#endif
