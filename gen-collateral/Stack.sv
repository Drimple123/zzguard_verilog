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

module Stack(
  input         clock,
                reset,
                io_push,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:53:14]
                io_pop,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:53:14]
  input  [63:0] io_dataIn,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:53:14]
  output [63:0] io_dataOut	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:53:14]
);

  wire [39:0] _stack_mem_ext_R0_data;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:63:22]
  reg  [5:0]  sp;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19]
  reg  [39:0] out;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:66:20]
  wire [5:0]  _sp_T_2 = sp - 6'h1;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19, :84:26]
  wire        _GEN = io_pop & (|sp);	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19, :66:20, :82:23, :83:{15,21}, :84:11]
  always @(posedge clock) begin
    if (reset) begin
      sp <= 6'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19]
      out <= 40'h0;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:66:20]
    end
    else begin
      if (io_push)	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:53:14]
        sp <= sp + 6'h1;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19, :74:18]
      else if (_GEN)	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:66:20, :82:23, :83:21, :84:11]
        sp <= _sp_T_2;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19, :84:26]
      if (io_push | ~_GEN) begin	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:66:20, :71:19, :82:23, :83:21, :84:11]
      end
      else	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:66:20, :71:19, :82:23]
        out <= _stack_mem_ext_R0_data;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:63:22, :66:20]
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
        sp = _RANDOM[1'h0][5:0];	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19]
        out = {_RANDOM[1'h0][31:6], _RANDOM[1'h1][13:0]};	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19, :66:20]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  stack_mem_64x40 stack_mem_ext (	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:63:22]
    .R0_addr (_sp_T_2),	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:84:26]
    .R0_en   (~io_push & io_pop & (|sp)),	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:63:22, :64:19, :71:19, :82:23, :83:15]
    .R0_clk  (clock),
    .R0_data (_stack_mem_ext_R0_data),
    .W0_addr (sp),	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:64:19]
    .W0_en   (io_push),
    .W0_clk  (clock),
    .W0_data (io_dataIn[39:0])	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:70:16]
  );
  assign io_dataOut = {24'h0, out};	// @[generators/rocket-chip/src/main/scala/zzguard_rr/shadow_stack.scala:66:20, :95:14]
endmodule
