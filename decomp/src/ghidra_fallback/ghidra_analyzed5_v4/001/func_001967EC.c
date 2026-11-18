#include "ghidra_types.h"

extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern float DAT_0019689c;
extern float DAT_001968a0;

// USA 001967EC <- EU 001967EC (Ghidra, non-matching)
// GLOBAL DAT_0019689c float
// GLOBAL DAT_001968a0 float

undefined4 func_001967EC(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x36) == 0) {
    iVar3 = func_005211F4(param_1,DAT_001968a0,DAT_0019689c);
    if (iVar3 != 0) goto LAB_00196834;
  }
  else {
    bVar1 = func_00588BF0(param_1,0);
    if (bVar1) {
LAB_00196834:
      return func_00659A54((undefined4 *)(param_1 + 0x41c),3);
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  iVar3 = func_00260C78(*(float *)(iVar3 + 0x14),*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                        *(float *)(iVar3 + 0x14));
  if ((iVar3 != 0) &&
     (uVar2 = *(int *)(param_1 + 0x44c) + 1, *(uint *)(param_1 + 0x44c) = uVar2,
     *(uint *)(param_1 + 0x448) <= uVar2)) {
    return func_00659A54((undefined4 *)(param_1 + 0x41c),1);
  }
  return 0;
}

