#include "demo_system.h"
#include "uart.h"
#include <stdbool.h>

#include <stdlib.h>
#include <string.h>


bool letto = 0;
char dato_letto;

void uart_irq_handler(void) {
	int uart_in_char = uart_in(DEFAULT_UART);
  
  dato_letto = uart_in_char;
  letto = 1;
  
}

char read_value()
{
	set_global_interrupt_enable(1);
	while(!letto);
	set_global_interrupt_enable(0);
	letto = 0;
	return dato_letto;
}

char n2char(int n)
{
        if( n > 9 )
            return '*';
        else
            return (char)(n+48);
}

int char2n(char c)
{
        return ((int)c) - 48;
}

void putnumbers(int n)
{
	if( n > 9 )
		putnumbers(n/10);
	putchar(n2char(n % 10));
}

int main(void) {

install_exception_handler(UART_IRQ_NUM, &uart_irq_handler);
  uart_enable_rx_int();
  
  set_global_interrupt_enable(0);
  
  	//ridurre dimensione dati
  	int op1 = 0;
  	int op2 = 0;
  	char ops;
	int r = 0;
	bool f = false;
	
	while(1)
	{
		
		puts("Inserisci primo operando\n");
		
		op1 = char2n(read_value());
		
			
		 puts("Inserisci secondo operando\n");
		 
		 
		op2 = char2n(read_value());
		
		 puts("Inserisci operazione\n");
		 
		 ops = read_value();
		 
		 switch(ops)
		 {
		 	case '+':
		 		r = op1 + op2;
		 		break;
		 	case '-':
		 		r = op1 - op2;
		 		break;
		 	case '*':
		 		r = op1 * op2;
		 		break;
		 	case '/':
		 		r = op1 / op2;
		 		break;
		 	default: 
		 		f = true;
		 		break;
		 }
		 
		 if( !f )
		 {
		 	
			 puts("Il risultato e': ");
			 
			putnumbers(r);
		}
		 else
		 	puts("Operazione non riconosciuta");
		 
		 puts("\n-------------------------\n");
		 
	}
		 
	return 0;
  }

