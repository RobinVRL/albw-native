#include "ghidra_types.h"

extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern float DAT_00195860;
extern float DAT_00195864;

// USA 0019579C <- EU 0019579C (Ghidra, non-matching)
// GLOBAL DAT_00195860 float
// GLOBAL DAT_00195864 float

undefined4 func_0019579C(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = DAT_00195860;
  if (*(short *)(param_1 + 0x36) == 0) {
    iVar2 = func_005211F4(param_1,DAT_00195864,DAT_00195860);
    if (iVar2 != 0) goto LAB_001957ec;
  }
  else {
    bVar1 = func_00588BF0(param_1,0);
    if (bVar1) {
LAB_001957ec:
      return func_00659A54((undefined4 *)(param_1 + 0x41c),3);
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < fVar3) {
      if (*(float *)(iVar2 + 8) <= fVar3) goto LAB_0019584c;
    }
    else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) {
LAB_0019584c:
      return func_00659A54((undefined4 *)(param_1 + 0x41c),0);
    }
  }
  return 0;
}

