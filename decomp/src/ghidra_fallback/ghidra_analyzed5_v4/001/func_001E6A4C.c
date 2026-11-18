#include "ghidra_types.h"


// USA 001E6A4C <- EU 001E6A4C (Ghidra, non-matching)

ulonglong func_001E6A4C(int param_1)

{
  return (ulonglong)CONCAT14(*(undefined1 *)(param_1 + 0x9f9),param_1);
}

