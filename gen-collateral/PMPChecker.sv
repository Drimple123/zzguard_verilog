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

module PMPChecker(
  input  [1:0]  io_prv,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_0_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_0_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_0_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_0_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_0_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_0_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_0_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_1_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_1_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_1_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_1_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_1_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_1_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_1_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_2_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_2_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_2_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_2_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_2_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_2_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_2_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_3_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_3_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_3_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_3_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_3_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_3_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_3_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_4_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_4_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_4_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_4_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_4_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_4_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_4_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_5_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_5_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_5_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_5_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_5_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_5_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_5_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_6_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_6_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_6_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_6_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_6_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_6_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_6_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_7_cfg_l,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_pmp_7_cfg_a,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input         io_pmp_7_cfg_x,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_7_cfg_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_pmp_7_cfg_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [29:0] io_pmp_7_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [31:0] io_pmp_7_mask,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_addr,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  input  [1:0]  io_size,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
  output        io_r,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_w,	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
                io_x	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:145:14]
);

  wire [5:0] _GEN = {4'h0, io_size};	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_lsbMask_T_1 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_T_4 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit = io_pmp_7_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_7_addr[29:1]) & ~(io_pmp_7_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_7_addr[0], 2'h0}) & ~(io_pmp_7_mask[2:0] | ~(_res_hit_lsbMask_T_1[2:0]))) == 3'h0 : io_pmp_7_cfg_a[0] & ~(io_addr[31:3] < io_pmp_6_addr[29:1] | (io_addr[31:3] ^ io_pmp_6_addr[29:1]) == 29'h0 & (io_addr[2:0] | ~(_res_hit_T_4[2:0])) < {io_pmp_6_addr[0], 2'h0}) & (io_addr[31:3] < io_pmp_7_addr[29:1] | (io_addr[31:3] ^ io_pmp_7_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_7_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{42,53,64}, :83:{16,30}, :88:5, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore = io_prv[1] & ~io_pmp_7_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_1 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask = ~(_res_aligned_lsbMask_T_1[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned = io_pmp_7_cfg_a[1] ? (res_aligned_lsbMask & ~(io_pmp_7_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_6_addr[29:1]) == 29'h0 & io_pmp_6_addr[0] & ~(io_addr[2]) | (io_addr[31:3] ^ io_pmp_7_addr[29:1]) == 29'h0 & io_pmp_7_addr[0] & (io_addr[2] | res_aligned_lsbMask[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:{28,55}, :82:64, :123:{49,67,82,90,127}, :124:{49,62,77,85,136}, :125:{24,46}, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  wire [5:0] _res_hit_lsbMask_T_5 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_T_18 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit_1 = io_pmp_6_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_6_addr[29:1]) & ~(io_pmp_6_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_6_addr[0], 2'h0}) & ~(io_pmp_6_mask[2:0] | ~(_res_hit_lsbMask_T_5[2:0]))) == 3'h0 : io_pmp_6_cfg_a[0] & ~(io_addr[31:3] < io_pmp_5_addr[29:1] | (io_addr[31:3] ^ io_pmp_5_addr[29:1]) == 29'h0 & (io_addr[2:0] | ~(_res_hit_T_18[2:0])) < {io_pmp_5_addr[0], 2'h0}) & (io_addr[31:3] < io_pmp_6_addr[29:1] | (io_addr[31:3] ^ io_pmp_6_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_6_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{42,53,64}, :83:{16,30}, :88:5, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore_1 = io_prv[1] & ~io_pmp_6_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_4 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask_1 = ~(_res_aligned_lsbMask_T_4[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned_1 = io_pmp_6_cfg_a[1] ? (res_aligned_lsbMask_1 & ~(io_pmp_6_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_5_addr[29:1]) == 29'h0 & io_pmp_5_addr[0] & ~(io_addr[2]) | (io_addr[31:3] ^ io_pmp_6_addr[29:1]) == 29'h0 & io_pmp_6_addr[0] & (io_addr[2] | res_aligned_lsbMask_1[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:28, :82:64, :123:{49,67,82,90,127}, :124:{49,62,77,85,136}, :125:{24,46}, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  wire [5:0] _res_hit_lsbMask_T_9 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_T_32 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit_2 = io_pmp_5_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_5_addr[29:1]) & ~(io_pmp_5_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_5_addr[0], 2'h0}) & ~(io_pmp_5_mask[2:0] | ~(_res_hit_lsbMask_T_9[2:0]))) == 3'h0 : io_pmp_5_cfg_a[0] & ~(io_addr[31:3] < io_pmp_4_addr[29:1] | (io_addr[31:3] ^ io_pmp_4_addr[29:1]) == 29'h0 & (io_addr[2:0] | ~(_res_hit_T_32[2:0])) < {io_pmp_4_addr[0], 2'h0}) & (io_addr[31:3] < io_pmp_5_addr[29:1] | (io_addr[31:3] ^ io_pmp_5_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_5_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{42,53,64}, :83:{16,30}, :88:5, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore_2 = io_prv[1] & ~io_pmp_5_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_7 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask_2 = ~(_res_aligned_lsbMask_T_7[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned_2 = io_pmp_5_cfg_a[1] ? (res_aligned_lsbMask_2 & ~(io_pmp_5_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_4_addr[29:1]) == 29'h0 & io_pmp_4_addr[0] & ~(io_addr[2]) | (io_addr[31:3] ^ io_pmp_5_addr[29:1]) == 29'h0 & io_pmp_5_addr[0] & (io_addr[2] | res_aligned_lsbMask_2[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:28, :82:64, :123:{49,67,82,90,127}, :124:{49,62,77,85,136}, :125:{24,46}, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  wire [5:0] _res_hit_lsbMask_T_13 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_T_46 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit_3 = io_pmp_4_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_4_addr[29:1]) & ~(io_pmp_4_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_4_addr[0], 2'h0}) & ~(io_pmp_4_mask[2:0] | ~(_res_hit_lsbMask_T_13[2:0]))) == 3'h0 : io_pmp_4_cfg_a[0] & ~(io_addr[31:3] < io_pmp_3_addr[29:1] | (io_addr[31:3] ^ io_pmp_3_addr[29:1]) == 29'h0 & (io_addr[2:0] | ~(_res_hit_T_46[2:0])) < {io_pmp_3_addr[0], 2'h0}) & (io_addr[31:3] < io_pmp_4_addr[29:1] | (io_addr[31:3] ^ io_pmp_4_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_4_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{42,53,64}, :83:{16,30}, :88:5, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore_3 = io_prv[1] & ~io_pmp_4_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_10 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask_3 = ~(_res_aligned_lsbMask_T_10[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned_3 = io_pmp_4_cfg_a[1] ? (res_aligned_lsbMask_3 & ~(io_pmp_4_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_3_addr[29:1]) == 29'h0 & io_pmp_3_addr[0] & ~(io_addr[2]) | (io_addr[31:3] ^ io_pmp_4_addr[29:1]) == 29'h0 & io_pmp_4_addr[0] & (io_addr[2] | res_aligned_lsbMask_3[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:28, :82:64, :123:{49,67,82,90,127}, :124:{49,62,77,85,136}, :125:{24,46}, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  wire [5:0] _res_hit_lsbMask_T_17 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_T_60 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit_4 = io_pmp_3_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_3_addr[29:1]) & ~(io_pmp_3_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_3_addr[0], 2'h0}) & ~(io_pmp_3_mask[2:0] | ~(_res_hit_lsbMask_T_17[2:0]))) == 3'h0 : io_pmp_3_cfg_a[0] & ~(io_addr[31:3] < io_pmp_2_addr[29:1] | (io_addr[31:3] ^ io_pmp_2_addr[29:1]) == 29'h0 & (io_addr[2:0] | ~(_res_hit_T_60[2:0])) < {io_pmp_2_addr[0], 2'h0}) & (io_addr[31:3] < io_pmp_3_addr[29:1] | (io_addr[31:3] ^ io_pmp_3_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_3_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{42,53,64}, :83:{16,30}, :88:5, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore_4 = io_prv[1] & ~io_pmp_3_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_13 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask_4 = ~(_res_aligned_lsbMask_T_13[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned_4 = io_pmp_3_cfg_a[1] ? (res_aligned_lsbMask_4 & ~(io_pmp_3_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_2_addr[29:1]) == 29'h0 & io_pmp_2_addr[0] & ~(io_addr[2]) | (io_addr[31:3] ^ io_pmp_3_addr[29:1]) == 29'h0 & io_pmp_3_addr[0] & (io_addr[2] | res_aligned_lsbMask_4[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:28, :82:64, :123:{49,67,82,90,127}, :124:{49,62,77,85,136}, :125:{24,46}, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  wire [5:0] _res_hit_lsbMask_T_21 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_T_74 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit_5 = io_pmp_2_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_2_addr[29:1]) & ~(io_pmp_2_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_2_addr[0], 2'h0}) & ~(io_pmp_2_mask[2:0] | ~(_res_hit_lsbMask_T_21[2:0]))) == 3'h0 : io_pmp_2_cfg_a[0] & ~(io_addr[31:3] < io_pmp_1_addr[29:1] | (io_addr[31:3] ^ io_pmp_1_addr[29:1]) == 29'h0 & (io_addr[2:0] | ~(_res_hit_T_74[2:0])) < {io_pmp_1_addr[0], 2'h0}) & (io_addr[31:3] < io_pmp_2_addr[29:1] | (io_addr[31:3] ^ io_pmp_2_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_2_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{42,53,64}, :83:{16,30}, :88:5, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore_5 = io_prv[1] & ~io_pmp_2_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_16 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask_5 = ~(_res_aligned_lsbMask_T_16[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned_5 = io_pmp_2_cfg_a[1] ? (res_aligned_lsbMask_5 & ~(io_pmp_2_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_1_addr[29:1]) == 29'h0 & io_pmp_1_addr[0] & ~(io_addr[2]) | (io_addr[31:3] ^ io_pmp_2_addr[29:1]) == 29'h0 & io_pmp_2_addr[0] & (io_addr[2] | res_aligned_lsbMask_5[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:28, :82:64, :123:{49,67,82,90,127}, :124:{49,62,77,85,136}, :125:{24,46}, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  wire [5:0] _res_hit_lsbMask_T_25 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [5:0] _res_hit_T_88 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit_6 = io_pmp_1_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_1_addr[29:1]) & ~(io_pmp_1_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_1_addr[0], 2'h0}) & ~(io_pmp_1_mask[2:0] | ~(_res_hit_lsbMask_T_25[2:0]))) == 3'h0 : io_pmp_1_cfg_a[0] & ~(io_addr[31:3] < io_pmp_0_addr[29:1] | (io_addr[31:3] ^ io_pmp_0_addr[29:1]) == 29'h0 & (io_addr[2:0] | ~(_res_hit_T_88[2:0])) < {io_pmp_0_addr[0], 2'h0}) & (io_addr[31:3] < io_pmp_1_addr[29:1] | (io_addr[31:3] ^ io_pmp_1_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_1_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{42,53,64}, :83:{16,30}, :88:5, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore_6 = io_prv[1] & ~io_pmp_1_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_19 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask_6 = ~(_res_aligned_lsbMask_T_19[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned_6 = io_pmp_1_cfg_a[1] ? (res_aligned_lsbMask_6 & ~(io_pmp_1_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_0_addr[29:1]) == 29'h0 & io_pmp_0_addr[0] & ~(io_addr[2]) | (io_addr[31:3] ^ io_pmp_1_addr[29:1]) == 29'h0 & io_pmp_1_addr[0] & (io_addr[2] | res_aligned_lsbMask_6[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:28, :82:64, :123:{49,67,82,90,127}, :124:{49,62,77,85,136}, :125:{24,46}, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  wire [5:0] _res_hit_lsbMask_T_29 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire       res_hit_7 = io_pmp_0_cfg_a[1] ? ((io_addr[31:3] ^ io_pmp_0_addr[29:1]) & ~(io_pmp_0_mask[31:3])) == 29'h0 & ((io_addr[2:0] ^ {io_pmp_0_addr[0], 2'h0}) & ~(io_pmp_0_mask[2:0] | ~(_res_hit_lsbMask_T_29[2:0]))) == 3'h0 : io_pmp_0_cfg_a[0] & (io_addr[31:3] < io_pmp_0_addr[29:1] | (io_addr[31:3] ^ io_pmp_0_addr[29:1]) == 29'h0 & io_addr[2:0] < {io_pmp_0_addr[0], 2'h0});	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :46:26, :60:36, :63:{47,52,54,58}, :68:26, :69:{29,53,72}, :70:{28,55}, :71:16, :80:{39,52}, :81:{41,54,69}, :82:{53,64}, :83:{16,30}, :132:{8,61}, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_ignore_7 = io_prv[1] & ~io_pmp_0_cfg_l;	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:155:56, :163:{26,29}]
  wire [5:0] _res_aligned_lsbMask_T_22 = 6'h7 << _GEN;	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:71]
  wire [2:0] res_aligned_lsbMask_7 = ~(_res_aligned_lsbMask_T_22[2:0]);	// @[generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71,76}]
  wire       res_aligned_7 = io_pmp_0_cfg_a[1] ? (res_aligned_lsbMask_7 & ~(io_pmp_0_mask[2:0])) == 3'h0 : ~((io_addr[31:3] ^ io_pmp_0_addr[29:1]) == 29'h0 & io_pmp_0_addr[0] & (io_addr[2] | res_aligned_lsbMask_7[2]));	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:45:20, :63:58, :69:29, :70:28, :82:64, :124:{49,62,77,85,136}, :125:24, :126:{32,34,39,57}, :127:8, generators/rocket-chip/src/main/scala/util/package.scala:235:{46,71}]
  assign io_r = res_hit_7 ? res_aligned_7 & (io_pmp_0_cfg_r | res_ignore_7) : res_hit_6 ? res_aligned_6 & (io_pmp_1_cfg_r | res_ignore_6) : res_hit_5 ? res_aligned_5 & (io_pmp_2_cfg_r | res_ignore_5) : res_hit_4 ? res_aligned_4 & (io_pmp_3_cfg_r | res_ignore_4) : res_hit_3 ? res_aligned_3 & (io_pmp_4_cfg_r | res_ignore_3) : res_hit_2 ? res_aligned_2 & (io_pmp_5_cfg_r | res_ignore_2) : res_hit_1 ? res_aligned_1 & (io_pmp_6_cfg_r | res_ignore_1) : res_hit ? res_aligned & (io_pmp_7_cfg_r | res_ignore) : io_prv[1];	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:127:8, :132:8, :155:56, :163:26, :181:{26,40}, :184:8]
  assign io_w = res_hit_7 ? res_aligned_7 & (io_pmp_0_cfg_w | res_ignore_7) : res_hit_6 ? res_aligned_6 & (io_pmp_1_cfg_w | res_ignore_6) : res_hit_5 ? res_aligned_5 & (io_pmp_2_cfg_w | res_ignore_5) : res_hit_4 ? res_aligned_4 & (io_pmp_3_cfg_w | res_ignore_4) : res_hit_3 ? res_aligned_3 & (io_pmp_4_cfg_w | res_ignore_3) : res_hit_2 ? res_aligned_2 & (io_pmp_5_cfg_w | res_ignore_2) : res_hit_1 ? res_aligned_1 & (io_pmp_6_cfg_w | res_ignore_1) : res_hit ? res_aligned & (io_pmp_7_cfg_w | res_ignore) : io_prv[1];	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:127:8, :132:8, :155:56, :163:26, :182:{26,40}, :184:8]
  assign io_x = res_hit_7 ? res_aligned_7 & (io_pmp_0_cfg_x | res_ignore_7) : res_hit_6 ? res_aligned_6 & (io_pmp_1_cfg_x | res_ignore_6) : res_hit_5 ? res_aligned_5 & (io_pmp_2_cfg_x | res_ignore_5) : res_hit_4 ? res_aligned_4 & (io_pmp_3_cfg_x | res_ignore_4) : res_hit_3 ? res_aligned_3 & (io_pmp_4_cfg_x | res_ignore_3) : res_hit_2 ? res_aligned_2 & (io_pmp_5_cfg_x | res_ignore_2) : res_hit_1 ? res_aligned_1 & (io_pmp_6_cfg_x | res_ignore_1) : res_hit ? res_aligned & (io_pmp_7_cfg_x | res_ignore) : io_prv[1];	// @[generators/rocket-chip/src/main/scala/rocket/PMP.scala:127:8, :132:8, :155:56, :163:26, :183:{26,40}, :184:8]
endmodule

