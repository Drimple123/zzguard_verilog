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

module WritebackUnit(
  input         clock,
                reset,
  output        io_req_ready,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input         io_req_valid,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input  [19:0] io_req_bits_tag,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input  [5:0]  io_req_bits_idx,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input  [4:0]  io_req_bits_source,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input  [2:0]  io_req_bits_param,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input  [3:0]  io_req_bits_way_en,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input         io_req_bits_voluntary,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
                io_meta_read_ready,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output        io_meta_read_valid,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [5:0]  io_meta_read_bits_idx,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [19:0] io_meta_read_bits_tag,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input         io_data_req_ready,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output        io_data_req_valid,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [3:0]  io_data_req_bits_way_en,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [11:0] io_data_req_bits_addr,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input  [63:0] io_data_resp,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  input         io_release_ready,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output        io_release_valid,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [2:0]  io_release_bits_opcode,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
                io_release_bits_param,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [4:0]  io_release_bits_source,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [31:0] io_release_bits_address,	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
  output [63:0] io_release_bits_data	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:463:14]
);

  reg  [19:0] req_tag;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  reg  [5:0]  req_idx;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  reg  [4:0]  req_source;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  reg  [2:0]  req_param;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  reg  [3:0]  req_way_en;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  reg         req_voluntary;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  reg         active;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23]
  reg         r1_data_req_fired;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:473:34]
  reg         r2_data_req_fired;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:474:34]
  reg  [3:0]  data_req_cnt;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:475:29]
  wire        _io_data_req_valid_output = active & ~(data_req_cnt[3]);	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23, :475:29, :495:32, :507:{21,37}]
  wire        _GEN = io_data_req_ready & _io_data_req_valid_output & io_meta_read_ready;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:482:28, :507:21]
  wire        _GEN_0 = r2_data_req_fired & ~io_release_ready;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:474:34, :482:50, :486:30, :488:{12,31}, :489:27]
  wire        _GEN_1 = ~active & io_req_valid;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23, :505:19, src/main/scala/chisel3/util/Decoupled.scala:52:35]
  always @(posedge clock) begin
    if (_GEN_1) begin	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35]
      req_tag <= io_req_bits_tag;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
      req_idx <= io_req_bits_idx;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
      req_source <= io_req_bits_source;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
      req_param <= io_req_bits_param;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
      req_way_en <= io_req_bits_way_en;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
      req_voluntary <= io_req_bits_voluntary;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
    end
    if (reset) begin
      active <= 1'h0;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23]
      r1_data_req_fired <= 1'h0;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:473:34]
      r2_data_req_fired <= 1'h0;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:474:34]
      data_req_cnt <= 4'h0;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:475:29]
    end
    else begin
      active <= _GEN_1 | (active & r2_data_req_fired & ~r1_data_req_fired ? ~(data_req_cnt[3]) | ~io_release_ready : active);	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23, :473:34, :474:34, :475:29, :479:17, :486:30, :488:12, :493:{12,32}, :495:{16,32,49}, :499:22, :500:12, src/main/scala/chisel3/util/Decoupled.scala:52:35]
      if (active) begin	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23]
        r1_data_req_fired <= ~_GEN_0 & _GEN;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:473:34, :482:{28,50}, :486:30, :488:31, :489:27]
        r2_data_req_fired <= ~_GEN_0 & r1_data_req_fired;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:473:34, :474:34, :481:23, :482:50, :486:30, :488:31, :489:27, :490:27]
      end
      if (_GEN_1)	// @[src/main/scala/chisel3/util/Decoupled.scala:52:35]
        data_req_cnt <= 4'h0;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:475:29]
      else if (active) begin	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23]
        if (_GEN_0)	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:482:50, :486:30, :488:31, :489:27]
          data_req_cnt <= data_req_cnt - {2'h0, r1_data_req_fired ? 2'h2 : 2'h1};	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:473:34, :475:29, :491:{38,49}]
        else if (_GEN)	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:482:28]
          data_req_cnt <= data_req_cnt + 4'h1;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:475:29, :484:36]
      end
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
        req_tag = _RANDOM[1'h0][19:0];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
        req_idx = _RANDOM[1'h0][25:20];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
        req_source = _RANDOM[1'h0][30:26];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
        req_param = {_RANDOM[1'h0][31], _RANDOM[1'h1][1:0]};	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
        req_way_en = _RANDOM[1'h1][5:2];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
        req_voluntary = _RANDOM[1'h1][6];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
        active = _RANDOM[1'h1][7];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16, :472:23]
        r1_data_req_fired = _RANDOM[1'h1][8];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16, :473:34]
        r2_data_req_fired = _RANDOM[1'h1][9];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16, :474:34]
        data_req_cnt = _RANDOM[1'h1][13:10];	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16, :475:29]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_req_ready = ~active;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23, :505:19]
  assign io_meta_read_valid = _io_data_req_valid_output;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:507:21]
  assign io_meta_read_bits_idx = req_idx;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  assign io_meta_read_bits_tag = req_tag;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  assign io_data_req_valid = _io_data_req_valid_output;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:507:21]
  assign io_data_req_bits_way_en = req_way_en;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  assign io_data_req_bits_addr = {req_idx, data_req_cnt[2:0], 3'h0};	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16, :475:29, :491:38, :518:56, :519:43]
  assign io_release_valid = active & r2_data_req_fired;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:472:23, :474:34, :478:20, :479:17, :486:30]
  assign io_release_bits_opcode = {1'h1, req_voluntary, 1'h1};	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16, :536:25]
  assign io_release_bits_param = req_param;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  assign io_release_bits_source = req_source;	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16]
  assign io_release_bits_address = {req_tag, req_idx, 6'h0};	// @[generators/rocket-chip/src/main/scala/rocket/NBDcache.scala:471:16, :521:41]
  assign io_release_bits_data = io_data_resp;
endmodule

