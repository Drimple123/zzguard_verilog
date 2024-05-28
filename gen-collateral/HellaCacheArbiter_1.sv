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

module HellaCacheArbiter_1(
  input         clock,
  output        io_requestor_0_req_ready,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_requestor_0_req_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [39:0] io_requestor_0_req_bits_addr,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_requestor_0_s1_kill,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_0_s2_nack,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_0_resp_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [63:0] io_requestor_0_resp_bits_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_0_s2_xcpt_ae_ld,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_req_ready,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_requestor_1_req_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [39:0] io_requestor_1_req_bits_addr,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [6:0]  io_requestor_1_req_bits_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [4:0]  io_requestor_1_req_bits_cmd,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [1:0]  io_requestor_1_req_bits_size,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_requestor_1_req_bits_signed,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [1:0]  io_requestor_1_req_bits_dprv,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_requestor_1_req_bits_phys,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_s1_kill,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [63:0] io_requestor_1_s1_data_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [7:0]  io_requestor_1_s1_data_mask,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_1_s2_nack,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_requestor_1_s2_kill,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [31:0] io_requestor_1_s2_paddr,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_1_resp_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [39:0] io_requestor_1_resp_bits_addr,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [6:0]  io_requestor_1_resp_bits_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [4:0]  io_requestor_1_resp_bits_cmd,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [1:0]  io_requestor_1_resp_bits_size,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_1_resp_bits_signed,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [1:0]  io_requestor_1_resp_bits_dprv,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_1_resp_bits_dv,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [63:0] io_requestor_1_resp_bits_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [7:0]  io_requestor_1_resp_bits_mask,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_1_resp_bits_replay,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_resp_bits_has_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [63:0] io_requestor_1_resp_bits_data_word_bypass,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_resp_bits_data_raw,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_resp_bits_store_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_requestor_1_replay_next,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_s2_xcpt_ma_ld,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_s2_xcpt_ma_st,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_s2_xcpt_pf_ld,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_s2_xcpt_pf_st,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_s2_xcpt_ae_ld,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_s2_xcpt_ae_st,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_ordered,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_perf_acquire,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_perf_release,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_requestor_1_perf_tlbMiss,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_mem_req_ready,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_mem_req_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [39:0] io_mem_req_bits_addr,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [6:0]  io_mem_req_bits_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [4:0]  io_mem_req_bits_cmd,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [1:0]  io_mem_req_bits_size,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_mem_req_bits_signed,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [1:0]  io_mem_req_bits_dprv,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_mem_req_bits_phys,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_s1_kill,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [63:0] io_mem_s1_data_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output [7:0]  io_mem_s1_data_mask,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_mem_s2_nack,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  output        io_mem_s2_kill,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [31:0] io_mem_s2_paddr,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_mem_resp_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [39:0] io_mem_resp_bits_addr,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [6:0]  io_mem_resp_bits_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [4:0]  io_mem_resp_bits_cmd,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [1:0]  io_mem_resp_bits_size,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_mem_resp_bits_signed,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [1:0]  io_mem_resp_bits_dprv,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_mem_resp_bits_dv,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [63:0] io_mem_resp_bits_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [7:0]  io_mem_resp_bits_mask,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_mem_resp_bits_replay,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_resp_bits_has_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input  [63:0] io_mem_resp_bits_data_word_bypass,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_resp_bits_data_raw,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_resp_bits_store_data,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
  input         io_mem_replay_next,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_s2_xcpt_ma_ld,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_s2_xcpt_ma_st,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_s2_xcpt_pf_ld,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_s2_xcpt_pf_st,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_s2_xcpt_ae_ld,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_s2_xcpt_ae_st,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_ordered,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_perf_acquire,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_perf_release,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
                io_mem_perf_tlbMiss	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14]
);

  reg s1_id;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:20:20]
  reg s2_id;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:21:24]
  always @(posedge clock) begin
    s1_id <= ~io_requestor_0_req_valid;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:20:20, :34:35, :35:15, :50:26]
    s2_id <= s1_id;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:20:20, :21:24]
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
        s1_id = _RANDOM[/*Zero width*/ 1'b0][0];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:20:20]
        s2_id = _RANDOM[/*Zero width*/ 1'b0][1];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:20:20, :21:24]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_requestor_0_req_ready = io_mem_req_ready;
  assign io_requestor_0_s2_nack = io_mem_s2_nack & ~s2_id;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:21:24, :52:21, :67:49]
  assign io_requestor_0_resp_valid = io_mem_resp_valid & ~(io_mem_resp_bits_tag[0]);	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:60:{41,57}, :61:39]
  assign io_requestor_0_resp_bits_data = io_mem_resp_bits_data;
  assign io_requestor_0_s2_xcpt_ae_ld = io_mem_s2_xcpt_ae_ld;
  assign io_requestor_1_req_ready = io_mem_req_ready & ~io_requestor_0_req_valid;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:28:{64,67}]
  assign io_requestor_1_s2_nack = io_mem_s2_nack & s2_id;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:21:24, :67:49]
  assign io_requestor_1_s2_paddr = io_mem_s2_paddr;
  assign io_requestor_1_resp_valid = io_mem_resp_valid & io_mem_resp_bits_tag[0];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:60:41, :61:39]
  assign io_requestor_1_resp_bits_addr = io_mem_resp_bits_addr;
  assign io_requestor_1_resp_bits_tag = {1'h0, io_mem_resp_bits_tag[6:1]};	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:73:{21,45}]
  assign io_requestor_1_resp_bits_cmd = io_mem_resp_bits_cmd;
  assign io_requestor_1_resp_bits_size = io_mem_resp_bits_size;
  assign io_requestor_1_resp_bits_signed = io_mem_resp_bits_signed;
  assign io_requestor_1_resp_bits_dprv = io_mem_resp_bits_dprv;
  assign io_requestor_1_resp_bits_dv = io_mem_resp_bits_dv;
  assign io_requestor_1_resp_bits_data = io_mem_resp_bits_data;
  assign io_requestor_1_resp_bits_mask = io_mem_resp_bits_mask;
  assign io_requestor_1_resp_bits_replay = io_mem_resp_bits_replay;
  assign io_requestor_1_resp_bits_has_data = io_mem_resp_bits_has_data;
  assign io_requestor_1_resp_bits_data_word_bypass = io_mem_resp_bits_data_word_bypass;
  assign io_requestor_1_resp_bits_data_raw = io_mem_resp_bits_data_raw;
  assign io_requestor_1_resp_bits_store_data = io_mem_resp_bits_store_data;
  assign io_requestor_1_replay_next = io_mem_replay_next;
  assign io_requestor_1_s2_xcpt_ma_ld = io_mem_s2_xcpt_ma_ld;
  assign io_requestor_1_s2_xcpt_ma_st = io_mem_s2_xcpt_ma_st;
  assign io_requestor_1_s2_xcpt_pf_ld = io_mem_s2_xcpt_pf_ld;
  assign io_requestor_1_s2_xcpt_pf_st = io_mem_s2_xcpt_pf_st;
  assign io_requestor_1_s2_xcpt_ae_ld = io_mem_s2_xcpt_ae_ld;
  assign io_requestor_1_s2_xcpt_ae_st = io_mem_s2_xcpt_ae_st;
  assign io_requestor_1_ordered = io_mem_ordered;
  assign io_requestor_1_perf_acquire = io_mem_perf_acquire;
  assign io_requestor_1_perf_release = io_mem_perf_release;
  assign io_requestor_1_perf_tlbMiss = io_mem_perf_tlbMiss;
  assign io_mem_req_valid = io_requestor_0_req_valid | io_requestor_1_req_valid;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:25:63]
  assign io_mem_req_bits_addr = io_requestor_0_req_valid ? io_requestor_0_req_bits_addr : io_requestor_1_req_bits_addr;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:33:25, :50:26]
  assign io_mem_req_bits_tag = io_requestor_0_req_valid ? 7'h0 : {io_requestor_1_req_bits_tag[5:0], 1'h1};	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14, :34:29, :50:26]
  assign io_mem_req_bits_cmd = io_requestor_0_req_valid ? 5'h0 : io_requestor_1_req_bits_cmd;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14, :33:25, :50:26]
  assign io_mem_req_bits_size = io_requestor_0_req_valid ? 2'h3 : io_requestor_1_req_bits_size;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14, :33:25, :50:26]
  assign io_mem_req_bits_signed = ~io_requestor_0_req_valid & io_requestor_1_req_bits_signed;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:33:25, :50:26]
  assign io_mem_req_bits_dprv = io_requestor_0_req_valid ? 2'h1 : io_requestor_1_req_bits_dprv;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14, :33:25, :50:26]
  assign io_mem_req_bits_phys = io_requestor_0_req_valid | io_requestor_1_req_bits_phys;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:33:25, :50:26]
  assign io_mem_s1_kill = s1_id ? io_requestor_1_s1_kill : io_requestor_0_s1_kill;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:20:20, :38:24, :51:30]
  assign io_mem_s1_data_data = s1_id ? io_requestor_1_s1_data_data : 64'h0;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14, :20:20, :39:24, :51:30]
  assign io_mem_s1_data_mask = s1_id ? io_requestor_1_s1_data_mask : 8'h0;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:12:14, :20:20, :39:24, :51:30]
  assign io_mem_s2_kill = s2_id & io_requestor_1_s2_kill;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCacheArbiter.scala:21:24, :42:24, :52:30]
endmodule

