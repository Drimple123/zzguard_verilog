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

module InclusiveCache(
  input         clock,
                reset,
  output        auto_ctrls_ctrl_in_a_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_ctrls_ctrl_in_a_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_ctrls_ctrl_in_a_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_ctrls_ctrl_in_a_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [1:0]  auto_ctrls_ctrl_in_a_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [13:0] auto_ctrls_ctrl_in_a_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [25:0] auto_ctrls_ctrl_in_a_bits_address,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [7:0]  auto_ctrls_ctrl_in_a_bits_mask,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [63:0] auto_ctrls_ctrl_in_a_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_ctrls_ctrl_in_a_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_ctrls_ctrl_in_d_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_ctrls_ctrl_in_d_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_ctrls_ctrl_in_d_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [1:0]  auto_ctrls_ctrl_in_d_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [13:0] auto_ctrls_ctrl_in_d_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [63:0] auto_ctrls_ctrl_in_d_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_in_a_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_in_a_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_in_a_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_in_a_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_in_a_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [8:0]  auto_in_a_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [31:0] auto_in_a_bits_address,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [7:0]  auto_in_a_bits_mask,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [63:0] auto_in_a_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_in_a_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_in_b_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_in_b_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [1:0]  auto_in_b_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [8:0]  auto_in_b_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [31:0] auto_in_b_bits_address,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_in_c_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_in_c_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_in_c_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_in_c_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_in_c_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [8:0]  auto_in_c_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [31:0] auto_in_c_bits_address,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [63:0] auto_in_c_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_in_c_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_in_d_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_in_d_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_in_d_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [1:0]  auto_in_d_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_in_d_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [8:0]  auto_in_d_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_in_d_bits_sink,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_in_d_bits_denied,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [63:0] auto_in_d_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_in_d_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_in_e_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_in_e_bits_sink,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_out_a_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_out_a_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_out_a_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_a_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_a_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_a_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [31:0] auto_out_a_bits_address,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [7:0]  auto_out_a_bits_mask,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [63:0] auto_out_a_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_out_a_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_out_c_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_out_c_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_out_c_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_c_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_c_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_c_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [31:0] auto_out_c_bits_address,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [63:0] auto_out_c_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_out_c_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_d_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_out_d_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_out_d_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [1:0]  auto_out_d_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_out_d_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_d_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_out_d_bits_sink,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_out_d_bits_denied,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [63:0] auto_out_d_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_out_d_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_out_e_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_out_e_bits_sink	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
);

  wire        _inclusive_cache_bank_sched_io_in_a_ready;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _inclusive_cache_bank_sched_io_in_b_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [1:0]  _inclusive_cache_bank_sched_io_in_b_bits_param;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [8:0]  _inclusive_cache_bank_sched_io_in_b_bits_source;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [31:0] _inclusive_cache_bank_sched_io_in_b_bits_address;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _inclusive_cache_bank_sched_io_in_c_ready;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _inclusive_cache_bank_sched_io_in_d_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [2:0]  _inclusive_cache_bank_sched_io_in_d_bits_opcode;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [1:0]  _inclusive_cache_bank_sched_io_in_d_bits_param;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [2:0]  _inclusive_cache_bank_sched_io_in_d_bits_size;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [8:0]  _inclusive_cache_bank_sched_io_in_d_bits_source;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire [2:0]  _inclusive_cache_bank_sched_io_in_d_bits_sink;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _inclusive_cache_bank_sched_io_in_d_bits_denied;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _inclusive_cache_bank_sched_io_in_d_bits_corrupt;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _inclusive_cache_bank_sched_io_req_ready;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _inclusive_cache_bank_sched_io_resp_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  wire        _ctrls_io_flush_req_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:103:43]
  wire [63:0] _ctrls_io_flush_req_bits;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:103:43]
  wire        contained = {_ctrls_io_flush_req_bits[63:32], _ctrls_io_flush_req_bits[31:28] ^ 4'h8} == 36'h0 | {_ctrls_io_flush_req_bits[63:28], _ctrls_io_flush_req_bits[27:16] ^ 12'h800} == 48'h0;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:103:43, :169:67, generators/rocket-chip/src/main/scala/diplomacy/Parameters.scala:137:{31,41,46,59}]
  InclusiveCacheControl ctrls (	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:103:43]
    .clock                       (clock),
    .reset                       (reset),
    .auto_ctrl_in_a_ready        (auto_ctrls_ctrl_in_a_ready),
    .auto_ctrl_in_a_valid        (auto_ctrls_ctrl_in_a_valid),
    .auto_ctrl_in_a_bits_opcode  (auto_ctrls_ctrl_in_a_bits_opcode),
    .auto_ctrl_in_a_bits_param   (auto_ctrls_ctrl_in_a_bits_param),
    .auto_ctrl_in_a_bits_size    (auto_ctrls_ctrl_in_a_bits_size),
    .auto_ctrl_in_a_bits_source  (auto_ctrls_ctrl_in_a_bits_source),
    .auto_ctrl_in_a_bits_address (auto_ctrls_ctrl_in_a_bits_address),
    .auto_ctrl_in_a_bits_mask    (auto_ctrls_ctrl_in_a_bits_mask),
    .auto_ctrl_in_a_bits_data    (auto_ctrls_ctrl_in_a_bits_data),
    .auto_ctrl_in_a_bits_corrupt (auto_ctrls_ctrl_in_a_bits_corrupt),
    .auto_ctrl_in_d_ready        (auto_ctrls_ctrl_in_d_ready),
    .auto_ctrl_in_d_valid        (auto_ctrls_ctrl_in_d_valid),
    .auto_ctrl_in_d_bits_opcode  (auto_ctrls_ctrl_in_d_bits_opcode),
    .auto_ctrl_in_d_bits_size    (auto_ctrls_ctrl_in_d_bits_size),
    .auto_ctrl_in_d_bits_source  (auto_ctrls_ctrl_in_d_bits_source),
    .auto_ctrl_in_d_bits_data    (auto_ctrls_ctrl_in_d_bits_data),
    .io_flush_match              (contained),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:169:67]
    .io_flush_req_ready          (contained & _inclusive_cache_bank_sched_io_req_ready),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29, :169:67, :174:25]
    .io_flush_req_valid          (_ctrls_io_flush_req_valid),
    .io_flush_req_bits           (_ctrls_io_flush_req_bits),
    .io_flush_resp               (_inclusive_cache_bank_sched_io_resp_valid)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  );
  TLMonitor_38 monitor (	// @[generators/rocket-chip/src/main/scala/tilelink/Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (_inclusive_cache_bank_sched_io_in_a_ready),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_a_valid        (auto_in_a_valid),
    .io_in_a_bits_opcode  (auto_in_a_bits_opcode),
    .io_in_a_bits_param   (auto_in_a_bits_param),
    .io_in_a_bits_size    (auto_in_a_bits_size),
    .io_in_a_bits_source  (auto_in_a_bits_source),
    .io_in_a_bits_address (auto_in_a_bits_address),
    .io_in_a_bits_mask    (auto_in_a_bits_mask),
    .io_in_a_bits_corrupt (auto_in_a_bits_corrupt),
    .io_in_b_ready        (auto_in_b_ready),
    .io_in_b_valid        (_inclusive_cache_bank_sched_io_in_b_valid),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_b_bits_param   (_inclusive_cache_bank_sched_io_in_b_bits_param),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_b_bits_source  (_inclusive_cache_bank_sched_io_in_b_bits_source),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_b_bits_address (_inclusive_cache_bank_sched_io_in_b_bits_address),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_c_ready        (_inclusive_cache_bank_sched_io_in_c_ready),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_c_valid        (auto_in_c_valid),
    .io_in_c_bits_opcode  (auto_in_c_bits_opcode),
    .io_in_c_bits_param   (auto_in_c_bits_param),
    .io_in_c_bits_size    (auto_in_c_bits_size),
    .io_in_c_bits_source  (auto_in_c_bits_source),
    .io_in_c_bits_address (auto_in_c_bits_address),
    .io_in_c_bits_corrupt (auto_in_c_bits_corrupt),
    .io_in_d_ready        (auto_in_d_ready),
    .io_in_d_valid        (_inclusive_cache_bank_sched_io_in_d_valid),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_d_bits_opcode  (_inclusive_cache_bank_sched_io_in_d_bits_opcode),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_d_bits_param   (_inclusive_cache_bank_sched_io_in_d_bits_param),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_d_bits_size    (_inclusive_cache_bank_sched_io_in_d_bits_size),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_d_bits_source  (_inclusive_cache_bank_sched_io_in_d_bits_source),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_d_bits_sink    (_inclusive_cache_bank_sched_io_in_d_bits_sink),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_d_bits_denied  (_inclusive_cache_bank_sched_io_in_d_bits_denied),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_d_bits_corrupt (_inclusive_cache_bank_sched_io_in_d_bits_corrupt),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .io_in_e_valid        (auto_in_e_valid),
    .io_in_e_bits_sink    (auto_in_e_bits_sink)
  );
  InclusiveCacheBankScheduler inclusive_cache_bank_sched (	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
    .clock                 (clock),
    .reset                 (reset),
    .io_in_a_ready         (_inclusive_cache_bank_sched_io_in_a_ready),
    .io_in_a_valid         (auto_in_a_valid),
    .io_in_a_bits_opcode   (auto_in_a_bits_opcode),
    .io_in_a_bits_param    (auto_in_a_bits_param),
    .io_in_a_bits_size     (auto_in_a_bits_size),
    .io_in_a_bits_source   (auto_in_a_bits_source),
    .io_in_a_bits_address  (auto_in_a_bits_address),
    .io_in_a_bits_mask     (auto_in_a_bits_mask),
    .io_in_a_bits_data     (auto_in_a_bits_data),
    .io_in_a_bits_corrupt  (auto_in_a_bits_corrupt),
    .io_in_b_ready         (auto_in_b_ready),
    .io_in_b_valid         (_inclusive_cache_bank_sched_io_in_b_valid),
    .io_in_b_bits_param    (_inclusive_cache_bank_sched_io_in_b_bits_param),
    .io_in_b_bits_source   (_inclusive_cache_bank_sched_io_in_b_bits_source),
    .io_in_b_bits_address  (_inclusive_cache_bank_sched_io_in_b_bits_address),
    .io_in_c_ready         (_inclusive_cache_bank_sched_io_in_c_ready),
    .io_in_c_valid         (auto_in_c_valid),
    .io_in_c_bits_opcode   (auto_in_c_bits_opcode),
    .io_in_c_bits_param    (auto_in_c_bits_param),
    .io_in_c_bits_size     (auto_in_c_bits_size),
    .io_in_c_bits_source   (auto_in_c_bits_source),
    .io_in_c_bits_address  (auto_in_c_bits_address),
    .io_in_c_bits_data     (auto_in_c_bits_data),
    .io_in_c_bits_corrupt  (auto_in_c_bits_corrupt),
    .io_in_d_ready         (auto_in_d_ready),
    .io_in_d_valid         (_inclusive_cache_bank_sched_io_in_d_valid),
    .io_in_d_bits_opcode   (_inclusive_cache_bank_sched_io_in_d_bits_opcode),
    .io_in_d_bits_param    (_inclusive_cache_bank_sched_io_in_d_bits_param),
    .io_in_d_bits_size     (_inclusive_cache_bank_sched_io_in_d_bits_size),
    .io_in_d_bits_source   (_inclusive_cache_bank_sched_io_in_d_bits_source),
    .io_in_d_bits_sink     (_inclusive_cache_bank_sched_io_in_d_bits_sink),
    .io_in_d_bits_denied   (_inclusive_cache_bank_sched_io_in_d_bits_denied),
    .io_in_d_bits_data     (auto_in_d_bits_data),
    .io_in_d_bits_corrupt  (_inclusive_cache_bank_sched_io_in_d_bits_corrupt),
    .io_in_e_valid         (auto_in_e_valid),
    .io_in_e_bits_sink     (auto_in_e_bits_sink),
    .io_out_a_ready        (auto_out_a_ready),
    .io_out_a_valid        (auto_out_a_valid),
    .io_out_a_bits_opcode  (auto_out_a_bits_opcode),
    .io_out_a_bits_param   (auto_out_a_bits_param),
    .io_out_a_bits_size    (auto_out_a_bits_size),
    .io_out_a_bits_source  (auto_out_a_bits_source),
    .io_out_a_bits_address (auto_out_a_bits_address),
    .io_out_a_bits_mask    (auto_out_a_bits_mask),
    .io_out_a_bits_data    (auto_out_a_bits_data),
    .io_out_a_bits_corrupt (auto_out_a_bits_corrupt),
    .io_out_c_ready        (auto_out_c_ready),
    .io_out_c_valid        (auto_out_c_valid),
    .io_out_c_bits_opcode  (auto_out_c_bits_opcode),
    .io_out_c_bits_param   (auto_out_c_bits_param),
    .io_out_c_bits_size    (auto_out_c_bits_size),
    .io_out_c_bits_source  (auto_out_c_bits_source),
    .io_out_c_bits_address (auto_out_c_bits_address),
    .io_out_c_bits_data    (auto_out_c_bits_data),
    .io_out_c_bits_corrupt (auto_out_c_bits_corrupt),
    .io_out_d_ready        (auto_out_d_ready),
    .io_out_d_valid        (auto_out_d_valid),
    .io_out_d_bits_opcode  (auto_out_d_bits_opcode),
    .io_out_d_bits_param   (auto_out_d_bits_param),
    .io_out_d_bits_size    (auto_out_d_bits_size),
    .io_out_d_bits_source  (auto_out_d_bits_source),
    .io_out_d_bits_sink    (auto_out_d_bits_sink),
    .io_out_d_bits_denied  (auto_out_d_bits_denied),
    .io_out_d_bits_data    (auto_out_d_bits_data),
    .io_out_d_bits_corrupt (auto_out_d_bits_corrupt),
    .io_out_e_valid        (auto_out_e_valid),
    .io_out_e_bits_sink    (auto_out_e_bits_sink),
    .io_req_ready          (_inclusive_cache_bank_sched_io_req_ready),
    .io_req_valid          (contained & _ctrls_io_flush_req_valid),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:103:43, :169:67, :172:41]
    .io_req_bits_address   (_ctrls_io_flush_req_bits[31:0]),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:103:43, generators/rocket-chip/src/main/scala/diplomacy/Parameters.scala:137:31]
    .io_resp_valid         (_inclusive_cache_bank_sched_io_resp_valid)
  );
  assign auto_in_a_ready = _inclusive_cache_bank_sched_io_in_a_ready;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_b_valid = _inclusive_cache_bank_sched_io_in_b_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_b_bits_param = _inclusive_cache_bank_sched_io_in_b_bits_param;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_b_bits_source = _inclusive_cache_bank_sched_io_in_b_bits_source;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_b_bits_address = _inclusive_cache_bank_sched_io_in_b_bits_address;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_c_ready = _inclusive_cache_bank_sched_io_in_c_ready;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_valid = _inclusive_cache_bank_sched_io_in_d_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_bits_opcode = _inclusive_cache_bank_sched_io_in_d_bits_opcode;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_bits_param = _inclusive_cache_bank_sched_io_in_d_bits_param;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_bits_size = _inclusive_cache_bank_sched_io_in_d_bits_size;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_bits_source = _inclusive_cache_bank_sched_io_in_d_bits_source;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_bits_sink = _inclusive_cache_bank_sched_io_in_d_bits_sink;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_bits_denied = _inclusive_cache_bank_sched_io_in_d_bits_denied;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
  assign auto_in_d_bits_corrupt = _inclusive_cache_bank_sched_io_in_d_bits_corrupt;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/InclusiveCache.scala:137:29]
endmodule
