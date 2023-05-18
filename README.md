# Ibex Demo System e CV32E40P Demo System

Questa repository permette di verificare con Verilator e sintetizzare su FPGA Nexys-A7 due SoC che sfruttano i core Ibex e CV32E40P.
Inoltre, permette di sviluppare e successivamente caricare software per i due sistemi.

## Requisiti Software

* Xilinx Vivado - https://www.xilinx.com/support/download.html
* rv32imc GCC toolchain - lowRISC provides one:
  https://github.com/lowRISC/lowrisc-toolchains/releases
  (For example: `lowrisc-toolchain-rv32imcb-20220524-1.tar.xz`)
* openocd (version 0.11.0 or above)
* screen
* srecord
* GTKWave (nel caso si vogliano visualizzare le tracce)

## Sviluppo Software

Nella cartella `sw/programs/` è possibile aggiungere i propri programmi immettendo i sorgenti nella cartella `/sw/program/nome_programma/dev/` e sfruttando il template `makefile_template/makefile_template_program`.

Di seguito si mostra come è possibile generare un elf file ed un vmem per il programma di esempio `test_gpio`.

```
cd sw/programs/test_gpio
make clear
make prepare
make test_gpio.elf
make vmem
```

In base al sistema target va attivata o disattivata la riga sottostante.

```
###############################################################################
# Directories
DRIVERS    = ../../common#                              # drivers directory
#SYSTEM_DIR = ../../cv32e40p_demo_system_src#           # additional srcs for specific system			
###############################################################################

```
## Simulazione

La costruzione e lancio della simulazione è gestita dal makefile specializzato dal `makefile_template/makefile_template_verilator`.

Per il sistema Ibex Demo System

```
cd VERILATOR/Ibex_Demo_System_Verilator/
make prepare
make convert
make build
make run

```
Al termine della simulazione viene generato il file `sim.fst` che presenta l'andamento dei segnali del SoC che può essere aperto con GTKWave.

```
gtkwave sim.fst

```
Un esempio di output generato dalla simulazione di Ibex Demo System caricando `test_gpio`.
```
Simulation statistics
=====================
Executed cycles:  397
Wallclock time:   0.013 s
Simulation speed: 30538.5 cycles/s (30.5385 kHz)
Trace file size:  102925 B

You can view the simulation traces by calling
$ gtkwave sim.fst

Performance Counters
====================
Cycles:                     392
NONE:                       0
Instructions Retired:       243
LSU Busy:                   118
Fetch Wait:                 14
Loads:                      78
Stores:                     40
Jumps:                      6
Conditional Branches:       12
Taken Conditional Branches: 11
Compressed Instructions:    0
Multiply Wait:              0
Divide Wait:                0
```

## Sintesi su FPGA
La fase di sintesi e programmazione della scheda può essere gestita mediante il software Vivado.

## Caricamento programma su FPGA

Il caricamento ed il lancio del programma in formato elf è gestito dallo script `sw/util_mem/load_demo_system.sh`. Puoi scegliere se lanciare immediatamente il programma subito dopo il caricamento oppure porlo in halt, in modo che si possa connettere il debug.

```bash
# Run test_gpio
./sw/util_mem/load_demo_system.sh run ./sw/programs/test_gpio/test_gpio.elf

# Load test_gpio and start halted awaiting a debugger
./sw/util_mem/load_demo_system.sh halt ./sw/programs/test_gpio/test_gpio.elf
```

Per visualizzare l'output fornita ad esempio dalla UART sul terminale utilizzare


```bash
screen /dev/ttyUSB1 115200
```

Per uscire dal comando `screen`, premere control e a insieme e successivamente al rilascio premere d.

Per caricare un programma in Ram durante la fase di sintesi, in modo che possa essere eseguito non appena la programmazione è terminata è possibile andando a modificare il parametro `SRAMInitFile` nel file `top_nexys7.sv`

## Debugging

Dopo aver caricato il programma in modalità halt è possibile avviare il debugging utilizzando il makefile utilizzato in fase di compilazione.


```
# Esempio test_gpio

cd sw/programs/test_gpio

make debug
```

