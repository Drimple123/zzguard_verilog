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

module fifox(
  input         clock,
                reset,
  output        io_in_ready,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:80:16]
  input         io_in_valid,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:80:16]
  input  [54:0] io_in_bits,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:80:16]
  input         io_out_ready,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:80:16]
  output        io_out_valid,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:80:16]
  output [54:0] io_out_bits,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:80:16]
  output [7:0]  io_count	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:80:16]
);

  wire       _q_io_deq_valid;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:86:19]
  wire [5:0] _q_io_count;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:86:19]
  reg  [2:0] cnt;	// @[src/main/scala/chisel3/util/Counter.scala:61:40]
  wire       _GEN = cnt == 3'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:92:14, src/main/scala/chisel3/util/Counter.scala:61:40]
  always @(posedge clock) begin
    if (reset)
      cnt <= 3'h0;	// @[src/main/scala/chisel3/util/Counter.scala:61:40]
    else if (cnt == 3'h4)	// @[src/main/scala/chisel3/util/Counter.scala:61:40, :73:24]
      cnt <= 3'h0;	// @[src/main/scala/chisel3/util/Counter.scala:61:40]
    else	// @[src/main/scala/chisel3/util/Counter.scala:73:24]
      cnt <= cnt + 3'h1;	// @[src/main/scala/chisel3/util/Counter.scala:61:40, :77:24]
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:0];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM[/*Zero width*/ 1'b0] = `RANDOM;
        cnt = _RANDOM[/*Zero width*/ 1'b0][2:0];	// @[src/main/scala/chisel3/util/Counter.scala:61:40]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  Queue_86 q (	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:86:19]
    .clock        (clock),
    .reset        (reset),
    .io_enq_ready (io_in_ready),
    .io_enq_valid (io_in_valid),
    .io_enq_bits  (io_in_bits),
    .io_deq_ready (_GEN & io_out_ready),	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:92:{14,22}, :94:24, :98:24]
    .io_deq_valid (_q_io_deq_valid),
    .io_deq_bits  (io_out_bits),
    .io_count     (_q_io_count)
  );
  assign io_out_valid = _GEN & _q_io_deq_valid;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:86:19, :92:{14,22}, :93:22, :97:22]
  assign io_count = {2'h0, _q_io_count};	// @[generators/rocket-chip/src/main/scala/zzguard_rr/zzzzz.scala:86:19, :88:14]
endmodule

