#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_00259118(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00407B38(int param_1,undefined4 param_2,float fparam_0);
extern int func_00407EF8(int param_1,int param_2,float fparam_0);
extern int func_004EB350(int param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern float DAT_002954b8;
extern float DAT_002954bc;
extern int *DAT_002954c0;

// USA 0029536C <- EU 00295394 (Ghidra, non-matching)
// GLOBAL DAT_002954b8 float
// GLOBAL DAT_002954bc float
// GLOBAL DAT_002954c0 int *

undefined4 func_0029536C(int param_1)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 in_r2;
  int *in_r3;
  int iVar2;
  int iVar3;
  float fparam_0;
  
  fparam_0 = DAT_002954b8;
  func_00407B38(*(int *)(param_1 + 0xbc),2,DAT_002954b8);
  *(float *)(*(int *)(param_1 + 0xbc) + 0x40) = fparam_0;
  func_00407EF8(*(int *)(param_1 + 0xbc),0,fparam_0);
  func_00407EF8(*(int *)(param_1 + 0xbc),1,fparam_0);
  *(float *)(*(int *)(param_1 + 0xbc) + 0x4c) = fparam_0;
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x180);
  }
  func_0010C7F8(iVar1,10,DAT_002954bc);
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & 0xfffffffe;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x18);
    for (iVar2 = iVar1 - iVar3; iVar2 != (param_1 + 0x14) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_00259118(iVar2,iVar1,in_r2,in_r3);
      iVar1 = extraout_r1;
    }
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x20);
    for (iVar2 = iVar1 - iVar3; iVar2 != (param_1 + 0x14) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_00259118(iVar2,iVar1,in_r2,in_r3);
      iVar1 = extraout_r1_00;
    }
  }
  return func_004EB350(*DAT_002954c0,1,in_r2,in_r3);
}

