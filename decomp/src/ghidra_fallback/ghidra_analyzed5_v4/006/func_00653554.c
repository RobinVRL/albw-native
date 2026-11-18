#include "ghidra_types.h"


// USA 00653554 <- EU 0065352C (Ghidra, non-matching)

bool func_00653554(int param_1)

{
  if (*(char *)(param_1 + 0x9d3) == '\x02') {
    *(undefined1 *)(param_1 + 0x9d3) = 3;
    return false;
  }
  return *(char *)(param_1 + 0x9d3) != '\x03';
}

