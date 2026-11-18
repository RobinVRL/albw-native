#include "ghidra_types.h"

extern int func_0025F794(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float DAT_0025fcc8;
extern float DAT_0025fccc;
extern float DAT_0025fcd0;
extern float DAT_0025fcd4;

// USA 0025FBA4 <- EU 0025FBCC (Ghidra, non-matching)
// GLOBAL DAT_0025fcc8 float
// GLOBAL DAT_0025fccc float
// GLOBAL DAT_0025fcd0 float
// GLOBAL DAT_0025fcd4 float

undefined4 func_0025FBA4(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  
  piVar8 = (int *)(*(char *)(param_1 + 0x4c) * 8 + 4);
  uVar3 = *(uint *)(*(int *)(param_1 + 100) + (int)piVar8);
  pcVar5 = *(code **)(*(int *)(param_1 + 100) + *(char *)(param_1 + 0x4c) * 8);
  if ((uVar3 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0x5c) + ((int)uVar3 >> 1)));
  }
  (*pcVar5)((int)(*(int *)(param_1 + 0x5c)) + ((int)uVar3 >> 1));
  iVar7 = *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar4;
  iVar6 = extraout_r1;
  if (iVar7 != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar7,1,fVar9);
    iVar6 = extraout_r1_00;
  }
  if ('\0' < *(char *)(param_1 + 0x4c)) {
    iVar7 = 0;
    *(undefined1 *)(param_1 + 0x194) = 0;
    uVar3 = *(int *)(param_1 + 0x80) + 1;
    iVar6 = *(int *)(param_1 + 0x80) + -0x19e;
    *(uint *)(param_1 + 0x80) = uVar3;
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0x194) = 1;
    }
    else if (0x19f < uVar3) {
      fVar9 = *(float *)(param_1 + 0x7c);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_0025fcc8) << 0x1f |
              (uint)(fVar9 == DAT_0025fcc8) << 0x1e;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar9) || NAN(DAT_0025fcc8))) {
        fVar9 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar1 >> 0x15) & 3);
        fVar9 = DAT_0025fcd4 - (fVar9 - DAT_0025fccc) * DAT_0025fcd0;
        if (fVar9 < DAT_0025fcc8) {
          fVar9 = DAT_0025fcc8;
        }
        *(float *)(param_1 + 0x7c) = fVar9;
      }
    }
  }
  return func_0025F794(param_1,iVar6,iVar7,piVar8);
}

