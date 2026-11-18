#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00421bf0;
extern float DAT_00421bf4;

// USA 00421ABC <- EU 00421A9C (Ghidra, non-matching)
// GLOBAL DAT_00421bf0 float
// GLOBAL DAT_00421bf4 float

undefined4 func_00421ABC(undefined2 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fparam_0;
  
  fparam_0 = DAT_00421bf4;
  iVar3 = *(int *)(param_1 + 0x1c);
  if ((-1 < iVar3) && (iVar4 = *(int *)(param_1 + 0x18), iVar3 != iVar4)) {
    fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x16),(byte)(in_fpscr >> 0x15) & 3)
    ;
    uVar1 = iVar4 - iVar3 >> 0x1f;
    fVar5 = (float)VectorSignedToFloat((iVar4 - iVar3 ^ uVar1) - uVar1,(byte)(in_fpscr >> 0x15) & 3)
    ;
    if (iVar4 < iVar3 == fVar5 < fVar6 * DAT_00421bf0) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      func_00231448((int)(param_1 + 6));
      func_002317C0(param_1,fparam_0);
      if (-1 < *(int *)(param_1 + 0x16)) {
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c);
        if (*(int *)(param_1 + 0x16) < *(int *)(param_1 + 0x1c)) {
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
      }
      *(byte *)((int)param_1 + 0x3d) = *(byte *)((int)param_1 + 0x3d) | 2;
      puVar2 = *(undefined4 **)(param_1 + 0xc);
    }
    else {
      *(undefined1 *)(param_1 + 0x1e) = 2;
      func_00231448((int)param_1);
      func_002317C0(param_1 + 6,fparam_0);
      if (-1 < *(int *)(param_1 + 0x16)) {
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c);
        if (*(int *)(param_1 + 0x1c) < 0) {
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x16);
        }
      }
      *(byte *)((int)param_1 + 0x3d) = *(byte *)((int)param_1 + 0x3d) & 0xfd;
      puVar2 = *(undefined4 **)(param_1 + 0xe);
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
    }
    return 1;
  }
  return 0;
}

