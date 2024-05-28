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

module AsyncQueueSource_13(
  input         clock,
                reset,
  output        io_enq_ready,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  input         io_enq_valid,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  input  [31:0] io_enq_bits,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  output [31:0] io_async_mem_0,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_mem_1,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_mem_2,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_mem_3,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_mem_4,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_mem_5,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_mem_6,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_mem_7,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  input  [3:0]  io_async_ridx,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  output [3:0]  io_async_widx,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  input         io_async_safe_ridx_valid,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  output        io_async_safe_widx_valid,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
                io_async_safe_source_reset_n,	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
  input         io_async_safe_sink_reset_n	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:71:14]
);

  wire        _io_enq_ready_output;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:89:29]
  wire        _sink_valid_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:104:30]
  wire        _sink_extend_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:103:30]
  wire        _source_valid_0_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:100:32]
  wire [3:0]  _ridx_ridx_gray_io_q;	// @[generators/rocket-chip/src/main/scala/util/ShiftReg.scala:45:23]
  reg  [31:0] mem_0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  reg  [31:0] mem_1;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  reg  [31:0] mem_2;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  reg  [31:0] mem_3;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  reg  [31:0] mem_4;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  reg  [31:0] mem_5;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  reg  [31:0] mem_6;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  reg  [31:0] mem_7;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  wire        _widx_T_1 = _io_enq_ready_output & io_enq_valid;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:89:29, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  reg  [3:0]  widx_widx_bin;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25]
  reg         ready_reg;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:88:56]
  assign _io_enq_ready_output = ready_reg & _sink_valid_io_out;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:88:56, :89:29, :104:30]
  reg  [3:0]  widx_gray;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:91:55]
  wire [2:0]  index = widx_gray[2:0] ^ {widx_gray[3], 2'h0};	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:85:{52,64,80,93}, :91:55]
  always @(posedge clock) begin
    if (_widx_T_1 & index == 3'h0)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_0 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
    if (_widx_T_1 & index == 3'h1)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_1 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
    if (_widx_T_1 & index == 3'h2)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_2 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
    if (_widx_T_1 & index == 3'h3)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_3 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
    if (_widx_T_1 & index == 3'h4)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_4 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
    if (_widx_T_1 & index == 3'h5)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_5 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
    if (_widx_T_1 & index == 3'h6)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_6 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
    if (_widx_T_1 & (&index))	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :85:64, :86:{22,35}, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      mem_7 <= io_enq_bits;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  end // always @(posedge)
  wire [3:0]  _widx_incremented_T = widx_widx_bin + {3'h0, _widx_T_1};	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :53:43, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  wire [3:0]  widx_incremented = _sink_valid_io_out ? _widx_incremented_T : 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:{23,43}, :104:30]
  wire [3:0]  widx = {widx_incremented[3], widx_incremented[2:0] ^ widx_incremented[3:1]};	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:53:23, :54:{17,32}]
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      widx_widx_bin <= 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25]
      ready_reg <= 1'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :88:56]
      widx_gray <= 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:91:55]
    end
    else begin
      if (_sink_valid_io_out)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:104:30]
        widx_widx_bin <= _widx_incremented_T;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :53:43]
      else	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:104:30]
        widx_widx_bin <= 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25]
      ready_reg <= _sink_valid_io_out & widx != (_ridx_ridx_gray_io_q ^ 4'hC);	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:54:17, :83:{26,34,44}, :88:56, :104:30, generators/rocket-chip/src/main/scala/util/ShiftReg.scala:45:23]
      widx_gray <= widx;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:54:17, :91:55]
    end
  end // always @(posedge, posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:8];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [3:0] i = 4'h0; i < 4'h9; i += 4'h1) begin
          _RANDOM[i] = `RANDOM;
        end
        mem_0 = _RANDOM[4'h0];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        mem_1 = _RANDOM[4'h1];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        mem_2 = _RANDOM[4'h2];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        mem_3 = _RANDOM[4'h3];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        mem_4 = _RANDOM[4'h4];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        mem_5 = _RANDOM[4'h5];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        mem_6 = _RANDOM[4'h6];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        mem_7 = _RANDOM[4'h7];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
        widx_widx_bin = _RANDOM[4'h8][3:0];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25]
        ready_reg = _RANDOM[4'h8][4];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :88:56]
        widx_gray = _RANDOM[4'h8][8:5];	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25, :91:55]
      `endif // RANDOMIZE_REG_INIT
      if (reset) begin
        widx_widx_bin = 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:52:25]
        ready_reg = 1'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16, :88:56]
        widx_gray = 4'h0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:91:55]
      end
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  AsyncResetSynchronizerShiftReg_w4_d3_i0 ridx_ridx_gray (	// @[generators/rocket-chip/src/main/scala/util/ShiftReg.scala:45:23]
    .clock (clock),
    .reset (reset),
    .io_d  (io_async_ridx),
    .io_q  (_ridx_ridx_gray_io_q)
  );
  AsyncValidSync source_valid_0 (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:100:32]
    .io_in  (1'h1),	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:79:28]
    .io_out (_source_valid_0_io_out),
    .clock  (clock),
    .reset  (reset | ~io_async_safe_sink_reset_n)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:105:{43,46}]
  );
  AsyncValidSync source_valid_1 (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:101:32]
    .io_in  (_source_valid_0_io_out),	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:100:32]
    .io_out (io_async_safe_widx_valid),
    .clock  (clock),
    .reset  (reset | ~io_async_safe_sink_reset_n)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:105:46, :106:43]
  );
  AsyncValidSync sink_extend (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:103:30]
    .io_in  (io_async_safe_ridx_valid),
    .io_out (_sink_extend_io_out),
    .clock  (clock),
    .reset  (reset | ~io_async_safe_sink_reset_n)	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:105:46, :107:43]
  );
  AsyncValidSync sink_valid (	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:104:30]
    .io_in  (_sink_extend_io_out),	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:103:30]
    .io_out (_sink_valid_io_out),
    .clock  (clock),
    .reset  (reset)
  );
  assign io_enq_ready = _io_enq_ready_output;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:89:29]
  assign io_async_mem_0 = mem_0;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_mem_1 = mem_1;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_mem_2 = mem_2;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_mem_3 = mem_3;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_mem_4 = mem_4;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_mem_5 = mem_5;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_mem_6 = mem_6;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_mem_7 = mem_7;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:80:16]
  assign io_async_widx = widx_gray;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:91:55]
  assign io_async_safe_source_reset_n = ~reset;	// @[generators/rocket-chip/src/main/scala/util/AsyncQueue.scala:121:27]
endmodule

