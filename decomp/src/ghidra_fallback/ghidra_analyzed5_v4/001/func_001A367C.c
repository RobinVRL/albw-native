// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00521100(int param_1,float fparam_0);
extern float func_00521298(int param_1);
extern int func_0065A474(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a36e8;
extern int DAT_001a36ec;

// USA 001A367C <- EU 001A367C (Ghidra, non-matching)
// GLOBAL DAT_001a36e8 float
// GLOBAL DAT_001a36ec int

void func_001A367C(int param_1)

{
  uint uVar1;
  float fVar2;
  
  if (*(uint *)(param_1 + 0x978) < *(uint *)(param_1 + 0x97c)) {
    *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) + 1;
  }
  else {
    uVar1 = func_00521100(param_1,DAT_001a36e8);
    fVar2 = func_00521298(param_1);
    if (((int)ALBW_AS_U32(fVar2) < DAT_001a36ec & uVar1) != 0) {
      func_0065A474((undefined4 *)(param_1 + 0x8bc),1);
    }
  }
  return;
}

