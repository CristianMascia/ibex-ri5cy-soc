#include "demo_system.h"
//#include "cv32e40p_pcounts.h"
#include "uart.h"
#include "timer.h"
#include "gpio.h"

void putnumbers(uint64_t n)
{
	if( n > 9 )
		putnumbers(n/10);
	putchar('0' + (n % 10));
}

uint64_t intOpsTest(int dim)
{
	uint64_t sum = 1;
	uint64_t sum_expected = dim*(dim+1)/2;
	
	uint64_t time_start = timer_read();
	
	for(int i=2;i<dim;i++)
		sum += i;
	
	uint64_t time_stop = timer_read();
	
	
	//Verifico la correttezza delle operazioni
	if( sum == sum_expected )
		return -1;
	
	return time_stop - time_start;
}

//dim deve essere un numero pari
uint64_t memTest(int dim)
{
	uint32_t v[] = {1,2,3,4,5,6,7,8,9,10};
	uint32_t t;
	
	uint64_t time_start = timer_read();
	
	for(int i=0;i<dim;i++)
	{
		//Swap
		for(int j=0;j<5;j++)
		{
			t = v[9-j];
			v[9-j] = v[j];
			v[j] = t;
		}
	}
	
	uint64_t time_stop = timer_read();
	
	//Verifico la correttezza delle operazioni
	for(int i=0;i<10;i++)
		if( (i+1) != v[i] )
			return -1;
			
	return time_stop - time_start;
}


int main(void) {
	//Dimensioni test
	int dim_intOpTest = 600000000;
	int dim_memTest = 80000000;
	
	uint64_t time_elapsed_i, time_elapsed_m;
	uint32_t time_ms_i, time_ms_m;
	
	//uint64_t clock_period = 835;  //IBEX
	uint64_t clock_period = 1225;  //CV32E40P
	
	puts("\n----------Test su IBEX Demo System----------");
	
	puts("\n----------Inizio Test Operazioni Intere----------");
	puts("\n---Dimensione del problema: ");
	putnumbers(dim_intOpTest);

	time_elapsed_i = intOpsTest(dim_intOpTest);
	
	puts("\n----------Fine Test Operazioni Intere----------");
	
	if( time_elapsed_i > 0 )
	{
		time_ms_i = (2*(time_elapsed_i * clock_period)/1000000)/100;
		puts("\n---Tempo Test IntOp(ms): ");
		putnumbers(time_ms_i);
	}
	else
		puts("\n---ERRORE in IntOp");
		
		
	puts("\n----------Inizio Test Operazioni Memoria----------");
	puts("\n---Dimensione del problema: ");
	putnumbers(dim_memTest);

	time_elapsed_m = memTest(dim_memTest);
	
	puts("\n----------Fine Test Operazioni Memoria----------");
	
	
	
	if( time_elapsed_m > 0 )
	{
		time_ms_m = (2*(time_elapsed_m * clock_period)/1000000)/100;
		puts("\n---Tempo Test Mem(ms): ");
		putnumbers(time_ms_m);
	}
	else
		puts("\n---ERRORE in Mem");
	
	return 0;
  }

