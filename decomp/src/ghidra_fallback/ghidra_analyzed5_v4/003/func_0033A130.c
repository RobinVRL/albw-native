#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_003315C0(void);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern float DAT_0033a2b8;
extern float DAT_0033a2bc;

// USA 0033A130 <- EU 0033A10C (Ghidra, non-matching)
// GLOBAL DAT_0033a2b8 float
// GLOBAL DAT_0033a2bc float

undefined4 func_0033A130(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  uVar1 = *(uint *)(param_1[0x25f] + (char)param_1[0x259] * 8 + 4);
  pcVar3 = *(code **)(param_1[0x25f] + (char)param_1[0x259] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[0x25d] + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(param_1[0x25d]) + ((int)uVar1 >> 1));
  iVar2 = param_1[600] + 1;
  param_1[600] = iVar2;
  if (param_1[0x25c] != 0) {
    fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x25c],1,fVar4);
  }
  if (**(int **)(param_1[0x1eb] + 0x14) != 3) goto LAB_0033a2a4;
  if (param_1[0x1e3] != 0) {
    iVar2 = *(int *)(param_1[0x1eb] + 0x14);
    fVar4 = *(float *)(iVar2 + 8);
    fVar5 = *(float *)(iVar2 + 0xc);
    if (fVar4 < fVar5) {
      if (fVar5 < *(float *)(iVar2 + 0x14)) {
        if ((DAT_0033a2b8 <= fVar5) || (*(float *)(iVar2 + 0x14) < DAT_0033a2b8))
        goto joined_r0x0033a21c;
      }
      else if (fVar4 < DAT_0033a2b8) goto LAB_0033a22c;
LAB_0033a220:
      func_00151148(param_1[0x1e3],1);
    }
    else if (fVar5 < DAT_0033a2b8) {
joined_r0x0033a21c:
      if (DAT_0033a2b8 <= fVar4) goto LAB_0033a220;
    }
  }
LAB_0033a22c:
  *(undefined1 *)((int)param_1 + 0x989) = 1;
  iVar2 = *(int *)(param_1[0x1eb] + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_0033a2bc) {
      if (DAT_0033a2bc < *(float *)(iVar2 + 8)) goto LAB_0033a2a4;
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_0033a2a4;
    (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
    func_003315C0();
  }
LAB_0033a2a4:
  func_004BCAA8((int)param_1);
  return func_004BC8D8((int)param_1);
}

