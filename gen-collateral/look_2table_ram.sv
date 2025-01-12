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

module look_2table_ram(
  input        clock,
  input  [6:0] io_opcode,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
  output [3:0] io_sel,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
               io_bitmap,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
  input        io_ren1,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
               io_ren2,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
               io_wen1,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
  input  [6:0] io_addr1,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
  input  [3:0] io_data_in1,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
  input        io_wen2,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
  input  [1:0] io_addr2,	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
  input  [3:0] io_data_in2	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:59:14]
);

  wire [3:0] _table1_io_bitmap;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:76:22]
  look_table1 table1 (	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:76:22]
    .clock      (clock),
    .io_opcode  (io_opcode),
    .io_data_in (io_data_in1),
    .io_addr    (io_addr1),
    .io_ren     (io_ren1),
    .io_wen     (io_wen1),
    .io_bitmap  (_table1_io_bitmap)
  );
  look_table2 table2 (	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:77:22]
    .clock      (clock),
    .io_bitmap  (_table1_io_bitmap),	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:76:22]
    .io_data_in (io_data_in2),
    .io_addr    (io_addr2),
    .io_ren     (io_ren2),
    .io_wen     (io_wen2),
    .io_sel     (io_sel)
  );
  assign io_bitmap = _table1_io_bitmap;	// @[generators/rocket-chip/src/main/scala/zzguard_rr/look_table_new.scala:76:22]
endmodule

