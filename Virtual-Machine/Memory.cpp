#include "Memory.h"
using namespace std;
Memory::Memory(){
	program = new Instruction[10];
}

Memory::Memory(int size){
	program = new Instruction[size];
}

void Memory::addInstruction(int id, Instruction instruction){
	program[id] = instruction;
}

Instruction Memory::getInstruction(int id){
	return program[id];
}
