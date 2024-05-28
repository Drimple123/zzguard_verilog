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

module MulDiv(
  input         clock,
                reset,
  output        io_req_ready,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  input         io_req_valid,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  input  [3:0]  io_req_bits_fn,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  input         io_req_bits_dw,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  input  [63:0] io_req_bits_in1,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
                io_req_bits_in2,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  input  [4:0]  io_req_bits_tag,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  input         io_kill,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
                io_resp_ready,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  output        io_resp_valid,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  output [63:0] io_resp_bits_data,	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
  output [4:0]  io_resp_bits_tag	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:42:14]
);

  reg  [2:0]   state;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22]
  reg          req_dw;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16]
  reg  [4:0]   req_tag;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16]
  reg  [6:0]   count;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18]
  reg          neg_out;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:54:20]
  reg          isHi;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:55:17]
  reg          resHi;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:56:18]
  reg  [64:0]  divisor;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:57:20]
  reg  [129:0] remainder;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:58:22]
  wire [63:0]  result = resHi ? remainder[128:65] : remainder[63:0];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:56:18, :58:22, :86:{19,36,57}]
  wire [31:0]  loOut = req_dw | state[0] ? result[31:0] : result[63:32];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :50:16, :86:19, :172:23, :173:{18,65,82}]
  wire         _io_resp_valid_output = state == 3'h6 | (&state);	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :111:32, :178:{27,42,51}]
  wire         _io_req_ready_output = state == 3'h0;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :179:25]
  wire [5:0]   _eOutPos_T =
    {|(remainder[63:32]), (|(remainder[63:32])) ? {|(remainder[63:48]), (|(remainder[63:48])) ? {|(remainder[63:56]), (|(remainder[63:56])) ? {|(remainder[63:60]), (|(remainder[63:60])) ? (remainder[63] ? 2'h3 : remainder[62] ? 2'h2 : {1'h0, remainder[61]}) : remainder[59] ? 2'h3 : remainder[58] ? 2'h2 : {1'h0, remainder[57]}} : {|(remainder[55:52]), (|(remainder[55:52])) ? (remainder[55] ? 2'h3 : remainder[54] ? 2'h2 : {1'h0, remainder[53]}) : remainder[51] ? 2'h3 : remainder[50] ? 2'h2 : {1'h0, remainder[49]}}} : {|(remainder[47:40]), (|(remainder[47:40])) ? {|(remainder[47:44]), (|(remainder[47:44])) ? (remainder[47] ? 2'h3 : remainder[46] ? 2'h2 : {1'h0, remainder[45]}) : remainder[43] ? 2'h3 : remainder[42] ? 2'h2 : {1'h0, remainder[41]}} : {|(remainder[39:36]), (|(remainder[39:36])) ? (remainder[39] ? 2'h3 : remainder[38] ? 2'h2 : {1'h0, remainder[37]}) : remainder[35] ? 2'h3 : remainder[34] ? 2'h2 : {1'h0, remainder[33]}}}} : {|(remainder[31:16]), (|(remainder[31:16])) ? {|(remainder[31:24]), (|(remainder[31:24])) ? {|(remainder[31:28]), (|(remainder[31:28])) ? (remainder[31] ? 2'h3 : remainder[30] ? 2'h2 : {1'h0, remainder[29]}) : remainder[27] ? 2'h3 : remainder[26] ? 2'h2 : {1'h0, remainder[25]}} : {|(remainder[23:20]), (|(remainder[23:20])) ? (remainder[23] ? 2'h3 : remainder[22] ? 2'h2 : {1'h0, remainder[21]}) : remainder[19] ? 2'h3 : remainder[18] ? 2'h2 : {1'h0, remainder[17]}}} : {|(remainder[15:8]), (|(remainder[15:8])) ? {|(remainder[15:12]), (|(remainder[15:12])) ? (remainder[15] ? 2'h3 : remainder[14] ? 2'h2 : {1'h0, remainder[13]}) : remainder[11] ? 2'h3 : remainder[10] ? 2'h2 : {1'h0, remainder[9]}} : {|(remainder[7:4]), (|(remainder[7:4])) ? (remainder[7] ? 2'h3 : remainder[6] ? 2'h2 : {1'h0, remainder[5]}) : remainder[3] ? 2'h3 : remainder[2] ? 2'h2 : {1'h0, remainder[1]}}}}}
    - {|(divisor[63:32]), (|(divisor[63:32])) ? {|(divisor[63:48]), (|(divisor[63:48])) ? {|(divisor[63:56]), (|(divisor[63:56])) ? {|(divisor[63:60]), (|(divisor[63:60])) ? (divisor[63] ? 2'h3 : divisor[62] ? 2'h2 : {1'h0, divisor[61]}) : divisor[59] ? 2'h3 : divisor[58] ? 2'h2 : {1'h0, divisor[57]}} : {|(divisor[55:52]), (|(divisor[55:52])) ? (divisor[55] ? 2'h3 : divisor[54] ? 2'h2 : {1'h0, divisor[53]}) : divisor[51] ? 2'h3 : divisor[50] ? 2'h2 : {1'h0, divisor[49]}}} : {|(divisor[47:40]), (|(divisor[47:40])) ? {|(divisor[47:44]), (|(divisor[47:44])) ? (divisor[47] ? 2'h3 : divisor[46] ? 2'h2 : {1'h0, divisor[45]}) : divisor[43] ? 2'h3 : divisor[42] ? 2'h2 : {1'h0, divisor[41]}} : {|(divisor[39:36]), (|(divisor[39:36])) ? (divisor[39] ? 2'h3 : divisor[38] ? 2'h2 : {1'h0, divisor[37]}) : divisor[35] ? 2'h3 : divisor[34] ? 2'h2 : {1'h0, divisor[33]}}}} : {|(divisor[31:16]), (|(divisor[31:16])) ? {|(divisor[31:24]), (|(divisor[31:24])) ? {|(divisor[31:28]), (|(divisor[31:28])) ? (divisor[31] ? 2'h3 : divisor[30] ? 2'h2 : {1'h0, divisor[29]}) : divisor[27] ? 2'h3 : divisor[26] ? 2'h2 : {1'h0, divisor[25]}} : {|(divisor[23:20]), (|(divisor[23:20])) ? (divisor[23] ? 2'h3 : divisor[22] ? 2'h2 : {1'h0, divisor[21]}) : divisor[19] ? 2'h3 : divisor[18] ? 2'h2 : {1'h0, divisor[17]}}} : {|(divisor[15:8]), (|(divisor[15:8])) ? {|(divisor[15:12]), (|(divisor[15:12])) ? (divisor[15] ? 2'h3 : divisor[14] ? 2'h2 : {1'h0, divisor[13]}) : divisor[11] ? 2'h3 : divisor[10] ? 2'h2 : {1'h0, divisor[9]}} : {|(divisor[7:4]), (|(divisor[7:4])) ? (divisor[7] ? 2'h3 : divisor[6] ? 2'h2 : {1'h0, divisor[5]}) : divisor[3] ? 2'h3 : divisor[2] ? 2'h2 : {1'h0, divisor[1]}}}}};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :57:20, :58:22, :86:57, :147:36, :149:35, src/main/scala/chisel3/util/CircuitMath.scala:28:8, :30:{10,12}, :33:17, :34:17, :35:22, :36:{10,21}]
  wire [72:0]  _prod_T_4 = {{65{remainder[64]}}, remainder[7:0]} * {{8{divisor[64]}}, divisor} + {{8{remainder[129]}}, remainder[129:65]};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:57:20, :58:22, :104:31, :105:31, :106:24, :109:{38,67,76}]
  wire [64:0]  _subtractor_T_1 = remainder[128:64] - divisor;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:57:20, :58:22, :85:{29,37}]
  wire         _eOut_T_9 = count == 7'h0;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :113:54, :143:24]
  wire         divby0 = _eOut_T_9 & ~(_subtractor_T_1[64]);	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:85:37, :130:28, :143:{24,32,35}]
  wire [2:0]   decoded_invInputs = ~(io_req_bits_fn[2:0]);	// @[src/main/scala/chisel3/util/experimental/decode/decoder.scala:39:16, src/main/scala/chisel3/util/pla.scala:78:21]
  wire [1:0]   _decoded_T_2 = {decoded_invInputs[1], decoded_invInputs[2]};	// @[src/main/scala/chisel3/util/pla.scala:78:21, :91:29, :98:53]
  wire         lhs_sign = (|{decoded_invInputs[0], &_decoded_T_2}) & (io_req_bits_dw ? io_req_bits_in1[63] : io_req_bits_in1[31]);	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:78:{23,29,38,48}, src/main/scala/chisel3/util/pla.scala:78:21, :91:29, :98:{53,70}, :114:{19,36}]
  wire         rhs_sign = (|{&_decoded_T_2, &{decoded_invInputs[0], io_req_bits_fn[2]}}) & (io_req_bits_dw ? io_req_bits_in2[63] : io_req_bits_in2[31]);	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:78:{23,29,38,48}, src/main/scala/chisel3/util/pla.scala:78:21, :90:45, :91:29, :98:{53,70}, :114:{19,36}]
  wire         _GEN = state == 3'h1;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :89:39]
  wire         _GEN_0 = state == 3'h5;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :98:39]
  wire         _GEN_1 = state == 3'h2;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :103:39]
  wire [64:0]  _eOutMask_T_2 = $signed(65'sh10000000000000000 >>> {59'h0, count[2:0], 3'h0});	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :51:18, :113:{44,72}]
  wire         eOut = count != 7'h7 & (|count) & ~isHi & (remainder[63:0] & ~(_eOutMask_T_2[63:0])) == 64'h0;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :55:17, :58:22, :86:57, :113:{44,91}, :114:{45,83}, :115:{7,13,24,26,37}]
  wire         _GEN_2 = _GEN_1 & (eOut | count == 7'h7);	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :98:57, :103:{39,50}, :114:45, :115:13, :121:{16,25,55}, :122:13]
  wire         _GEN_3 = state == 3'h3;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :96:11, :126:39]
  wire         _GEN_4 = count == 7'h40;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :116:38, :135:17]
  wire         _GEN_5 = _io_req_ready_output & io_req_valid;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:179:25, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  wire [1:0]   _decoded_orMatrixOutputs_T_4 = {&{io_req_bits_fn[0], decoded_invInputs[2]}, io_req_bits_fn[1]};	// @[src/main/scala/chisel3/util/pla.scala:78:21, :90:45, :91:29, :98:{53,70}, :114:19]
  wire [128:0] eOutRes = {remainder[129:65], remainder[63:0]} >> 6'h0 - {count[2:0], 3'h0};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :51:18, :58:22, :86:57, :104:{21,31}, :113:72, :116:{27,38}]
  always @(posedge clock) begin
    if (reset)
      state <= 3'h0;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22]
    else if (_GEN_5)	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35]
      state <= decoded_invInputs[2] ? 3'h2 : {1'h0, ~(lhs_sign | rhs_sign), 1'h1};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :50:16, :75:50, :78:23, :103:39, :162:{17,36,46}, src/main/scala/chisel3/util/pla.scala:78:21, :91:29]
    else if (io_resp_ready & _io_resp_valid_output | io_kill)	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:158:22, :178:42, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      state <= 3'h0;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22]
    else if (_GEN_3 & _GEN_4)	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:103:50, :126:{39,50}, :135:{17,42}, :136:13]
      state <= {1'h1, ~neg_out, 1'h1};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :54:20, :75:50, :136:19]
    else if (_GEN_2)	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:98:57, :103:50, :121:55, :122:13]
      state <= 3'h6;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :111:32]
    else if (_GEN_0)	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:98:39]
      state <= 3'h7;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :100:11]
    else if (_GEN)	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:89:39]
      state <= 3'h3;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :96:11]
    if (_GEN_5) begin	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35]
      req_dw <= io_req_bits_dw;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16]
      req_tag <= io_req_bits_tag;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16]
      count <= {4'h0, decoded_invInputs[2] & ~io_req_bits_dw, 2'h0};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :75:60, :165:{11,46}, src/main/scala/chisel3/util/pla.scala:78:21, :91:29, :114:36]
      neg_out <= (|_decoded_orMatrixOutputs_T_4) ? lhs_sign : lhs_sign != rhs_sign;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:54:20, :78:23, :166:{19,46}, src/main/scala/chisel3/util/pla.scala:114:{19,36}]
      isHi <= |_decoded_orMatrixOutputs_T_4;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:55:17, src/main/scala/chisel3/util/pla.scala:114:{19,36}]
      divisor <= {rhs_sign, io_req_bits_dw ? io_req_bits_in2[63:32] : {32{rhs_sign}}, io_req_bits_in2[31:0]};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:57:20, :78:23, :79:{17,29,43}, :80:15, :167:19]
      remainder <= {66'h0, io_req_bits_dw ? io_req_bits_in1[63:32] : {32{lhs_sign}}, io_req_bits_in1[31:0]};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:58:22, :78:23, :79:{17,29,43}, :80:15, :91:17, :168:15]
    end
    else begin	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35]
      if (_GEN_3) begin	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:126:39]
        if (_eOut_T_9 & ~divby0 & _eOutPos_T != 6'h3F) begin	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:143:{24,32}, :149:{21,35}, :150:{35,43,54}]
          count <= {1'h0, ~_eOutPos_T};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :51:18, :149:{21,35}, :153:15]
          remainder <= {3'h0, {63'h0, remainder[63:0]} << ~_eOutPos_T};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :58:22, :86:57, :149:{21,35}, :152:{19,39}]
        end
        else begin	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:150:43]
          count <= count + 7'h1;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :120:20, :141:20]
          remainder <= {1'h0, _subtractor_T_1[64] ? remainder[127:64] : _subtractor_T_1[63:0], remainder[63:0], ~(_subtractor_T_1[64])};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :58:22, :85:37, :86:57, :130:28, :131:{14,24,45,67}, :134:15]
        end
      end
      else if (_GEN_1) begin	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:103:39]
        count <= count + 7'h1;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :120:20]
        remainder <= {_prod_T_4[72:8], count == 7'h6 & neg_out, eOut ? eOutRes[63:0] : {_prod_T_4[7:0], remainder[63:8]}};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:51:18, :54:20, :58:22, :106:24, :109:76, :110:{25,38}, :111:{32,61}, :115:13, :116:27, :117:{37,55}, :118:21]
      end
      else if (_GEN_0 | _GEN & remainder[63])	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:58:22, :89:{39,57}, :90:{20,27}, :91:17, :98:{39,57}, :99:15]
        remainder <= {66'h0, 64'h0 - result};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :58:22, :86:19, :87:27, :91:17, :115:37]
      neg_out <= ~(_GEN_3 & divby0 & ~isHi) & neg_out;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:54:20, :55:17, :126:{39,50}, :143:32, :156:{21,28,38}]
      if (_GEN & divisor[63])	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:57:20, :89:{39,57}, :93:{18,25}, :94:15]
        divisor <= _subtractor_T_1;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:57:20, :85:37]
    end
    resHi <= ~_GEN_5 & (_GEN_3 & _GEN_4 | _GEN_2 ? isHi : ~_GEN_0 & resHi);	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:55:17, :56:18, :98:{39,57}, :101:11, :103:50, :121:55, :122:13, :123:13, :126:{39,50}, :135:{17,42}, :137:13, :161:22, :164:11, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:10];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [3:0] i = 4'h0; i < 4'hB; i += 4'h1) begin
          _RANDOM[i] = `RANDOM;
        end
        state = _RANDOM[4'h0][2:0];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22]
        req_dw = _RANDOM[4'h0][7];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:48:22, :50:16]
        req_tag = _RANDOM[4'h4][12:8];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16]
        count = _RANDOM[4'h4][19:13];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :51:18]
        neg_out = _RANDOM[4'h4][20];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :54:20]
        isHi = _RANDOM[4'h4][21];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :55:17]
        resHi = _RANDOM[4'h4][22];	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :56:18]
        divisor = {_RANDOM[4'h4][31:23], _RANDOM[4'h5], _RANDOM[4'h6][23:0]};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :57:20]
        remainder = {_RANDOM[4'h6][31:24], _RANDOM[4'h7], _RANDOM[4'h8], _RANDOM[4'h9], _RANDOM[4'hA][25:0]};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:57:20, :58:22]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_req_ready = _io_req_ready_output;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:179:25]
  assign io_resp_valid = _io_resp_valid_output;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:178:42]
  assign io_resp_bits_data = {req_dw ? result[63:32] : {32{loOut[31]}}, loOut};	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16, :86:19, :173:{18,65}, :174:{18,39,50}, :177:27]
  assign io_resp_bits_tag = req_tag;	// @[generators/rocket-chip/src/main/scala/rocket/Multiplier.scala:50:16]
endmodule
