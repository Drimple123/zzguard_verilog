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

module SinkX(
  input         clock,
                reset,
                io_req_ready,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SinkX.scala:30:14]
  output        io_req_valid,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SinkX.scala:30:14]
  output [12:0] io_req_bits_tag,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SinkX.scala:30:14]
  output [9:0]  io_req_bits_set,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SinkX.scala:30:14]
  output        io_x_ready,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SinkX.scala:30:14]
  input         io_x_valid,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SinkX.scala:30:14]
  input  [31:0] io_x_bits_address	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SinkX.scala:30:14]
);

  wire [31:0] _x_q_io_deq_bits_address;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  Queue_48 x_q (	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
    .clock               (clock),
    .reset               (reset),
    .io_enq_ready        (io_x_ready),
    .io_enq_valid        (io_x_valid),
    .io_enq_bits_address (io_x_bits_address),
    .io_deq_ready        (io_req_ready),
    .io_deq_valid        (io_req_valid),
    .io_deq_bits_address (_x_q_io_deq_bits_address)
  );
  assign io_req_bits_tag = {_x_q_io_deq_bits_address[31], _x_q_io_deq_bits_address[27:16]};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Parameters.scala:214:47, :215:22, :216:19, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign io_req_bits_set = _x_q_io_deq_bits_address[15:6];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Parameters.scala:215:22, :217:28, src/main/scala/chisel3/util/Decoupled.scala:376:21]
endmodule

