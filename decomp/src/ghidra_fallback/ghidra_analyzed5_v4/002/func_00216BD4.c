#include "ghidra_types.h"

extern int func_00215B90(int param_1,float fparam_0);
extern int func_002160F0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_00521078(int param_1);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern float DAT_00216c58;
extern undefined4 DAT_00216c5c;

// USA 00216BD4 <- EU 00216BD4 (Ghidra, non-matching)
// GLOBAL DAT_00216c58 float
// GLOBAL DAT_00216c5c undefined4

void func_00216BD4(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_r2;
  uint in_r3;
  
  bVar2 = func_00521078(param_1);
  if (bVar2) {
    func_0065D9FC((undefined4 *)(param_1 + 0x8bc),6);
    *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_1 + 0x3d4);
  }
  if (*(uint *)(param_1 + 0xad0) < *(uint *)(param_1 + 0xad4)) {
    *(uint *)(param_1 + 0xad0) = *(uint *)(param_1 + 0xad0) + 1;
  }
  else {
    iVar3 = func_002160F0(param_1,*(uint *)(param_1 + 0xad4),in_r2,in_r3);
    if (iVar3 != 0) {
      func_00215B90(param_1,DAT_00216c58);
    }
    uVar1 = DAT_00216c5c;
    *(undefined4 *)(param_1 + 0xad4) = 2;
    *(undefined4 *)(param_1 + 0xad8) = uVar1;
    *(undefined4 *)(param_1 + 0xad0) = 0;
  }
  return;
}

