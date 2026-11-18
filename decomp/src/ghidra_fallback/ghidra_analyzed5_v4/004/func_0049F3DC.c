#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern undefined4 DAT_0049f3e4;

// USA 0049F3DC <- EU 0049F3B4 (Ghidra, non-matching)
// GLOBAL DAT_0049f3e4 undefined4

undefined4 * func_0049F3DC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0010CE7C(param_1);
  *puVar1 = DAT_0049f3e4;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1 = func_0010B830(puVar1 + 6);
  puVar1[7] = 0;
  return puVar1 + -6;
}

