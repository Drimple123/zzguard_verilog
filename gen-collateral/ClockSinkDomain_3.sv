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

module ClockSinkDomain_3(
  input         auto_serdesser_client_out_a_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_serdesser_client_out_a_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [2:0]  auto_serdesser_client_out_a_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_serdesser_client_out_a_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [3:0]  auto_serdesser_client_out_a_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [7:0]  auto_serdesser_client_out_a_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [31:0] auto_serdesser_client_out_a_bits_address,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [7:0]  auto_serdesser_client_out_a_bits_mask,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output [63:0] auto_serdesser_client_out_a_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        auto_serdesser_client_out_a_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_serdesser_client_out_d_ready,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_serdesser_client_out_d_valid,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_serdesser_client_out_d_bits_opcode,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [1:0]  auto_serdesser_client_out_d_bits_param,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [3:0]  auto_serdesser_client_out_d_bits_size,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [7:0]  auto_serdesser_client_out_d_bits_source,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [2:0]  auto_serdesser_client_out_d_bits_sink,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_serdesser_client_out_d_bits_denied,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input  [63:0] auto_serdesser_client_out_d_bits_data,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  input         auto_serdesser_client_out_d_bits_corrupt,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_clock_in_clock,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
                auto_clock_in_reset,	// @[generators/rocket-chip/src/main/scala/diplomacy/LazyModule.scala:367:18]
  output        serial_tl_0_in_ready,	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:152:24]
  input         serial_tl_0_in_valid,	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:152:24]
  input  [31:0] serial_tl_0_in_bits,	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:152:24]
  input         serial_tl_0_out_ready,	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:152:24]
  output        serial_tl_0_out_valid,	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:152:24]
  output [31:0] serial_tl_0_out_bits,	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:152:24]
  input         serial_tl_0_clock_in	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:152:24]
);

  wire        _in_async_io_deq_valid;	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:190:32]
  wire [31:0] _in_async_io_deq_bits;	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:190:32]
  wire        _out_async_io_enq_ready;	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:182:33]
  wire        _outer_reset_catcher_io_sync_reset;	// @[generators/rocket-chip/src/main/scala/util/ResetCatchAndSync.scala:39:28]
  wire        _serdesser_io_ser_in_ready;	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:124:50]
  wire        _serdesser_io_ser_out_valid;	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:124:50]
  wire [31:0] _serdesser_io_ser_out_bits;	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:124:50]
  TLSerdesser serdesser (	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:124:50]
    .clock                          (auto_clock_in_clock),
    .reset                          (auto_clock_in_reset),
    .auto_client_out_a_ready        (auto_serdesser_client_out_a_ready),
    .auto_client_out_a_valid        (auto_serdesser_client_out_a_valid),
    .auto_client_out_a_bits_opcode  (auto_serdesser_client_out_a_bits_opcode),
    .auto_client_out_a_bits_param   (auto_serdesser_client_out_a_bits_param),
    .auto_client_out_a_bits_size    (auto_serdesser_client_out_a_bits_size),
    .auto_client_out_a_bits_source  (auto_serdesser_client_out_a_bits_source),
    .auto_client_out_a_bits_address (auto_serdesser_client_out_a_bits_address),
    .auto_client_out_a_bits_mask    (auto_serdesser_client_out_a_bits_mask),
    .auto_client_out_a_bits_data    (auto_serdesser_client_out_a_bits_data),
    .auto_client_out_a_bits_corrupt (auto_serdesser_client_out_a_bits_corrupt),
    .auto_client_out_d_ready        (auto_serdesser_client_out_d_ready),
    .auto_client_out_d_valid        (auto_serdesser_client_out_d_valid),
    .auto_client_out_d_bits_opcode  (auto_serdesser_client_out_d_bits_opcode),
    .auto_client_out_d_bits_param   (auto_serdesser_client_out_d_bits_param),
    .auto_client_out_d_bits_size    (auto_serdesser_client_out_d_bits_size),
    .auto_client_out_d_bits_source  (auto_serdesser_client_out_d_bits_source),
    .auto_client_out_d_bits_sink    (auto_serdesser_client_out_d_bits_sink),
    .auto_client_out_d_bits_denied  (auto_serdesser_client_out_d_bits_denied),
    .auto_client_out_d_bits_data    (auto_serdesser_client_out_d_bits_data),
    .auto_client_out_d_bits_corrupt (auto_serdesser_client_out_d_bits_corrupt),
    .io_ser_in_ready                (_serdesser_io_ser_in_ready),
    .io_ser_in_valid                (_in_async_io_deq_valid),	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:190:32]
    .io_ser_in_bits                 (_in_async_io_deq_bits),	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:190:32]
    .io_ser_out_ready               (_out_async_io_enq_ready),	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:182:33]
    .io_ser_out_valid               (_serdesser_io_ser_out_valid),
    .io_ser_out_bits                (_serdesser_io_ser_out_bits)
  );
  ResetCatchAndSync_d3 outer_reset_catcher (	// @[generators/rocket-chip/src/main/scala/util/ResetCatchAndSync.scala:39:28]
    .clock         (serial_tl_0_clock_in),
    .reset         (auto_clock_in_reset),
    .io_sync_reset (_outer_reset_catcher_io_sync_reset)
  );
  AsyncQueue out_async (	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:182:33]
    .io_enq_clock (auto_clock_in_clock),
    .io_enq_reset (auto_clock_in_reset),
    .io_enq_ready (_out_async_io_enq_ready),
    .io_enq_valid (_serdesser_io_ser_out_valid),	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:124:50]
    .io_enq_bits  (_serdesser_io_ser_out_bits),	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:124:50]
    .io_deq_clock (serial_tl_0_clock_in),
    .io_deq_reset (_outer_reset_catcher_io_sync_reset),	// @[generators/rocket-chip/src/main/scala/util/ResetCatchAndSync.scala:39:28]
    .io_deq_ready (serial_tl_0_out_ready),
    .io_deq_valid (serial_tl_0_out_valid),
    .io_deq_bits  (serial_tl_0_out_bits)
  );
  AsyncQueue in_async (	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:190:32]
    .io_enq_clock (serial_tl_0_clock_in),
    .io_enq_reset (_outer_reset_catcher_io_sync_reset),	// @[generators/rocket-chip/src/main/scala/util/ResetCatchAndSync.scala:39:28]
    .io_enq_ready (serial_tl_0_in_ready),
    .io_enq_valid (serial_tl_0_in_valid),
    .io_enq_bits  (serial_tl_0_in_bits),
    .io_deq_clock (auto_clock_in_clock),
    .io_deq_reset (auto_clock_in_reset),
    .io_deq_ready (_serdesser_io_ser_in_ready),	// @[generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:124:50]
    .io_deq_valid (_in_async_io_deq_valid),
    .io_deq_bits  (_in_async_io_deq_bits)
  );
endmodule
