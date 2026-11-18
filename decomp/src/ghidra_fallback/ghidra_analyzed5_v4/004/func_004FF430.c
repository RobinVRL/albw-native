// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00521100(int param_1,float fparam_0);
extern float func_00521298(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0066AF2C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004ff478;
extern int DAT_004ff47c;

// USA 004FF430 <- EU 004FF408 (Ghidra, non-matching)
// GLOBAL DAT_004ff478 float
// GLOBAL DAT_004ff47c int

undefined4 func_004FF430(int param_1)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  
  if (*(short *)(param_1 + 0x2e) == 1) {
    uVar2 = func_00521100(param_1,DAT_004ff478);
    fVar3 = func_00521298(param_1);
    if (((int)ALBW_AS_U32(fVar3) < DAT_004ff47c & uVar2) == 0) {
      return 0;
    }
  }
  else {
    bVar1 = func_00588BF0(param_1,0);
    if (!bVar1) {
      return 0;
    }
  }
  return func_0066AF2C((undefined4 *)(param_1 + 0x8bc),1);
}

