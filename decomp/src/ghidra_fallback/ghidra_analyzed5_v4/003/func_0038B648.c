#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_0038b644;

// USA 0038B648 <- EU 0038B624 (Ghidra, non-matching)
// GLOBAL DAT_0038b644 undefined4

undefined4 * func_0038B648(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_0038b644;
  puVar1[0x1c] = *(undefined4 *)(puVar1[10] + 0x654);
  return puVar1;
}

