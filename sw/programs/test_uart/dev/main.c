#include "demo_system.h"
#include "cv32e40p_pcounts.h"
#include "uart.h"

int main(void) {

	enable_pcounts();
	puts("Hello World! ");
	//asm volatile ("wfi");
	return 0;
  }

