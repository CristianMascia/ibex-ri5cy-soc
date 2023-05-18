#include "cv32e40p_pcounts.h"

void enable_pcounts()
{
	//Connecting event with Performance Counter in according with cv32e40p_pcounts.cc
	asm volatile("csrs mhpmevent3, %0\n" : : "r"(4));
	asm volatile("csrs mhpmevent4, %0\n" : : "r"(8));
	asm volatile("csrs mhpmevent5, %0\n" : : "r"(16));
	asm volatile("csrs mhpmevent6, %0\n" : : "r"(32));
	asm volatile("csrs mhpmevent7, %0\n" : : "r"(64));
	asm volatile("csrs mhpmevent8, %0\n" : : "r"(128));
	asm volatile("csrs mhpmevent9, %0\n" : : "r"(256));
	asm volatile("csrs mhpmevent10, %0\n" : : "r"(512));
	asm volatile("csrs mhpmevent11, %0\n" : : "r"(2048));
	
	//Enable All Performance Counter
	asm volatile("csrc mcountinhibit, %0\n" : : "r"(0xFFD));
}
