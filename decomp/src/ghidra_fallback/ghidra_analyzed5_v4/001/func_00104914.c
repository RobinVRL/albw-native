#include "ghidra_types.h"

extern int func_00108AA4(uint *param_1,undefined1 param_2);
extern char *DAT_00104938;
extern uint *DAT_0010493c;

// USA 00104914 <- EU 00104914 (Ghidra, non-matching)
// GLOBAL DAT_00104938 char *
// GLOBAL DAT_0010493c uint *

undefined4 func_00104914(undefined4 param_1)

{
  if (*DAT_00104938 != '\0') {
    return func_00108AA4(DAT_0010493c,0);
  }
  return 0;
}

