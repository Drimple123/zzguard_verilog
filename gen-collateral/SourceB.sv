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

module SourceB(
  input         clock,
                reset,
  output        io_req_ready,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  input         io_req_valid,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  input  [2:0]  io_req_bits_param,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  input  [12:0] io_req_bits_tag,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  input  [9:0]  io_req_bits_set,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  input  [1:0]  io_req_bits_clients,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  input         io_b_ready,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  output        io_b_valid,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  output [1:0]  io_b_bits_param,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  output [8:0]  io_b_bits_source,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
  output [31:0] io_b_bits_address	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14]
);

  reg  [1:0]  remain;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25]
  wire [1:0]  todo = (|remain) ? remain : io_req_bits_clients;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :51:23, :52:19]
  wire [1:0]  _GEN = {~(todo[0]), 1'h1} & todo;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:52:19, :53:{16,37}]
  `ifndef SYNTHESIS	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:59:12]
    always @(posedge clock) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:59:12]
      if (~reset & ~(~io_req_valid | (|io_req_bits_clients))) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:59:{12,13,27,50}]
        if (`ASSERT_VERBOSE_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:59:12]
          $error("Assertion failed\n    at SourceB.scala:59 assert (!io.req.valid || io.req.bits.clients =/= 0.U)\n");	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:59:12]
        if (`STOP_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:59:12]
          $fatal;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:59:12]
      end
    end // always @(posedge)
  `endif // not def SYNTHESIS
  wire        _param_T_1 = ~(|remain) & io_req_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :51:23, :61:21, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  wire        b_valid = (|remain) | io_req_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :51:23, :68:21]
  reg  [12:0] tag_r;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:72:52]
  wire [12:0] tag = (|remain) ? tag_r : io_req_bits_tag;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :51:23, :72:{18,52}]
  reg  [9:0]  set_r;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:73:52]
  reg  [2:0]  param_r;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:74:56]
  always @(posedge clock) begin
    if (reset)
      remain <= 2'h0;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25]
    else
      remain <= (remain | (_param_T_1 ? io_req_bits_clients : 2'h0)) & ~(io_b_ready & b_valid ? _GEN : 2'h0);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :47:30, :48:30, :49:{23,37,39}, :53:37, :62:{24,37}, :68:21, :69:{19,32}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
    if (_param_T_1) begin	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35]
      tag_r <= io_req_bits_tag;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:72:52]
      set_r <= io_req_bits_set;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:73:52]
      param_r <= io_req_bits_param;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:74:56]
    end
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
        remain = _RANDOM[/*Zero width*/ 1'b0][1:0];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25]
        tag_r = _RANDOM[/*Zero width*/ 1'b0][14:2];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :72:52]
        set_r = _RANDOM[/*Zero width*/ 1'b0][24:15];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :73:52]
        param_r = _RANDOM[/*Zero width*/ 1'b0][27:25];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :74:56]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_req_ready = ~(|remain);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :51:23, :61:21]
  assign io_b_valid = b_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:68:21]
  assign io_b_bits_param = (|remain) ? param_r[1:0] : io_req_bits_param[1:0];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:35:14, :46:25, :51:23, :74:{20,56}]
  assign io_b_bits_source = (_GEN[0] ? 9'h140 : 9'h0) | {_GEN[1], 8'h0};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:53:37, src/main/scala/chisel3/util/Mux.scala:30:73, :32:36]
  assign io_b_bits_address = {tag[12], 3'h0, tag[11:0], (|remain) ? set_r : io_req_bits_set, 6'h0};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Parameters.scala:221:15, :229:72, :230:8, generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/SourceB.scala:46:25, :51:23, :72:18, :73:{18,52}]
endmodule

