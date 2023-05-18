###############################################################################
# PRJ INFO
TARGET = calc_uart#                                                                                # default target and name of the image and executable files to generate

###############################################################################

###############################################################################
# Tools
PREFIX     = riscv32-unknown-elf
CC         = $(PREFIX)-gcc
OBJDUMP    = $(PREFIX)-objdump
OBJCPY     = $(PREFIX)-objcopy
SIZE       = $(PREFIX)-size
GDB        = $(PREFIX)-gdb

###############################################################################

###############################################################################
# Directories
DRIVERS    = ../../common#                                                                         # drivers directory
#SYSTEM_DIR = ../../cv32e40p_demo_system_src#                                                      # additional srcs for specific system
				
###############################################################################

###############################################################################
# Source files
SRCS += $(wildcard $(SYSTEM_DIR)/*.c) 
SRCS += $(DRIVERS)/demo_system.c
SRCS += $(DRIVERS)/gpio.c
SRCS += $(DRIVERS)/uart.c
SRCS += $(wildcard dev/*.c) 

# remove paths from the file names
SRCS_FN = $(notdir $(SRCS))

STARTUP    = $(DRIVERS)/crt0.S#                                                                    # Startup file
LDFILE     = $(DRIVERS)/link.ld#                                                                   # Linker Script file

OBJS       = $(addprefix obj/,$(SRCS_FN:.c=.o))                                                    # generate OBJS and DEPS target lists by prepending obj/ and dep prefixes
# Source search paths
VPATH      = ./src

###############################################################################

###############################################################################
# Include search paths
INCS       = -I$(DRIVERS)
ifdef $(SYSTEM_DIR)
INCS       += -I$(SYSTEM_DIR)
endif

###############################################################################


###############################################################################
# FLAGS
CFLAGS     = -march=rv32im -mabi=ilp32#                 
CFLAGS     += $(INCS)
CFLAGS     += -g
LDFLAGS    = -nostartfiles -Tsrc/linkerScript.ld
SRECFLAGS = -offset 0x0000 -byte-swap 4

###############################################################################


.PHONY: clear debug help
.DEFAULT_GOAL := $(TARGET).elf

		
debug: $(TARGET).elf
	@if ! nc -z localhost 3333; then \
		echo "\n[Error] OpenOCD is not running!\n"; exit 1; \
	else \
		$(GDB) ./$(TARGET).elf -ex "target extended localhost:3333" ; \
	fi
	
vmem: $(TARGET).elf
	@echo "[OBJCPY]      $(TARGET).bin"
	$(OBJCPY) -O binary $(TARGET).elf $(TARGET).bin
	@echo "[srec_cat]      $(TARGET).vmem"
	srec_cat $(TARGET).bin -binary $(SRECFLAGS) -o $(TARGET).vmem -vmem
	
$(TARGET).elf: prepare 
	$(MAKE) build

build:  $(OBJS)
	@echo "[LD]      $(TARGET).elf"
	$(CC) $(CFLAGS) $(LDFLAGS) $(STARTUP) $^ -o $(TARGET).elf
	@echo "[SIZE]    $(TARGET).elf"
	$(SIZE) $(TARGET).elf
	@echo "[OBJDUMP] $(TARGET).lst"
	$(OBJDUMP) -St $(TARGET).elf >$(TARGET).lst

obj/%.o : %.c | obj
	@echo "generating \"$@\" from \"$<\""
	$(CC) $(CFLAGS) -c $< -o $@
	
prepare: src
	cp $(SRCS) src/
	cp $(LDFILE) src/linkerScript.ld
	cp dev/* src/
	
obj src:
	@echo "[MKDIR]   $@"
	mkdir -p $@

clear:
	@echo "[RM]      $(TARGET).elf"; rm -f $(TARGET).elf
	@echo "[RM]      $(TARGET).lst"; rm -f $(TARGET).lst
	@echo "[RM]      $(TARGET).bin"; rm -f $(TARGET).bin
	@echo "[RM]      $(TARGET).vmem"; rm -f $(TARGET).vmem
	@echo "[RM]      ld script"; rm -f src/linkerScript.ld
	@echo "[RM]      src files"; rm -f src/*
	@echo "[RMDIR]   src"          ; rm -fr src
	@echo "[RMDIR]   obj"          ; rm -fr obj
	
help:
	@echo "Makefile to build " $(TARGET) 
	@echo "> make clear : Delete directories : src/ obj/ and files : $(TARGET).elf, $(TARGET).lst, $(TARGET).bin and $(TARGET).vmem"
	@echo "> make obj : Create directory for object files"
	@echo "> make src : Create directory for srcs files"
	@echo "> make prepare : Copy all sources, startup file and linker script to src/"
	@echo "> make build : Build" $(TARGET).elf "and dump" $(TARGET).lst 
	@echo "> make $(TARGET).elf : Prepare and build  
	@echo "> make vmem : Generate VMEM file for $(TARGET) 
	@echo "> make debug : Runs $(TARGET).elf with gdb if exist OpenOCD running on localhost:3333"
	@echo "> default target is : $(.DEFAULT_GOAL)"
