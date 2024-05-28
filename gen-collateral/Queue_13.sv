// Generated by CIRCT firtool-1.61.0
// Standard header to adapt well known macros for register randomization.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

// Include register initializers in init blocks unless synthesis is set
`ifndef SYNTHESIS
  `ifndef ENABLE_INITIAL_REG_
    `define ENABLE_INITIAL_REG_
  `endif // not def ENABLE_INITIAL_REG_
`endif // not def SYNTHESIS

// Include rmemory initializers in init blocks unless synthesis is set
`ifndef SYNTHESIS
  `ifndef ENABLE_INITIAL_MEM_
    `define ENABLE_INITIAL_MEM_
  `endif // not def ENABLE_INITIAL_MEM_
`endif // not def SYNTHESIS

// Standard header to adapt well known macros for prints and assertions.

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

module Queue_13(
  input         clock,
                reset,
  output        io_enq_ready,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input         io_enq_valid,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input  [2:0]  io_enq_bits_opcode,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
                io_enq_bits_param,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input  [1:0]  io_enq_bits_size,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input  [13:0] io_enq_bits_source,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input  [25:0] io_enq_bits_address,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input  [7:0]  io_enq_bits_mask,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input  [63:0] io_enq_bits_data,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  input         io_enq_bits_corrupt,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
                io_deq_ready,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output        io_deq_valid,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output [2:0]  io_deq_bits_opcode,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
                io_deq_bits_param,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output [1:0]  io_deq_bits_size,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output [13:0] io_deq_bits_source,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output [25:0] io_deq_bits_address,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output [7:0]  io_deq_bits_mask,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output [63:0] io_deq_bits_data,	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
  output        io_deq_bits_corrupt	// @[src/main/scala/chisel3/util/Decoupled.scala:273:14]
);

  reg  [120:0] ram;	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  reg          full;	// @[src/main/scala/chisel3/util/Decoupled.scala:277:27]
  wire         do_enq = ~full & io_enq_valid;	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35, :277:27, :304:19]
  always @(posedge clock) begin
    if (do_enq)	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35]
      ram <= {io_enq_bits_corrupt, io_enq_bits_data, io_enq_bits_mask, io_enq_bits_address, io_enq_bits_source, io_enq_bits_size, io_enq_bits_param, io_enq_bits_opcode};	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
    if (reset)
      full <= 1'h0;	// @[src/main/scala/chisel3/util/Decoupled.scala:277:27]
    else if (~(do_enq == (io_deq_ready & full)))	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35, :277:27, :294:{15,27}, :295:16]
      full <= do_enq;	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35, :277:27]
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:3];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [2:0] i = 3'h0; i < 3'h4; i += 3'h1) begin
          _RANDOM[i[1:0]] = `RANDOM;
        end
        ram = {_RANDOM[2'h0][31:1], _RANDOM[2'h1], _RANDOM[2'h2], _RANDOM[2'h3][25:0]};	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
        full = _RANDOM[2'h0][0];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95, :277:27]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_enq_ready = ~full;	// @[src/main/scala/chisel3/util/Decoupled.scala:277:27, :304:19]
  assign io_deq_valid = full;	// @[src/main/scala/chisel3/util/Decoupled.scala:277:27]
  assign io_deq_bits_opcode = ram[2:0];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  assign io_deq_bits_param = ram[5:3];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  assign io_deq_bits_size = ram[7:6];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  assign io_deq_bits_source = ram[21:8];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  assign io_deq_bits_address = ram[47:22];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  assign io_deq_bits_mask = ram[55:48];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  assign io_deq_bits_data = ram[119:56];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
  assign io_deq_bits_corrupt = ram[120];	// @[src/main/scala/chisel3/util/Decoupled.scala:274:95]
endmodule

