/* Small SDK replacements found while driving the boot (see native/BOOT_LOG.md).
 * Each function: USA address, API meaning, evidence, confidence. */
#include <stdint.h>
#include "../runtime/runtime.h"

/* USA 0010AC24 (EU 0010AC24) nn::err ThrowFatalErr(Result, pc): fills the diagnostic record at
 * 0079CCA8 and sends it to the err:f service (00104560 -> svc ConnectToPort / IPC), which shows
 * the fatal-error screen and never returns.  Native meaning: report and abort.  The pc is the
 * ARM address of the call site in the EU binary (literal in Ghidra-derived code).
 * Confidence: high (matched source src/work7/gpt15/variants/0010AC24). */
void func_0010AC24(uint32_t result, uint32_t pc) {
    runtime_fatal("nn::err::ThrowFatalErr result=0x%08X at EU pc 0x%08X (description %u, module %u, "
                  "summary %u, level %u)", result, pc, result & 0x3FF, (result >> 10) & 0xFF,
                  (result >> 21) & 0x3F, (result >> 27) & 0x1F);
}
