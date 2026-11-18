#include "ghidra_types.h"

extern float func_00521298(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065F7E8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0024b358;
extern int DAT_0024b35c;

// USA 0024B2F0 <- EU 0024B2F0 (Ghidra, non-matching)
// GLOBAL DAT_0024b358 undefined4
// GLOBAL DAT_0024b35c int

undefined4 func_0024B2F0(int param_1)

{
  bool bVar1;
  float fVar2;
  
  if (*(short *)(param_1 + 0x36) == 0) {
    fVar2 = func_00521298(param_1);
    if (DAT_0024b35c <= (int)ALBW_AS_U32(fVar2)) {
      return 0;
    }
  }
  else {
    bVar1 = func_00588BF0(param_1,0);
    if (!bVar1) {
      return 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x134) = DAT_0024b358;
  }
  return func_0065F7E8((undefined4 *)(param_1 + 0x41c),2);
}

