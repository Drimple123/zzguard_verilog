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

module Directory(
  input         clock,
                reset,
  output        io_write_ready,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input         io_write_valid,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input  [9:0]  io_write_bits_set,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input  [2:0]  io_write_bits_way,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input         io_write_bits_data_dirty,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input  [1:0]  io_write_bits_data_state,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
                io_write_bits_data_clients,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input  [12:0] io_write_bits_data_tag,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input         io_read_valid,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input  [9:0]  io_read_bits_set,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  input  [12:0] io_read_bits_tag,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  output        io_result_bits_dirty,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  output [1:0]  io_result_bits_state,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
                io_result_bits_clients,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  output [12:0] io_result_bits_tag,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  output        io_result_bits_hit,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  output [2:0]  io_result_bits_way,	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
  output        io_ready	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
);

  wire         cc_dir_MPORT_mask_7;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire         cc_dir_MPORT_mask_6;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire         cc_dir_MPORT_mask_5;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire         cc_dir_MPORT_mask_4;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire         cc_dir_MPORT_mask_3;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire         cc_dir_MPORT_mask_2;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire         cc_dir_MPORT_mask_1;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire         cc_dir_MPORT_mask_0;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65]
  wire [17:0]  cc_dir_MPORT_data_7;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:99:44]
  wire [9:0]   cc_dir_MPORT_addr;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:98:10]
  wire         cc_dir_MPORT_en;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:96:14]
  wire         _victimLFSR_prng_io_out_0;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_1;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_2;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_3;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_4;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_5;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_6;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_7;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_8;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLFSR_prng_io_out_9;	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _write_q_io_deq_valid;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire [9:0]   _write_q_io_deq_bits_set;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire [2:0]   _write_q_io_deq_bits_way;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _write_q_io_deq_bits_data_dirty;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire [1:0]   _write_q_io_deq_bits_data_state;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire [1:0]   _write_q_io_deq_bits_data_clients;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire [12:0]  _write_q_io_deq_bits_data_tag;	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire [143:0] _cc_dir_RW0_rdata;	// @[generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26]
  reg  [10:0]  wipeCount;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26]
  reg          wipeOff;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:80:24]
  assign cc_dir_MPORT_en = ~io_read_valid & (~(wipeCount[10]) & ~wipeOff | _write_q_io_deq_valid);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :80:24, :81:27, :85:{9,22}, :86:23, :90:{24,37}, :96:14, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_addr = wipeCount[10] ? _write_q_io_deq_bits_set : wipeCount[9:0];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :82:26, :98:10, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_data_7 = wipeCount[10] ? {_write_q_io_deq_bits_data_dirty, _write_q_io_deq_bits_data_state, _write_q_io_deq_bits_data_clients, _write_q_io_deq_bits_data_tag} : 18'h0;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :99:{44,71}, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_0 = _write_q_io_deq_bits_way == 3'h0 | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, :123:42, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_1 = _write_q_io_deq_bits_way == 3'h1 | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, :131:63, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_2 = _write_q_io_deq_bits_way == 3'h2 | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, :131:63, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_3 = _write_q_io_deq_bits_way == 3'h3 | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, :131:63, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_4 = _write_q_io_deq_bits_way == 3'h4 | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, :131:63, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_5 = _write_q_io_deq_bits_way == 3'h5 | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, :131:63, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_6 = _write_q_io_deq_bits_way == 3'h6 | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, :131:63, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign cc_dir_MPORT_mask_7 = (&_write_q_io_deq_bits_way) | ~(wipeCount[10]);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :85:9, :100:{51,65}, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  reg          ren1;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:103:21]
  reg  [12:0]  tag;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36]
  reg  [9:0]   set;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:112:36]
  wire [9:0]   victimLFSR = {_victimLFSR_prng_io_out_9, _victimLFSR_prng_io_out_8, _victimLFSR_prng_io_out_7, _victimLFSR_prng_io_out_6, _victimLFSR_prng_io_out_5, _victimLFSR_prng_io_out_4, _victimLFSR_prng_io_out_3, _victimLFSR_prng_io_out_2, _victimLFSR_prng_io_out_1, _victimLFSR_prng_io_out_0};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:115:63, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire [2:0]   _GEN = {_victimLFSR_prng_io_out_9, _victimLFSR_prng_io_out_8, _victimLFSR_prng_io_out_7};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire [1:0]   _GEN_0 = {_victimLFSR_prng_io_out_9, _victimLFSR_prng_io_out_8};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _victimLTE_T_3 = victimLFSR > 10'h17F;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:115:63, :117:43]
  wire         _victimLTE_T_5 = victimLFSR > 10'h27F;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:115:63, :117:43]
  wire         _victimLTE_T_6 = victimLFSR > 10'h2FF;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:115:63, :117:43]
  wire         _victimLTE_T_7 = victimLFSR > 10'h37F;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:115:63, :117:43]
  wire [3:0]   victimWay_hi = {_victimLTE_T_7, _victimLTE_T_6, _victimLTE_T_5, _victimLFSR_prng_io_out_9} & {1'h1, ~_victimLTE_T_7, ~_victimLTE_T_6, ~_victimLTE_T_5};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{31,55,57}, src/main/scala/chisel3/util/OneHot.scala:30:18, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire [2:0]   _victimWay_T_1 = victimWay_hi[3:1] | {_victimLTE_T_3, |_GEN_0, |_GEN} & {~_victimLFSR_prng_io_out_9, ~_victimLTE_T_3, ~(|_GEN_0)};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{31,55,57}, src/main/scala/chisel3/util/OneHot.scala:30:18, :31:18, :32:28, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire [2:0]   victimWay = {|victimWay_hi, |(_victimWay_T_1[2:1]), _victimWay_T_1[2] | _victimWay_T_1[0]};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:119:55, src/main/scala/chisel3/util/OneHot.scala:30:18, :31:18, :32:{10,14,28}]
  wire         _view__T_71 = (|_GEN) & ~(|_GEN_0);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{55,57}, :123:28]
  wire         _view__T_72 = (|_GEN_0) & ~_victimLTE_T_3;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{55,57}, :123:28]
  wire         _view__T_73 = _victimLTE_T_3 & ~_victimLFSR_prng_io_out_9;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{55,57}, :123:28, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _view__T_74 = _victimLFSR_prng_io_out_9 & ~_victimLTE_T_5;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{55,57}, :123:28, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
  wire         _view__T_75 = _victimLTE_T_5 & ~_victimLTE_T_6;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{55,57}, :123:28]
  wire         _view__T_76 = _victimLTE_T_6 & ~_victimLTE_T_7;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{55,57}, :123:28]
  `ifndef SYNTHESIS	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10]
    always @(posedge clock) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10]
      if (~reset & ~(wipeCount[10] | ~io_read_valid)) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :86:{10,20,23}]
        if (`ASSERT_VERBOSE_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10]
          $error("Assertion failed\n    at Directory.scala:86 assert (wipeDone || !io.read.valid)\n");	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10]
        if (`STOP_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10]
          $fatal;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10]
      end
      if (~reset & ~(~io_read_valid | wipeCount[10])) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27, :86:{10,23}, :91:{10,26}]
        if (`ASSERT_VERBOSE_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:91:10]
          $error("Assertion failed\n    at Directory.scala:91 assert (!io.read.valid || wipeDone)\n");	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:91:10]
        if (`STOP_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:91:10]
          $fatal;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:91:10]
      end
      if (~reset & ~(~ren1 | ({~_victimLTE_T_6, ~_victimLTE_T_5, ~_victimLFSR_prng_io_out_9, ~_victimLTE_T_3, ~(|_GEN_0), ~(|_GEN)} & {_victimLTE_T_7, _victimLTE_T_6, _victimLTE_T_5, _victimLFSR_prng_io_out_9, _victimLTE_T_3, |_GEN_0}) == 6'h0)) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10, :103:21, :117:43, :119:{57,70}, :121:11, :122:{10,17,39,54}, src/main/scala/chisel3/util/random/PRNG.scala:91:22]
        if (`ASSERT_VERBOSE_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:122:10]
          $error("Assertion failed\n    at Directory.scala:122 assert (!ren2 || ((victimSimp >> 1) & ~victimSimp) === 0.U) // monotone\n");	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:122:10]
        if (`STOP_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:122:10]
          $fatal;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:122:10]
      end
      if (~reset & ~(~ren1 | {1'h0, {1'h0, {1'h0, ~(|_GEN)} + {1'h0, _view__T_71}} + {1'h0, {1'h0, _view__T_72} + {1'h0, _view__T_73}}} + {1'h0, {1'h0, {1'h0, _view__T_74} + {1'h0, _view__T_75}} + {1'h0, {1'h0, _view__T_76} + {1'h0, _victimLTE_T_7}}} == 4'h1)) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:10, :103:21, :117:43, :119:{55,57}, :121:11, :123:{10,17,28,42}]
        if (`ASSERT_VERBOSE_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:123:10]
          $error("Assertion failed\n    at Directory.scala:123 assert (!ren2 || PopCount(victimWayOH) === 1.U)\n");	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:123:10]
        if (`STOP_COND_)	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:123:10]
          $fatal;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:123:10]
      end
    end // always @(posedge)
  `endif // not def SYNTHESIS
  wire         setQuash = _write_q_io_deq_valid & _write_q_io_deq_bits_set == set;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:112:36, :125:{31,45}, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         tagMatch = _write_q_io_deq_bits_data_tag == tag;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :126:34, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_6 = _cc_dir_RW0_rdata[12:0] == tag & (|(_cc_dir_RW0_rdata[16:15])) & (~setQuash | (|_write_q_io_deq_bits_way));	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_13 = _cc_dir_RW0_rdata[30:18] == tag & (|(_cc_dir_RW0_rdata[34:33])) & (~setQuash | _write_q_io_deq_bits_way != 3'h1);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_20 = _cc_dir_RW0_rdata[48:36] == tag & (|(_cc_dir_RW0_rdata[52:51])) & (~setQuash | _write_q_io_deq_bits_way != 3'h2);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_27 = _cc_dir_RW0_rdata[66:54] == tag & (|(_cc_dir_RW0_rdata[70:69])) & (~setQuash | _write_q_io_deq_bits_way != 3'h3);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_34 = _cc_dir_RW0_rdata[84:72] == tag & (|(_cc_dir_RW0_rdata[88:87])) & (~setQuash | _write_q_io_deq_bits_way != 3'h4);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_41 = _cc_dir_RW0_rdata[102:90] == tag & (|(_cc_dir_RW0_rdata[106:105])) & (~setQuash | _write_q_io_deq_bits_way != 3'h5);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_48 = _cc_dir_RW0_rdata[120:108] == tag & (|(_cc_dir_RW0_rdata[124:123])) & (~setQuash | _write_q_io_deq_bits_way != 3'h6);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire         _hits_T_55 = _cc_dir_RW0_rdata[138:126] == tag & (|(_cc_dir_RW0_rdata[142:141])) & (~setQuash | _write_q_io_deq_bits_way != 3'h7);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36, :125:31, :129:40, :131:{11,30,42,46,56,63}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  wire [7:0]   hits = {_hits_T_55, _hits_T_48, _hits_T_41, _hits_T_34, _hits_T_27, _hits_T_20, _hits_T_13, _hits_T_6};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:130:17, :131:42]
  wire         _view__T_69 = setQuash & (tagMatch | _write_q_io_deq_bits_way == victimWay);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:125:31, :126:34, :127:29, :136:{105,118}, src/main/scala/chisel3/util/Decoupled.scala:376:21, src/main/scala/chisel3/util/OneHot.scala:32:10]
  wire         _io_result_bits_way_T_7 = setQuash & tagMatch;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:125:31, :126:34, :137:42]
  wire [2:0]   _io_result_bits_way_T_1 = {_hits_T_55, _hits_T_48, _hits_T_41} | {_hits_T_27, _hits_T_20, _hits_T_13};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:131:42, src/main/scala/chisel3/util/OneHot.scala:30:18, :31:18, :32:28]
  always @(posedge clock) begin
    if (reset) begin
      wipeCount <= 11'h0;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26]
      wipeOff <= 1'h1;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:80:24]
      ren1 <= 1'h0;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:103:21]
    end
    else begin
      if (wipeCount[10] | wipeOff) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :80:24, :81:27, :85:{32,44}]
      end
      else	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :85:{32,44}]
        wipeCount <= wipeCount + 11'h1;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :85:57]
      wipeOff <= 1'h0;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:80:24]
      ren1 <= io_read_valid;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:103:21]
    end
    if (io_read_valid) begin	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:58:14]
      tag <= io_read_bits_tag;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:111:36]
      set <= io_read_bits_set;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:112:36]
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
        wipeCount = _RANDOM[1'h0][10:0];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26]
        wipeOff = _RANDOM[1'h0][11];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :80:24]
        ren1 = _RANDOM[1'h0][12];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :103:21]
        tag = _RANDOM[1'h0][25:13];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :111:36]
        set = {_RANDOM[1'h0][31:26], _RANDOM[1'h1][3:0]};	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :112:36]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  cc_dir cc_dir (	// @[generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26]
    .RW0_addr  (cc_dir_MPORT_en ? cc_dir_MPORT_addr : io_read_bits_set),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:96:14, :98:10, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26]
    .RW0_en    (io_read_valid | cc_dir_MPORT_en),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:96:14, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26]
    .RW0_clk   (clock),
    .RW0_wmode (~io_read_valid),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:23]
    .RW0_wdata ({8{cc_dir_MPORT_data_7}}),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:99:44, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26]
    .RW0_rdata (_cc_dir_RW0_rdata),
    .RW0_wmask ({cc_dir_MPORT_mask_7, cc_dir_MPORT_mask_6, cc_dir_MPORT_mask_5, cc_dir_MPORT_mask_4, cc_dir_MPORT_mask_3, cc_dir_MPORT_mask_2, cc_dir_MPORT_mask_1, cc_dir_MPORT_mask_0})	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:100:65, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26]
  );
  Queue_49 write_q (	// @[src/main/scala/chisel3/util/Decoupled.scala:376:21]
    .clock                    (clock),
    .reset                    (reset),
    .io_enq_ready             (io_write_ready),
    .io_enq_valid             (io_write_valid),
    .io_enq_bits_set          (io_write_bits_set),
    .io_enq_bits_way          (io_write_bits_way),
    .io_enq_bits_data_dirty   (io_write_bits_data_dirty),
    .io_enq_bits_data_state   (io_write_bits_data_state),
    .io_enq_bits_data_clients (io_write_bits_data_clients),
    .io_enq_bits_data_tag     (io_write_bits_data_tag),
    .io_deq_ready             (~io_read_valid),	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:86:23]
    .io_deq_valid             (_write_q_io_deq_valid),
    .io_deq_bits_set          (_write_q_io_deq_bits_set),
    .io_deq_bits_way          (_write_q_io_deq_bits_way),
    .io_deq_bits_data_dirty   (_write_q_io_deq_bits_data_dirty),
    .io_deq_bits_data_state   (_write_q_io_deq_bits_data_state),
    .io_deq_bits_data_clients (_write_q_io_deq_bits_data_clients),
    .io_deq_bits_data_tag     (_write_q_io_deq_bits_data_tag)
  );
  MaxPeriodFibonacciLFSR victimLFSR_prng (	// @[src/main/scala/chisel3/util/random/PRNG.scala:91:22]
    .clock        (clock),
    .reset        (reset),
    .io_increment (io_read_valid),
    .io_out_0     (_victimLFSR_prng_io_out_0),
    .io_out_1     (_victimLFSR_prng_io_out_1),
    .io_out_2     (_victimLFSR_prng_io_out_2),
    .io_out_3     (_victimLFSR_prng_io_out_3),
    .io_out_4     (_victimLFSR_prng_io_out_4),
    .io_out_5     (_victimLFSR_prng_io_out_5),
    .io_out_6     (_victimLFSR_prng_io_out_6),
    .io_out_7     (_victimLFSR_prng_io_out_7),
    .io_out_8     (_victimLFSR_prng_io_out_8),
    .io_out_9     (_victimLFSR_prng_io_out_9),
    .io_out_10    (/* unused */),
    .io_out_11    (/* unused */),
    .io_out_12    (/* unused */),
    .io_out_13    (/* unused */),
    .io_out_14    (/* unused */),
    .io_out_15    (/* unused */)
  );
  assign io_result_bits_dirty = (|hits) ? _hits_T_6 & _cc_dir_RW0_rdata[17] | _hits_T_13 & _cc_dir_RW0_rdata[35] | _hits_T_20 & _cc_dir_RW0_rdata[53] | _hits_T_27 & _cc_dir_RW0_rdata[71] | _hits_T_34 & _cc_dir_RW0_rdata[89] | _hits_T_41 & _cc_dir_RW0_rdata[107] | _hits_T_48 & _cc_dir_RW0_rdata[125] | _hits_T_55 & _cc_dir_RW0_rdata[143] : _view__T_69 ? _write_q_io_deq_bits_data_dirty : ~(|_GEN) & _cc_dir_RW0_rdata[17] | _view__T_71 & _cc_dir_RW0_rdata[35] | _view__T_72 & _cc_dir_RW0_rdata[53] | _view__T_73 & _cc_dir_RW0_rdata[71] | _view__T_74 & _cc_dir_RW0_rdata[89] | _view__T_75 & _cc_dir_RW0_rdata[107] | _view__T_76 & _cc_dir_RW0_rdata[125] | _victimLTE_T_7 & _cc_dir_RW0_rdata[143];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:{55,57}, :123:28, :129:40, :130:17, :131:42, :133:18, :136:{67,95,105}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21, src/main/scala/chisel3/util/Mux.scala:30:73]
  assign io_result_bits_state = (|hits) ? (_hits_T_6 ? _cc_dir_RW0_rdata[16:15] : 2'h0) | (_hits_T_13 ? _cc_dir_RW0_rdata[34:33] : 2'h0) | (_hits_T_20 ? _cc_dir_RW0_rdata[52:51] : 2'h0) | (_hits_T_27 ? _cc_dir_RW0_rdata[70:69] : 2'h0) | (_hits_T_34 ? _cc_dir_RW0_rdata[88:87] : 2'h0) | (_hits_T_41 ? _cc_dir_RW0_rdata[106:105] : 2'h0) | (_hits_T_48 ? _cc_dir_RW0_rdata[124:123] : 2'h0) | (_hits_T_55 ? _cc_dir_RW0_rdata[142:141] : 2'h0) : _view__T_69 ? _write_q_io_deq_bits_data_state : ((|_GEN) ? 2'h0 : _cc_dir_RW0_rdata[16:15]) | (_view__T_71 ? _cc_dir_RW0_rdata[34:33] : 2'h0) | (_view__T_72 ? _cc_dir_RW0_rdata[52:51] : 2'h0) | (_view__T_73 ? _cc_dir_RW0_rdata[70:69] : 2'h0) | (_view__T_74 ? _cc_dir_RW0_rdata[88:87] : 2'h0) | (_view__T_75 ? _cc_dir_RW0_rdata[106:105] : 2'h0) | (_view__T_76 ? _cc_dir_RW0_rdata[124:123] : 2'h0) | (_victimLTE_T_7 ? _cc_dir_RW0_rdata[142:141] : 2'h0);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:55, :123:28, :129:40, :130:17, :131:42, :133:18, :136:{67,95,105}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21, src/main/scala/chisel3/util/Mux.scala:30:73]
  assign io_result_bits_clients = (|hits) ? (_hits_T_6 ? _cc_dir_RW0_rdata[14:13] : 2'h0) | (_hits_T_13 ? _cc_dir_RW0_rdata[32:31] : 2'h0) | (_hits_T_20 ? _cc_dir_RW0_rdata[50:49] : 2'h0) | (_hits_T_27 ? _cc_dir_RW0_rdata[68:67] : 2'h0) | (_hits_T_34 ? _cc_dir_RW0_rdata[86:85] : 2'h0) | (_hits_T_41 ? _cc_dir_RW0_rdata[104:103] : 2'h0) | (_hits_T_48 ? _cc_dir_RW0_rdata[122:121] : 2'h0) | (_hits_T_55 ? _cc_dir_RW0_rdata[140:139] : 2'h0) : _view__T_69 ? _write_q_io_deq_bits_data_clients : ((|_GEN) ? 2'h0 : _cc_dir_RW0_rdata[14:13]) | (_view__T_71 ? _cc_dir_RW0_rdata[32:31] : 2'h0) | (_view__T_72 ? _cc_dir_RW0_rdata[50:49] : 2'h0) | (_view__T_73 ? _cc_dir_RW0_rdata[68:67] : 2'h0) | (_view__T_74 ? _cc_dir_RW0_rdata[86:85] : 2'h0) | (_view__T_75 ? _cc_dir_RW0_rdata[104:103] : 2'h0) | (_view__T_76 ? _cc_dir_RW0_rdata[122:121] : 2'h0) | (_victimLTE_T_7 ? _cc_dir_RW0_rdata[140:139] : 2'h0);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:55, :123:28, :129:40, :130:17, :131:42, :133:18, :136:{67,95,105}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21, src/main/scala/chisel3/util/Mux.scala:30:73]
  assign io_result_bits_tag = (|hits) ? (_hits_T_6 ? _cc_dir_RW0_rdata[12:0] : 13'h0) | (_hits_T_13 ? _cc_dir_RW0_rdata[30:18] : 13'h0) | (_hits_T_20 ? _cc_dir_RW0_rdata[48:36] : 13'h0) | (_hits_T_27 ? _cc_dir_RW0_rdata[66:54] : 13'h0) | (_hits_T_34 ? _cc_dir_RW0_rdata[84:72] : 13'h0) | (_hits_T_41 ? _cc_dir_RW0_rdata[102:90] : 13'h0) | (_hits_T_48 ? _cc_dir_RW0_rdata[120:108] : 13'h0) | (_hits_T_55 ? _cc_dir_RW0_rdata[138:126] : 13'h0) : _view__T_69 ? _write_q_io_deq_bits_data_tag : ((|_GEN) ? 13'h0 : _cc_dir_RW0_rdata[12:0]) | (_view__T_71 ? _cc_dir_RW0_rdata[30:18] : 13'h0) | (_view__T_72 ? _cc_dir_RW0_rdata[48:36] : 13'h0) | (_view__T_73 ? _cc_dir_RW0_rdata[66:54] : 13'h0) | (_view__T_74 ? _cc_dir_RW0_rdata[84:72] : 13'h0) | (_view__T_75 ? _cc_dir_RW0_rdata[102:90] : 13'h0) | (_view__T_76 ? _cc_dir_RW0_rdata[120:108] : 13'h0) | (_victimLTE_T_7 ? _cc_dir_RW0_rdata[138:126] : 13'h0);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:117:43, :119:55, :123:28, :129:40, :130:17, :131:42, :133:18, :136:{67,95,105}, generators/rocket-chip/src/main/scala/util/DescribedSRAM.scala:17:26, src/main/scala/chisel3/util/Decoupled.scala:376:21, src/main/scala/chisel3/util/Mux.scala:30:73]
  assign io_result_bits_hit = (|hits) | _io_result_bits_way_T_7 & (|_write_q_io_deq_bits_data_state);	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:130:17, :133:18, :137:{29,42,54,75}, src/main/scala/chisel3/util/Decoupled.scala:376:21]
  assign io_result_bits_way = (|hits) ? {|{_hits_T_55, _hits_T_48, _hits_T_41, _hits_T_34}, |(_io_result_bits_way_T_1[2:1]), _io_result_bits_way_T_1[2] | _io_result_bits_way_T_1[0]} : _io_result_bits_way_T_7 ? _write_q_io_deq_bits_way : victimWay;	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:130:17, :131:42, :133:18, :137:42, :138:{28,53}, src/main/scala/chisel3/util/Decoupled.scala:376:21, src/main/scala/chisel3/util/OneHot.scala:30:18, :31:18, :32:{10,14,28}]
  assign io_ready = wipeCount[10];	// @[generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Directory.scala:79:26, :81:27]
endmodule

