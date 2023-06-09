// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// This is the top level SystemVerilog file that connects the IO on the board to the CV32E40P Demo System.
module top_nexys7 (
  // These inputs are defined in data/pins_nexys7.xdc
  input               IO_CLK,
  input               IO_RST_N,
  input  [ 3:0]       SW,
  input  [ 3:0]       BTN,
  output [ 15:0]       LED,
  input               UART_RX,
  output              UART_TX//,
//  input               SPI_RX,
 // output              SPI_TX,
 // output              SPI_SCK
);
//  parameter SRAMInitFile = "";     CAMBIATO!
 parameter SRAMInitFile =  "blank.vmem";

  logic clk_sys, rst_sys_n;

  // Instantiating the Ibex Demo System.
  cv32e40p_demo_system #(
    .GpiWidth(8),
    .GpoWidth(16),
    .PwmWidth(0),
    .SRAMInitFile(SRAMInitFile)
  ) u_cv32e40p_demo_system (
    //input
    .clk_sys_i(clk_sys),
    .rst_sys_ni(rst_sys_n),
    .gp_i({SW, BTN}),
    .uart_rx_i(UART_RX),

    //outputì
    .gp_o(LED),
    .uart_tx_o(UART_TX)//,

  //  .spi_rx_i(SPI_RX),
   // .spi_tx_o(SPI_TX),
   // .spi_sck_o(SPI_SCK)
  );

  // Generating the system clock and reset for the FPGA.
  clkgen_xil7series clkgen(
    .IO_CLK,
    .IO_RST_N,
    .clk_sys,
    .rst_sys_n
  );

endmodule
