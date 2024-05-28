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

module AsyncQueueSink_6(
  input         clock,
                reset,
                io_deq_ready,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output        io_deq_valid,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output [2:0]  io_deq_bits_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output [1:0]  io_deq_bits_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output [3:0]  io_deq_bits_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output [5:0]  io_deq_bits_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output [2:0]  io_deq_bits_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output        io_deq_bits_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output [63:0] io_deq_bits_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output        io_deq_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_0_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_0_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_0_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_0_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_0_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_0_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_0_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_0_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_1_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_1_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_1_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_1_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_1_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_1_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_1_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_1_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_2_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_2_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_2_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_2_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_2_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_2_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_2_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_2_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_3_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_3_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_3_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_3_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_3_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_3_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_3_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_3_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_4_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_4_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_4_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_4_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_4_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_4_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_4_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_4_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_5_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_5_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_5_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_5_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_5_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_5_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_5_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_5_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_6_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_6_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_6_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_6_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_6_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_6_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_6_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_6_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_7_opcode,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [1:0]  io_async_mem_7_param,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_mem_7_size,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [5:0]  io_async_mem_7_source,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [2:0]  io_async_mem_7_sink,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_7_denied,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [63:0] io_async_mem_7_data,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_mem_7_corrupt,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output [3:0]  io_async_ridx,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input  [3:0]  io_async_widx,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output        io_async_safe_ridx_valid,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  input         io_async_safe_widx_valid,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
                io_async_safe_source_reset_n,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
  output        io_async_safe_sink_reset_n	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:135:14]
);

  wire             _io_deq_valid_output;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:162:29]
  wire             _source_valid_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:172:31]
  wire             _source_extend_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:171:31]
  wire             _sink_valid_0_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:168:33]
  wire [83:0]      _io_deq_bits_deq_bits_reg_io_q;	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25]
  wire [3:0]       _widx_widx_gray_io_q;	// @[generators/rocket-chip/src/main/scala/util/ShiftReg.scala:45:23]
  reg  [3:0]       ridx_ridx_bin;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25]
  wire [3:0]       _ridx_incremented_T = ridx_ridx_bin + {3'h0, io_deq_ready & _io_deq_valid_output};	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :53:43, :162:29, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  wire [3:0]       ridx_incremented = _source_valid_io_out ? _ridx_incremented_T : 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:{23,43}, :172:31]
  wire [2:0]       _index_T = ridx_incremented[2:0] ^ ridx_incremented[3:1];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:23, :54:{17,32}]
  wire [3:0]       ridx = {ridx_incremented[3], _index_T};	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:23, :54:17]
  wire             valid = _source_valid_io_out & ridx != _widx_widx_gray_io_q;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:54:17, :146:{28,36}, :172:31, generators/rocket-chip/src/main/scala/util/ShiftReg.scala:45:23]
  wire [2:0]       index = _index_T ^ {ridx_incremented[3], 2'h0};	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:23, :54:17, :152:{55,75}]
  wire [7:0][2:0]  _GEN = {{io_async_mem_7_opcode}, {io_async_mem_6_opcode}, {io_async_mem_5_opcode}, {io_async_mem_4_opcode}, {io_async_mem_3_opcode}, {io_async_mem_2_opcode}, {io_async_mem_1_opcode}, {io_async_mem_0_opcode}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  wire [7:0][1:0]  _GEN_0 = {{io_async_mem_7_param}, {io_async_mem_6_param}, {io_async_mem_5_param}, {io_async_mem_4_param}, {io_async_mem_3_param}, {io_async_mem_2_param}, {io_async_mem_1_param}, {io_async_mem_0_param}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  wire [7:0][3:0]  _GEN_1 = {{io_async_mem_7_size}, {io_async_mem_6_size}, {io_async_mem_5_size}, {io_async_mem_4_size}, {io_async_mem_3_size}, {io_async_mem_2_size}, {io_async_mem_1_size}, {io_async_mem_0_size}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  wire [7:0][5:0]  _GEN_2 = {{io_async_mem_7_source}, {io_async_mem_6_source}, {io_async_mem_5_source}, {io_async_mem_4_source}, {io_async_mem_3_source}, {io_async_mem_2_source}, {io_async_mem_1_source}, {io_async_mem_0_source}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  wire [7:0][2:0]  _GEN_3 = {{io_async_mem_7_sink}, {io_async_mem_6_sink}, {io_async_mem_5_sink}, {io_async_mem_4_sink}, {io_async_mem_3_sink}, {io_async_mem_2_sink}, {io_async_mem_1_sink}, {io_async_mem_0_sink}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  wire [7:0]       _GEN_4 = {{io_async_mem_7_denied}, {io_async_mem_6_denied}, {io_async_mem_5_denied}, {io_async_mem_4_denied}, {io_async_mem_3_denied}, {io_async_mem_2_denied}, {io_async_mem_1_denied}, {io_async_mem_0_denied}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  wire [7:0][63:0] _GEN_5 = {{io_async_mem_7_data}, {io_async_mem_6_data}, {io_async_mem_5_data}, {io_async_mem_4_data}, {io_async_mem_3_data}, {io_async_mem_2_data}, {io_async_mem_1_data}, {io_async_mem_0_data}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  wire [7:0]       _GEN_6 = {{io_async_mem_7_corrupt}, {io_async_mem_6_corrupt}, {io_async_mem_5_corrupt}, {io_async_mem_4_corrupt}, {io_async_mem_3_corrupt}, {io_async_mem_2_corrupt}, {io_async_mem_1_corrupt}, {io_async_mem_0_corrupt}};	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
  reg              valid_reg;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:161:56]
  assign _io_deq_valid_output = valid_reg & _source_valid_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:161:56, :162:29, :172:31]
  reg  [3:0]       ridx_gray;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:164:55]
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      ridx_ridx_bin <= 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :53:23]
      valid_reg <= 1'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:161:56]
      ridx_gray <= 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:23, :164:55]
    end
    else begin
      if (_source_valid_io_out)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:172:31]
        ridx_ridx_bin <= _ridx_incremented_T;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :53:43]
      else	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:172:31]
        ridx_ridx_bin <= 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :53:23]
      valid_reg <= valid;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:146:28, :161:56]
      ridx_gray <= ridx;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:54:17, :164:55]
    end
  end // always @(posedge, posedge)
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
        ridx_ridx_bin = _RANDOM[/*Zero width*/ 1'b0][3:0];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25]
        valid_reg = _RANDOM[/*Zero width*/ 1'b0][4];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :161:56]
        ridx_gray = _RANDOM[/*Zero width*/ 1'b0][8:5];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :164:55]
      `endif // RANDOMIZE_REG_INIT
      if (reset) begin
        ridx_ridx_bin = 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :53:23]
        valid_reg = 1'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:161:56]
        ridx_gray = 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:23, :164:55]
      end
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  AsyncResetSynchronizerShiftReg_w4_d3_i0 widx_widx_gray (	// @[generators/rocket-chip/src/main/scala/util/ShiftReg.scala:45:23]
    .clock (clock),
    .reset (reset),
    .io_d  (io_async_widx),
    .io_q  (_widx_widx_gray_io_q)
  );
  ClockCrossingReg_w84 io_deq_bits_deq_bits_reg (	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25]
    .clock (clock),
    .io_d  ({_GEN[index], _GEN_0[index], _GEN_1[index], _GEN_2[index], _GEN_3[index], _GEN_4[index], _GEN_5[index], _GEN_6[index]}),	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:152:55, generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:209:24]
    .io_q  (_io_deq_bits_deq_bits_reg_io_q),
    .io_en (valid)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:146:28]
  );
  AsyncValidSync sink_valid_0 (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:168:33]
    .io_in  (1'h1),
    .io_out (_sink_valid_0_io_out),
    .clock  (clock),
    .reset  (reset | ~io_async_safe_source_reset_n)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:173:{42,45}]
  );
  AsyncValidSync sink_valid_1 (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:169:33]
    .io_in  (_sink_valid_0_io_out),	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:168:33]
    .io_out (io_async_safe_ridx_valid),
    .clock  (clock),
    .reset  (reset | ~io_async_safe_source_reset_n)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:173:45, :174:42]
  );
  AsyncValidSync source_extend (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:171:31]
    .io_in  (io_async_safe_widx_valid),
    .io_out (_source_extend_io_out),
    .clock  (clock),
    .reset  (reset | ~io_async_safe_source_reset_n)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:173:45, :175:42]
  );
  AsyncValidSync source_valid (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:172:31]
    .io_in  (_source_extend_io_out),	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:171:31]
    .io_out (_source_valid_io_out),
    .clock  (clock),
    .reset  (reset)
  );
  assign io_deq_valid = _io_deq_valid_output;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:162:29]
  assign io_deq_bits_opcode = _io_deq_bits_deq_bits_reg_io_q[83:81];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_deq_bits_param = _io_deq_bits_deq_bits_reg_io_q[80:79];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_deq_bits_size = _io_deq_bits_deq_bits_reg_io_q[78:75];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_deq_bits_source = _io_deq_bits_deq_bits_reg_io_q[74:69];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_deq_bits_sink = _io_deq_bits_deq_bits_reg_io_q[68:66];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_deq_bits_denied = _io_deq_bits_deq_bits_reg_io_q[65];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_deq_bits_data = _io_deq_bits_deq_bits_reg_io_q[64:1];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_deq_bits_corrupt = _io_deq_bits_deq_bits_reg_io_q[0];	// @[generators/rocket-chip/src/main/scala/util/SynchronizerReg.scala:207:25, :211:26]
  assign io_async_ridx = ridx_gray;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:164:55]
  assign io_async_safe_sink_reset_n = ~reset;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:189:25]
endmodule

