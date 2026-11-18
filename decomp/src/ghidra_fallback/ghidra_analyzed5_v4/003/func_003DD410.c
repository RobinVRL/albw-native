#include "ghidra_types.h"

extern int func_003DCE04(void);

// USA 003DD410 <- EU 003DD3F0 (Ghidra, non-matching)

void func_003DD410(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_003DCE04();
  if (*(char *)(puVar1 + 0xc) == '\0') {
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_1;
  }
  return;
}

