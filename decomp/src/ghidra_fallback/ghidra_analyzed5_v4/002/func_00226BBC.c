#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float DAT_00226d68;
extern float DAT_00226d6c;

// USA 00226BBC <- EU 00226BBC (Ghidra, non-matching)
// GLOBAL DAT_00226d68 float
// GLOBAL DAT_00226d6c float

undefined4 func_00226BBC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 uVar3;
  uint uVar4;
  undefined1 in_r12;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x46c) != '\r') {
    func_00169A80(*(int **)(param_1 + 0x68c),param_2,param_3,param_4);
  }
  uVar3 = 0;
  func_00168E9C(*(int **)(param_1 + 0x68c),*(int *)(param_1 + 0x594),(int *)0x0);
  fVar1 = DAT_00226d6c;
  fVar6 = DAT_00226d68;
  if (*(char *)(param_1 + 0x74c) == '\0') {
    uVar4 = extraout_r1;
    if (*(char *)(param_1 + 0x74d) != '\0') {
      func_00169A80(*(int **)(param_1 + 0x690),extraout_r1,uVar3,param_4);
      uVar3 = 0;
      func_00168E9C(*(int **)(param_1 + 0x690),*(int *)(param_1 + 0x594),(int *)0x0);
      iVar2 = *(int *)(*(int *)(param_1 + 0x690) + 0x14);
      uVar4 = (uint)*(byte *)(iVar2 + 0x1c);
      if (uVar4 == 0) {
        if (*(float *)(iVar2 + 0x10) < fVar6) {
          if (fVar6 < *(float *)(iVar2 + 8)) goto LAB_00226d2c;
        }
        else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_00226d2c;
        *(undefined1 *)(param_1 + 0x74d) = 0;
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x690);
    uVar4 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      in_r12 = 1;
    }
    fVar5 = *(float *)(*(int *)(iVar2 + 0x14) + 0x14);
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        param_4 = *(int **)(iVar2 + 0x14);
        if (uVar4 < *(uint *)(iVar2 + 0xc)) {
          param_4 = param_4 + uVar4 * 10;
        }
        if ((fVar6 <= fVar1) || (fVar5 != fVar6)) {
          param_4[3] = (int)ALBW_AS_U32(fVar5);
          param_4[2] = (int)ALBW_AS_U32(fVar5);
        }
        else {
          param_4[3] = param_4[5];
          param_4[2] = param_4[5];
        }
        uVar4 = uVar4 + 1;
        param_4[4] = (int)ALBW_AS_U32(fVar1);
        param_4[6] = 0;
        *(undefined1 *)((int)param_4 + 0x26) = in_r12;
        *(undefined1 *)((int)param_4 + 0x25) = in_r12;
      } while ((int)uVar4 < *(int *)(iVar2 + 0xc));
    }
    uVar3 = 1;
    func_00168E9C(*(int **)(param_1 + 0x690),*(int *)(param_1 + 0x594),(int *)0x1);
    uVar4 = extraout_r1_00;
  }
LAB_00226d2c:
  if (*(char *)(param_1 + 0x753) != '\0') {
    func_00169A80(*(int **)(param_1 + 0x694),uVar4,uVar3,param_4);
    return func_00168E9C(*(int **)(param_1 + 0x694),*(int *)(param_1 + 0x594),(int *)0x0);
  }
  return 0;
}

