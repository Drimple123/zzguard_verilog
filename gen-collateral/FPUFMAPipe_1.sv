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

module FPUFMAPipe_1(
  input         clock,
                reset,
                io_in_valid,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
                io_in_bits_ren3,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
                io_in_bits_swap23,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
  input  [2:0]  io_in_bits_rm,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
  input  [1:0]  io_in_bits_fmaCmd,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
  input  [64:0] io_in_bits_in1,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
                io_in_bits_in2,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
                io_in_bits_in3,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
  output [64:0] io_out_bits_data,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
  output [4:0]  io_out_bits_exc	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
);

  wire [64:0] _fma_io_out;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:710:19]
  wire [4:0]  _fma_io_exceptionFlags;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:710:19]
  wire        _fma_io_validout;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:710:19]
  reg         valid;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:698:22]
  reg  [2:0]  in_rm;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
  reg  [1:0]  in_fmaCmd;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
  reg  [64:0] in_in1;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
  reg  [64:0] in_in2;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
  reg  [64:0] in_in3;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
  reg  [64:0] io_out_pipe_b_data;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [4:0]  io_out_pipe_b_exc;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  always @(posedge clock) begin
    valid <= io_in_valid;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:698:22]
    if (io_in_valid) begin	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:693:14]
      in_rm <= io_in_bits_rm;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
      in_fmaCmd <= io_in_bits_fmaCmd;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
      in_in1 <= io_in_bits_in1;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
      in_in2 <= io_in_bits_swap23 ? 65'h8000000000000000 : io_in_bits_in2;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15, :705:8, :706:{23,32}]
      in_in3 <= io_in_bits_ren3 | io_in_bits_swap23 ? io_in_bits_in3 : (io_in_bits_in1 ^ io_in_bits_in2) & 65'h10000000000000000;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15, :702:{32,50,57}, :705:8, :707:{21,37,46}]
    end
    if (_fma_io_validout) begin	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:710:19]
      io_out_pipe_b_data <= ({65{_fma_io_out[63:61] != 3'h7}} | 65'h1EFEFFFFFFFFFFFFF) & _fma_io_out;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:243:{25,56}, :407:27, :408:10, :710:19, src/main/scala/chisel3/util/Valid.scala:130:26]
      io_out_pipe_b_exc <= _fma_io_exceptionFlags;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:710:19, src/main/scala/chisel3/util/Valid.scala:130:26]
    end
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:9];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [3:0] i = 4'h0; i < 4'hA; i += 4'h1) begin
          _RANDOM[i] = `RANDOM;
        end
        valid = _RANDOM[4'h0][0];	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:698:22]
        in_rm = _RANDOM[4'h0][21:19];	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:698:22, :699:15]
        in_fmaCmd = _RANDOM[4'h0][23:22];	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:698:22, :699:15]
        in_in1 = {_RANDOM[4'h0][31:28], _RANDOM[4'h1], _RANDOM[4'h2][28:0]};	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:698:22, :699:15]
        in_in2 = {_RANDOM[4'h2][31:29], _RANDOM[4'h3], _RANDOM[4'h4][29:0]};	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
        in_in3 = {_RANDOM[4'h4][31:30], _RANDOM[4'h5], _RANDOM[4'h6][30:0]};	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
        io_out_pipe_b_data = {_RANDOM[4'h7], _RANDOM[4'h8], _RANDOM[4'h9][0]};	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
        io_out_pipe_b_exc = _RANDOM[4'h9][5:1];	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  MulAddRecFNPipe_1 fma (	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:710:19]
    .clock             (clock),
    .reset             (reset),
    .io_validin        (valid),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:698:22]
    .io_op             (in_fmaCmd),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
    .io_a              (in_in1),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
    .io_b              (in_in2),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
    .io_c              (in_in3),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
    .io_roundingMode   (in_rm),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:699:15]
    .io_out            (_fma_io_out),
    .io_exceptionFlags (_fma_io_exceptionFlags),
    .io_validout       (_fma_io_validout)
  );
  assign io_out_bits_data = io_out_pipe_b_data;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  assign io_out_bits_exc = io_out_pipe_b_exc;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
endmodule

