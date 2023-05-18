#include <stdint.h>
#include "demo_system.h"
#include "gpio.h"
//#include "cv32e40p_pcounts.h"

int main(void) {

	//Enable for CV32E40P
	//enable_pcounts();
	int v[] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	int s = 0;
	for(int i=0;i<n; i++)
		s+=v[i];
		
	set_outputs(GPIO_OUT, s);
	
	return 0;
  }
  
 

