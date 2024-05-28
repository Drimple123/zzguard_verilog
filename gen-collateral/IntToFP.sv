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

module IntToFP(
  input         clock,
                reset,
                io_in_valid,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
  input  [1:0]  io_in_bits_typeTagIn,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
  input         io_in_bits_wflags,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
  input  [2:0]  io_in_bits_rm,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
  input  [1:0]  io_in_bits_typ,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
  input  [63:0] io_in_bits_in1,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
  output [64:0] io_out_bits_data,	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
  output [4:0]  io_out_bits_exc	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
);

  wire [64:0]  _i2f_1_io_out;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:549:23]
  wire [4:0]   _i2f_1_io_exceptionFlags;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:549:23]
  wire [32:0]  _i2f_io_out;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:549:23]
  wire [4:0]   _i2f_io_exceptionFlags;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:549:23]
  reg          in_pipe_v;	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
  reg  [1:0]   in_pipe_b_typeTagIn;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg          in_pipe_b_wflags;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [2:0]   in_pipe_b_rm;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [1:0]   in_pipe_b_typ;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [63:0]  in_pipe_b_in1;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  wire [63:0]  intValue_res = in_pipe_b_typ[1] ? in_pipe_b_in1 : {{32{~(in_pipe_b_typ[0]) & in_pipe_b_in1[31]}}, in_pipe_b_in1[31:0]};	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:535:26, :537:33, :538:66, :539:{13,19,31}, generators/rocket-chip/src/main/scala/util/package.scala:155:13, src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [64:0]  io_out_pipe_b_data;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  reg  [4:0]   io_out_pipe_b_exc;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  wire [63:0]  _mux_data_T_2 = (in_pipe_b_typeTagIn[0] ? 64'h0 : 64'hFFFFFFFF00000000) | in_pipe_b_in1;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, generators/rocket-chip/src/main/scala/util/package.scala:32:47, :33:76, src/main/scala/chisel3/util/Valid.scala:130:26]
  wire         mux_data_rawIn_isZeroExpIn = _mux_data_T_2[62:52] == 11'h0;	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:45:19, :48:30, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23]
  wire [5:0]   mux_data_rawIn_normDist = _mux_data_T_2[51] ? 6'h0 : _mux_data_T_2[50] ? 6'h1 : _mux_data_T_2[49] ? 6'h2 : _mux_data_T_2[48] ? 6'h3 : _mux_data_T_2[47] ? 6'h4 : _mux_data_T_2[46] ? 6'h5 : _mux_data_T_2[45] ? 6'h6 : _mux_data_T_2[44] ? 6'h7 : _mux_data_T_2[43] ? 6'h8 : _mux_data_T_2[42] ? 6'h9 : _mux_data_T_2[41] ? 6'hA : _mux_data_T_2[40] ? 6'hB : _mux_data_T_2[39] ? 6'hC : _mux_data_T_2[38] ? 6'hD : _mux_data_T_2[37] ? 6'hE : _mux_data_T_2[36] ? 6'hF : _mux_data_T_2[35] ? 6'h10 : _mux_data_T_2[34] ? 6'h11 : _mux_data_T_2[33] ? 6'h12 : _mux_data_T_2[32] ? 6'h13 : _mux_data_T_2[31] ? 6'h14 : _mux_data_T_2[30] ? 6'h15 : _mux_data_T_2[29] ? 6'h16 : _mux_data_T_2[28] ? 6'h17 : _mux_data_T_2[27] ? 6'h18 : _mux_data_T_2[26] ? 6'h19 : _mux_data_T_2[25] ? 6'h1A : _mux_data_T_2[24] ? 6'h1B : _mux_data_T_2[23] ? 6'h1C : _mux_data_T_2[22] ? 6'h1D : _mux_data_T_2[21] ? 6'h1E : _mux_data_T_2[20] ? 6'h1F : _mux_data_T_2[19] ? 6'h20 : _mux_data_T_2[18] ? 6'h21 : _mux_data_T_2[17] ? 6'h22 : _mux_data_T_2[16] ? 6'h23 : _mux_data_T_2[15] ? 6'h24 : _mux_data_T_2[14] ? 6'h25 : _mux_data_T_2[13] ? 6'h26 : _mux_data_T_2[12] ? 6'h27 : _mux_data_T_2[11] ? 6'h28 : _mux_data_T_2[10] ? 6'h29 : _mux_data_T_2[9] ? 6'h2A : _mux_data_T_2[8] ? 6'h2B : _mux_data_T_2[7] ? 6'h2C : _mux_data_T_2[6] ? 6'h2D : _mux_data_T_2[5] ? 6'h2E : _mux_data_T_2[4] ? 6'h2F : _mux_data_T_2[3] ? 6'h30 : _mux_data_T_2[2] ? 6'h31 : {5'h19, ~(_mux_data_T_2[1])};	// @[generators/hardfloat/hardfloat/src/main/scala/primitives.scala:91:52, generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, src/main/scala/chisel3/util/Mux.scala:50:70]
  wire [11:0]  _mux_data_rawIn_adjustedExp_T_4 = (mux_data_rawIn_isZeroExpIn ? {6'h3F, ~mux_data_rawIn_normDist} : {1'h0, _mux_data_T_2[62:52]}) + {10'h100, mux_data_rawIn_isZeroExpIn ? 2'h2 : 2'h1};	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:45:19, :48:30, :54:10, :55:18, :57:9, :58:14, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, src/main/scala/chisel3/util/Mux.scala:50:70, src/main/scala/chisel3/util/Valid.scala:129:24]
  wire [114:0] _mux_data_rawIn_subnormFract_T = {63'h0, _mux_data_T_2[51:0]} << mux_data_rawIn_normDist;	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, :52:33, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, src/main/scala/chisel3/util/Mux.scala:50:70]
  wire [51:0]  _mux_data_rawIn_out_sig_T_2 = mux_data_rawIn_isZeroExpIn ? {_mux_data_rawIn_subnormFract_T[50:0], 1'h0} : _mux_data_T_2[51:0];	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, :48:30, :52:{33,46,64}, :70:33, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, src/main/scala/chisel3/util/Valid.scala:129:24]
  wire [2:0]   _mux_data_T_4 = mux_data_rawIn_isZeroExpIn & ~(|(_mux_data_T_2[51:0])) ? 3'h0 : _mux_data_rawIn_adjustedExp_T_4[11:9];	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, :48:30, :49:34, :57:9, :60:30, generators/hardfloat/hardfloat/src/main/scala/recFNFromFN.scala:48:{15,50}, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23]
  wire         _GEN = _mux_data_T_4[0] | (&(_mux_data_rawIn_adjustedExp_T_4[11:10])) & (|(_mux_data_T_2[51:0]));	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, :49:34, :57:9, :61:{32,57}, :64:28, generators/hardfloat/hardfloat/src/main/scala/recFNFromFN.scala:48:{15,76}, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23]
  wire         mux_data_rawIn_isZeroExpIn_1 = _mux_data_T_2[30:23] == 8'h0;	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:45:19, :48:30, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23]
  wire [4:0]   mux_data_rawIn_normDist_1 = _mux_data_T_2[22] ? 5'h0 : _mux_data_T_2[21] ? 5'h1 : _mux_data_T_2[20] ? 5'h2 : _mux_data_T_2[19] ? 5'h3 : _mux_data_T_2[18] ? 5'h4 : _mux_data_T_2[17] ? 5'h5 : _mux_data_T_2[16] ? 5'h6 : _mux_data_T_2[15] ? 5'h7 : _mux_data_T_2[14] ? 5'h8 : _mux_data_T_2[13] ? 5'h9 : _mux_data_T_2[12] ? 5'hA : _mux_data_T_2[11] ? 5'hB : _mux_data_T_2[10] ? 5'hC : _mux_data_T_2[9] ? 5'hD : _mux_data_T_2[8] ? 5'hE : _mux_data_T_2[7] ? 5'hF : _mux_data_T_2[6] ? 5'h10 : _mux_data_T_2[5] ? 5'h11 : _mux_data_T_2[4] ? 5'h12 : _mux_data_T_2[3] ? 5'h13 : _mux_data_T_2[2] ? 5'h14 : _mux_data_T_2[1] ? 5'h15 : 5'h16;	// @[generators/hardfloat/hardfloat/src/main/scala/primitives.scala:91:52, generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, :531:11, src/main/scala/chisel3/util/Mux.scala:50:70]
  wire [8:0]   _mux_data_rawIn_adjustedExp_T_9 = (mux_data_rawIn_isZeroExpIn_1 ? {4'hF, ~mux_data_rawIn_normDist_1} : {1'h0, _mux_data_T_2[30:23]}) + {7'h20, mux_data_rawIn_isZeroExpIn_1 ? 2'h2 : 2'h1};	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:45:19, :48:30, :54:10, :55:18, :57:9, :58:14, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, src/main/scala/chisel3/util/Mux.scala:50:70, src/main/scala/chisel3/util/Valid.scala:129:24]
  wire [2:0]   _mux_data_T_13 = mux_data_rawIn_isZeroExpIn_1 & ~(|(_mux_data_T_2[22:0])) ? 3'h0 : _mux_data_rawIn_adjustedExp_T_9[8:6];	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, :48:30, :49:34, :57:9, :60:30, generators/hardfloat/hardfloat/src/main/scala/recFNFromFN.scala:48:{15,50}, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23]
  wire [64:0]  _GEN_0 = ({65{_i2f_1_io_out[63:61] != 3'h7}} | 65'h1EFEFFFFFFFFFFFFF) & _i2f_1_io_out;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:243:{25,56}, :407:27, :408:10, :549:23]
  wire [53:0]  _mux_data_rawIn_subnormFract_T_2 = {31'h0, _mux_data_T_2[22:0]} << mux_data_rawIn_normDist_1;	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:46:21, :52:33, generators/rocket-chip/src/main/scala/tile/FPU.scala:425:23, src/main/scala/chisel3/util/Mux.scala:50:70]
  always @(posedge clock) begin
    if (reset)
      in_pipe_v <= 1'h0;	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
    else
      in_pipe_v <= io_in_valid;	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
    if (io_in_valid) begin	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:522:14]
      in_pipe_b_typeTagIn <= io_in_bits_typeTagIn;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_wflags <= io_in_bits_wflags;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_rm <= io_in_bits_rm;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_typ <= io_in_bits_typ;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      in_pipe_b_in1 <= io_in_bits_in1;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
    end
    if (in_pipe_v) begin	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
      io_out_pipe_b_data <= in_pipe_b_wflags ? (in_pipe_b_typeTagIn[0] ? _GEN_0 : {_GEN_0[64:33], _i2f_io_out}) : {_mux_data_T_2[63], _mux_data_T_4[2:1], _GEN, (&{_mux_data_T_4[2:1], _GEN}) ? {&(_mux_data_rawIn_out_sig_T_2[51:32]), _mux_data_rawIn_adjustedExp_T_4[7:1], _mux_data_T_13[2], _mux_data_rawIn_out_sig_T_2[51:32], _mux_data_T_2[31], _mux_data_T_13[1], _mux_data_T_13[0] | (&(_mux_data_rawIn_adjustedExp_T_9[8:7])) & (|(_mux_data_T_2[22:0])), _mux_data_rawIn_adjustedExp_T_9[5:0], mux_data_rawIn_isZeroExpIn_1 ? {_mux_data_rawIn_subnormFract_T_2[21:0], 1'h0} : _mux_data_T_2[22:0]} : {_mux_data_rawIn_adjustedExp_T_4[8:0], _mux_data_rawIn_out_sig_T_2}};	// @[generators/hardfloat/hardfloat/src/main/scala/rawFloatFromFN.scala:44:18, :46:21, :48:30, :49:34, :52:{33,46,64}, :57:9, :61:{32,57}, :64:28, :70:33, generators/hardfloat/hardfloat/src/main/scala/recFNFromFN.scala:48:{15,76}, :50:{23,41}, generators/rocket-chip/src/main/scala/tile/FPU.scala:243:{25,56}, :330:26, :332:{8,42}, :333:8, :334:8, :337:8, :338:8, :408:10, :425:23, :532:12, :545:25, :549:23, :558:{44,55}, :559:14, generators/rocket-chip/src/main/scala/util/package.scala:32:47, :33:76, src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
      io_out_pipe_b_exc <= in_pipe_b_wflags ? (in_pipe_b_typeTagIn[0] ? _i2f_1_io_exceptionFlags : _i2f_io_exceptionFlags) : 5'h0;	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:531:11, :545:25, :549:23, :560:13, generators/rocket-chip/src/main/scala/util/package.scala:32:47, :33:76, src/main/scala/chisel3/util/Valid.scala:130:26]
    end
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:4];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [2:0] i = 3'h0; i < 3'h5; i += 3'h1) begin
          _RANDOM[i] = `RANDOM;
        end
        in_pipe_v = _RANDOM[3'h0][0];	// @[src/main/scala/chisel3/util/Valid.scala:129:24]
        in_pipe_b_typeTagIn = _RANDOM[3'h0][9:8];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_wflags = _RANDOM[3'h0][18];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_rm = _RANDOM[3'h0][21:19];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_typ = _RANDOM[3'h0][23:22];	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        in_pipe_b_in1 = {_RANDOM[3'h0][31:24], _RANDOM[3'h1], _RANDOM[3'h2][23:0]};	// @[src/main/scala/chisel3/util/Valid.scala:129:24, :130:26]
        io_out_pipe_b_data = {_RANDOM[3'h2][31:25], _RANDOM[3'h3], _RANDOM[3'h4][25:0]};	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
        io_out_pipe_b_exc = _RANDOM[3'h4][30:26];	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  INToRecFN i2f (	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:549:23]
    .io_signedIn       (~(in_pipe_b_typ[0])),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:550:{26,38}, src/main/scala/chisel3/util/Valid.scala:130:26]
    .io_in             (intValue_res),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:535:26, :538:66, :539:13]
    .io_roundingMode   (in_pipe_b_rm),	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
    .io_out            (_i2f_io_out),
    .io_exceptionFlags (_i2f_io_exceptionFlags)
  );
  INToRecFN_1 i2f_1 (	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:549:23]
    .io_signedIn       (~(in_pipe_b_typ[0])),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:550:{26,38}, src/main/scala/chisel3/util/Valid.scala:130:26]
    .io_in             (intValue_res),	// @[generators/rocket-chip/src/main/scala/tile/FPU.scala:535:26, :538:66, :539:13]
    .io_roundingMode   (in_pipe_b_rm),	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
    .io_out            (_i2f_1_io_out),
    .io_exceptionFlags (_i2f_1_io_exceptionFlags)
  );
  assign io_out_bits_data = io_out_pipe_b_data;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
  assign io_out_bits_exc = io_out_pipe_b_exc;	// @[src/main/scala/chisel3/util/Valid.scala:130:26]
endmodule
