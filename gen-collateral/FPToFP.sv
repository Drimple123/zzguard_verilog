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

module FPToFP(
  input         clock,
                reset,
                io_in_valid,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
                io_in_bits_ren2,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
  input  [1:0]  io_in_bits_typeTagOut,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
  input         io_in_bits_wflags,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
  input  [2:0]  io_in_bits_rm,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
  input  [64:0] io_in_bits_in1,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
                io_in_bits_in2,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
  output [64:0] io_out_bits_data,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
  output [4:0]  io_out_bits_exc,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
  input         io_lt	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
);

  wire [32:0] _narrower_io_out;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:612:30]
  wire [4:0]  _narrower_io_exceptionFlags;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:612:30]
  reg         in_pipe_v;	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
  reg         in_pipe_b_ren2;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [1:0]  in_pipe_b_typeTagOut;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg         in_pipe_b_wflags;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [2:0]  in_pipe_b_rm;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [64:0] in_pipe_b_in1;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [64:0] in_pipe_b_in2;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  wire        _GEN = in_pipe_b_wflags & ~in_pipe_b_ren2;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:601:{24,27}, src/main/scala/chisel3/util/Valid.scala:130:26]
  wire [64:0] fsgnjMux_data = _GEN ? ((&(in_pipe_b_in1[63:61])) ? 65'hE008000000000000 : in_pipe_b_in1) : in_pipe_b_wflags ? ((&(in_pipe_b_in1[63:61])) & (&(in_pipe_b_in2[63:61])) ? 65'hE008000000000000 : (&(in_pipe_b_in2[63:61])) | in_pipe_b_rm[0] != io_lt & ~(&(in_pipe_b_in1[63:61])) ? in_pipe_b_in1 : in_pipe_b_in2) : {in_pipe_b_rm[1] ? in_pipe_b_in1[64] ^ in_pipe_b_in2[64] : in_pipe_b_rm[0] ^ in_pipe_b_in2[64], in_pipe_b_in1[63:0]};	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:243:{25,56}, :575:{20,31,48,66,77}, :576:{18,45}, :580:17, :582:25, :586:27, :587:{24,41,51,54}, :589:{19,25,53}, :601:{24,42}, :604:24, :605:21, src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [64:0] io_out_pipe_b_data;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [4:0]  io_out_pipe_b_exc;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  wire        _GEN_0 = in_pipe_b_typeTagOut == 2'h0;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:596:18, src/main/scala/chisel3/util/Valid.scala:130:26]
  wire [8:0]  _mux_data_expOut_commonCase_T = fsgnjMux_data[60:52] - 9'h100;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:270:18, :274:31, :582:25, :601:42, :605:21]
  always @(posedge clock) begin
    if (reset)
      in_pipe_v <= 1'h0;	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
    else
      in_pipe_v <= io_in_valid;	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
    if (io_in_valid) begin	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:567:14]
      in_pipe_b_ren2 <= io_in_bits_ren2;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_typeTagOut <= io_in_bits_typeTagOut;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_wflags <= io_in_bits_wflags;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_rm <= io_in_bits_rm;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_in1 <= io_in_bits_in1;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_in2 <= io_in_bits_in2;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
    end
    if (in_pipe_v) begin	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
      io_out_pipe_b_data <= _GEN_0 ? (_GEN ? {fsgnjMux_data[64:33], _narrower_io_out} : {fsgnjMux_data[64:33], fsgnjMux_data[64], fsgnjMux_data[63:61] == 3'h0 | fsgnjMux_data[63:61] > 3'h5 ? {fsgnjMux_data[63:61], _mux_data_expOut_commonCase_T[5:0]} : _mux_data_expOut_commonCase_T, fsgnjMux_data[51:29]}) : fsgnjMux_data;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:268:17, :270:18, :271:38, :273:26, :274:{31,50}, :275:{10,19,27,38,49,69}, :582:25, :594:24, :596:{18,36}, :597:{16,22,37}, :601:{24,42}, :605:21, :611:126, :612:30, :617:{18,24,39}, src/main/scala/chisel3/util/Valid.scala:130:26]
      io_out_pipe_b_exc <= _GEN & _GEN_0 ? _narrower_io_exceptionFlags : _GEN ? {(&(in_pipe_b_in1[63:61])) & ~(in_pipe_b_in1[51]), 4'h0} : in_pipe_b_wflags ? {(&(in_pipe_b_in1[63:61])) & ~(in_pipe_b_in1[51]) | (&(in_pipe_b_in2[63:61])) & ~(in_pipe_b_in2[51]), 4'h0} : 5'h0;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:243:{25,56}, :244:{34,37,39}, :579:16, :582:25, :585:49, :588:{18,31}, :594:24, :596:18, :601:{24,42}, :606:{20,51}, :611:126, :612:30, :618:17, src/main/scala/chisel3/util/Valid.scala:130:26]
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
        in_pipe_v = _RANDOM[4'h0][0];	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
        in_pipe_b_ren2 = _RANDOM[4'h0][4];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_typeTagOut = _RANDOM[4'h0][11:10];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_wflags = _RANDOM[4'h0][18];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_rm = _RANDOM[4'h0][21:19];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_in1 = {_RANDOM[4'h0][31:28], _RANDOM[4'h1], _RANDOM[4'h2][28:0]};	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_in2 = {_RANDOM[4'h2][31:29], _RANDOM[4'h3], _RANDOM[4'h4][29:0]};	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
        io_out_pipe_b_data = {_RANDOM[4'h7], _RANDOM[4'h8], _RANDOM[4'h9][0]};	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
        io_out_pipe_b_exc = _RANDOM[4'h9][5:1];	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  RecFNToRecFN narrower (	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:612:30]
    .io_in             (in_pipe_b_in1),	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
    .io_roundingMode   (in_pipe_b_rm),	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
    .io_out            (_narrower_io_out),
    .io_exceptionFlags (_narrower_io_exceptionFlags)
  );
  assign io_out_bits_data = io_out_pipe_b_data;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  assign io_out_bits_exc = io_out_pipe_b_exc;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
endmodule

