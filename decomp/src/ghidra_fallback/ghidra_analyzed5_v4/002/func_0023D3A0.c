#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float DAT_0023d434;

// USA 0023D3A0 <- EU 0023D3A0 (Ghidra, non-matching)
// GLOBAL DAT_0023d434 float

undefined4 func_0023D3A0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x410) + 0xc);
  iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if ((int *)(uint)*(byte *)(iVar1 + 0x1c) == (int *)0x0) {
    if (*(float *)(iVar1 + 0x10) < DAT_0023d434) {
      if (DAT_0023d434 < *(float *)(iVar1 + 8)) goto LAB_0023d408;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_0023d408;
    *(float *)(iVar1 + 0x10) = DAT_0023d434;
  }
LAB_0023d408:
  func_00169A80(*(int **)(param_1 + 0x410),iVar1,uVar2,(int *)(uint)*(byte *)(iVar1 + 0x1c));
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x40c));
}

