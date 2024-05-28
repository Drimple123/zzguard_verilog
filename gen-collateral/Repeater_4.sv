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

module Repeater_4(
  input         clock,
                reset,
                io_repeat,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  output        io_full,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
                io_enq_ready,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  input         io_enq_valid,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  input  [2:0]  io_enq_bits_opcode,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
                io_enq_bits_param,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
                io_enq_bits_size,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  input  [9:0]  io_enq_bits_source,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  input  [27:0] io_enq_bits_address,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  input  [7:0]  io_enq_bits_mask,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  input         io_enq_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
                io_deq_ready,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  output        io_deq_valid,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  output [2:0]  io_deq_bits_opcode,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
                io_deq_bits_param,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
                io_deq_bits_size,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  output [9:0]  io_deq_bits_source,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  output [27:0] io_deq_bits_address,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  output [7:0]  io_deq_bits_mask,	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
  output        io_deq_bits_corrupt	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:12:14]
);

  reg         full;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21]
  reg  [2:0]  saved_opcode;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
  reg  [2:0]  saved_param;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
  reg  [2:0]  saved_size;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
  reg  [9:0]  saved_source;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
  reg  [27:0] saved_address;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
  reg  [7:0]  saved_mask;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
  reg         saved_corrupt;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
  wire        _io_deq_valid_output = io_enq_valid | full;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :23:32]
  wire        _io_enq_ready_output = io_deq_ready & ~full;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :24:{32,35}]
  wire        _GEN = _io_enq_ready_output & io_enq_valid & io_repeat;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:24:32, :28:21]
  always @(posedge clock) begin
    if (reset)
      full <= 1'h0;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21]
    else
      full <= ~(io_deq_ready & _io_deq_valid_output & ~io_repeat) & (_GEN | full);	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :23:32, :28:{21,36,43}, :29:{21,24,36,43}]
    if (_GEN) begin	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:28:21]
      saved_opcode <= io_enq_bits_opcode;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
      saved_param <= io_enq_bits_param;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
      saved_size <= io_enq_bits_size;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
      saved_source <= io_enq_bits_source;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
      saved_address <= io_enq_bits_address;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
      saved_mask <= io_enq_bits_mask;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
      saved_corrupt <= io_enq_bits_corrupt;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
    end
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
        full = _RANDOM[2'h0][0];	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21]
        saved_opcode = _RANDOM[2'h0][3:1];	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18]
        saved_param = _RANDOM[2'h0][6:4];	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18]
        saved_size = _RANDOM[2'h0][9:7];	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18]
        saved_source = _RANDOM[2'h0][19:10];	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18]
        saved_address = {_RANDOM[2'h0][31:20], _RANDOM[2'h1][15:0]};	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18]
        saved_mask = _RANDOM[2'h1][23:16];	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
        saved_corrupt = _RANDOM[2'h3][24];	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:20:18]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_full = full;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21]
  assign io_enq_ready = _io_enq_ready_output;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:24:32]
  assign io_deq_valid = _io_deq_valid_output;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:23:32]
  assign io_deq_bits_opcode = full ? saved_opcode : io_enq_bits_opcode;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18, :25:21]
  assign io_deq_bits_param = full ? saved_param : io_enq_bits_param;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18, :25:21]
  assign io_deq_bits_size = full ? saved_size : io_enq_bits_size;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18, :25:21]
  assign io_deq_bits_source = full ? saved_source : io_enq_bits_source;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18, :25:21]
  assign io_deq_bits_address = full ? saved_address : io_enq_bits_address;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18, :25:21]
  assign io_deq_bits_mask = full ? saved_mask : io_enq_bits_mask;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18, :25:21]
  assign io_deq_bits_corrupt = full ? saved_corrupt : io_enq_bits_corrupt;	// @[generators/rocket-chip/src/main/scala/util/Repeater.scala:19:21, :20:18, :25:21]
endmodule

