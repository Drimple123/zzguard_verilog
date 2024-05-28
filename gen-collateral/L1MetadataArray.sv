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

module L1MetadataArray(
  input         clock,
                reset,
  output        io_read_ready,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  input         io_read_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  input  [5:0]  io_read_bits_idx,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output        io_write_ready,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  input         io_write_valid,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  input  [5:0]  io_write_bits_idx,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  input  [3:0]  io_write_bits_way_en,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  input  [1:0]  io_write_bits_data_coh_state,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  input  [19:0] io_write_bits_data_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [1:0]  io_resp_0_coh_state,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [19:0] io_resp_0_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [1:0]  io_resp_1_coh_state,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [19:0] io_resp_1_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [1:0]  io_resp_2_coh_state,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [19:0] io_resp_2_tag,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [1:0]  io_resp_3_coh_state,	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
  output [19:0] io_resp_3_tag	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:318:14]
);

  wire [87:0] _tag_array_R0_data;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30]
  reg  [6:0]  rst_cnt;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24]
  wire [1:0]  _wdata_T_coh_state = rst_cnt[6] ? io_write_bits_data_coh_state : 2'h0;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24, :325:21, :327:18, generators/rocket-chip/src/main/scala/tilelink/Metadata.scala:161:16]
  wire [19:0] _wdata_T_tag = rst_cnt[6] ? io_write_bits_data_tag : 20'h0;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:300:14, :324:24, :325:21, :327:18]
  wire        tag_array_MPORT_en = ~(rst_cnt[6]) | io_write_valid;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24, :325:21, :334:17]
  always @(posedge clock) begin
    if (reset)
      rst_cnt <= 7'h0;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24]
    else if (rst_cnt[6]) begin	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24, :325:21]
    end
    else	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:325:21]
      rst_cnt <= rst_cnt + 7'h1;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24, :330:34]
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
        rst_cnt = _RANDOM[/*Zero width*/ 1'b0][6:0];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  tag_array tag_array (	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30]
    .R0_addr (io_read_bits_idx),
    .R0_en   (~tag_array_MPORT_en & io_read_valid),	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:334:17, :340:20, src/main/scala/chisel3/util/Decoupled.scala:52:35]
    .R0_clk  (clock),
    .R0_data (_tag_array_R0_data),
    .W0_addr (rst_cnt[6] ? io_write_bits_idx : rst_cnt[5:0]),	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24, :325:21, :326:18]
    .W0_en   (tag_array_MPORT_en),	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:334:17]
    .W0_clk  (clock),
    .W0_data ({_wdata_T_coh_state, _wdata_T_tag, _wdata_T_coh_state, _wdata_T_tag, _wdata_T_coh_state, _wdata_T_tag, _wdata_T_coh_state, _wdata_T_tag}),	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:327:18, :333:30]
    .W0_mask (rst_cnt[6] ? io_write_bits_way_en : 4'hF)	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24, :325:21, :328:18]
  );
  assign io_read_ready = ~tag_array_MPORT_en;	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:334:17, :340:20]
  assign io_write_ready = rst_cnt[6];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:324:24, :325:21]
  assign io_resp_0_coh_state = _tag_array_R0_data[21:20];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
  assign io_resp_0_tag = _tag_array_R0_data[19:0];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
  assign io_resp_1_coh_state = _tag_array_R0_data[43:42];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
  assign io_resp_1_tag = _tag_array_R0_data[41:22];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
  assign io_resp_2_coh_state = _tag_array_R0_data[65:64];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
  assign io_resp_2_tag = _tag_array_R0_data[63:44];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
  assign io_resp_3_coh_state = _tag_array_R0_data[87:86];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
  assign io_resp_3_tag = _tag_array_R0_data[85:66];	// @[generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:333:30, :338:75]
endmodule
