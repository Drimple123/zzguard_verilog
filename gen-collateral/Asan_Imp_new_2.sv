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

module Asan_Imp_new_2(
  input          clock,
                 reset,
  output         io_rocc_in_ready,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  input          io_rocc_in_valid,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  input  [54:0]  io_rocc_in_bits,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  output         io_din_ready,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  input          io_din_valid,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  input  [159:0] io_din_bits,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  input          io_mem_acc_io_ready,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  output         io_mem_acc_io_valid,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  output [7:0]   io_mem_acc_io_bits_tag,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  output [39:0]  io_mem_acc_io_bits_addr,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  output [4:0]   io_mem_acc_io_bits_cmd,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  output [1:0]   io_mem_acc_io_bits_size,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  input          io_valid_mem,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  input  [7:0]   io_data_in,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
                 io_resp_tag,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
  output         io_can_use,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
                 io_uaf,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
                 io_overflow	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:15:16]
);

  wire        _addr_fifo_io_deq_valid;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:76:27]
  wire [39:0] _addr_fifo_io_deq_bits;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:76:27]
  wire        _io_rocc_in_ready_output = 1'h1;
  reg         mask;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23]
  reg         can_use_r;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:70:28]
  reg         uaf_r;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:71:28]
  reg         overflow_r;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:72:28]
  wire        _addr_fifo_io_deq_ready_T_1 = io_valid_mem & io_resp_tag == 8'h5;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:80:{44,60}, :143:28]
  reg  [39:0] offset;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:116:25]
  wire [39:0] fifo_addr = {5'h0, io_din_bits[103:69]} + offset;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:67:32, :80:60, :116:25, :126:32, :129:{29,37}, :142:28]
  wire        _GEN = _io_rocc_in_ready_output & io_rocc_in_valid & io_rocc_in_bits[6:0] == 7'h6;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:64:34, :117:{26,39}]
  wire        _GEN_0 = _addr_fifo_io_deq_ready_T_1 & _addr_fifo_io_deq_valid;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:76:27, :80:44, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  wire        _GEN_1 = io_data_in == 8'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:165:30]
  wire        _GEN_2 = io_data_in >= {3'h0, _addr_fifo_io_deq_bits[4:0]};	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:76:27, :171:{30,54}]
  always @(posedge clock) begin
    if (reset) begin
      mask <= 1'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23]
      can_use_r <= 1'h1;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:70:28]
      uaf_r <= 1'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:71:28]
      overflow_r <= 1'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:72:28]
      offset <= 40'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:116:25]
    end
    else begin
      mask <= _GEN | mask;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23, :117:{26,48}, :119:16]
      can_use_r <= ~_GEN_0 | ~(&io_data_in) & (_GEN_1 | _GEN_2);	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:70:28, :159:32, :160:{25,35}, :162:23, :165:{30,38}, :167:23, :171:{30,60}, :184:19, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      uaf_r <= _GEN_0 & (&io_data_in);	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:71:28, :159:32, :160:{25,35}, :183:19, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      overflow_r <= _GEN_0 & ~((&io_data_in) | _GEN_1) & ~_GEN_2;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23, :70:28, :72:28, :159:32, :160:{25,35}, :163:23, :165:{30,38}, :168:23, :171:{30,60}, :174:23, :179:23, :185:19, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      if (_GEN)	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:117:26]
        offset <= io_rocc_in_bits[54:15];	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:62:34, :116:25]
    end
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:1];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [1:0] i = 2'h0; i < 2'h2; i += 2'h1) begin
          _RANDOM[i[0]] = `RANDOM;
        end
        mask = _RANDOM[1'h0][0];	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23]
        can_use_r = _RANDOM[1'h0][1];	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23, :70:28]
        uaf_r = _RANDOM[1'h0][2];	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23, :71:28]
        overflow_r = _RANDOM[1'h0][3];	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23, :72:28]
        offset = {_RANDOM[1'h0][31:4], _RANDOM[1'h1][11:0]};	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23, :116:25]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  Queue_142 addr_fifo (	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:76:27]
    .clock        (clock),
    .reset        (reset),
    .io_enq_valid (io_din_valid),
    .io_enq_bits  (io_din_bits[103:64]),	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:67:32]
    .io_deq_ready (_addr_fifo_io_deq_ready_T_1),	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:80:44]
    .io_deq_valid (_addr_fifo_io_deq_valid),
    .io_deq_bits  (_addr_fifo_io_deq_bits)
  );
  assign io_rocc_in_ready = _io_rocc_in_ready_output;
  assign io_din_ready = io_mem_acc_io_ready;
  assign io_mem_acc_io_valid = io_din_valid & mask;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:54:23, :140:41]
  assign io_mem_acc_io_bits_tag = 8'h5;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:143:28]
  assign io_mem_acc_io_bits_addr = fifo_addr;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:126:32]
  assign io_mem_acc_io_bits_cmd = 5'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:142:28]
  assign io_mem_acc_io_bits_size = 2'h0;
  assign io_can_use = can_use_r;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:70:28]
  assign io_uaf = uaf_r;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:71:28]
  assign io_overflow = overflow_r;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/asan.scala:72:28]
endmodule

