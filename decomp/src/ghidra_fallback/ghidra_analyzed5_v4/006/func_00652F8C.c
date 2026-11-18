#include "ghidra_types.h"


// USA 00652F8C <- EU 00652F64 (Ghidra, non-matching)

bool func_00652F8C(int param_1)

{
  if (*(char *)(param_1 + 0x9d3) == '\x02') {
    *(undefined1 *)(param_1 + 0x9d3) = 3;
    return false;
  }
  return *(char *)(param_1 + 0x9d3) != '\x03';
}

