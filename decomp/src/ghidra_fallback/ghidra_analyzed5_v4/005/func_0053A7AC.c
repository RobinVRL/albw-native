#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0053A554(int param_1,float *param_2,float *param_3);
extern float DAT_0053a8d0;
extern int DAT_0053a8d4;

// USA 0053A7AC <- EU 0053A784 (Ghidra, non-matching)
// GLOBAL DAT_0053a8d0 float
// GLOBAL DAT_0053a8d4 int

uint func_0053A7AC(int param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define afStack_3c ((float *)(albw_frame + 0x14))
  iVar1 = DAT_0053a8d4;
  uVar6 = 5;
  uVar7 = 5;
  uVar4 = 0;
  pfVar5 = (float *)(param_1 + 0xb18);
  fVar9 = DAT_0053a8d0;
  fVar10 = DAT_0053a8d0;
  do {
    pfVar2 = pfVar5;
    if (uVar4 < 5) {
      pfVar2 = pfVar5 + uVar4 * 5;
    }
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + (int)ALBW_AS_U32(pfVar2[3]) * 0x30;
    local_48 = *(float *)(iVar3 + 0xc);
    local_44 = *(undefined4 *)(iVar3 + 0x1c);
    local_40 = *(float *)(iVar3 + 0x2c);
    pfVar2 = pfVar5;
    if (uVar4 < 5) {
      pfVar2 = pfVar5 + uVar4 * 5;
    }
    func_0053A554(param_1,afStack_3c,pfVar2);
    func_00115C54(&local_48,&local_48,afStack_3c);
    fVar8 = (*param_2 - local_48) * (*param_2 - local_48) +
            (param_2[2] - local_40) * (param_2[2] - local_40);
    if (fVar8 < fVar9) {
      uVar6 = uVar4;
      fVar9 = fVar8;
    }
    if (((int)ALBW_AS_U32(fVar8) < iVar1) && (fVar8 < fVar10)) {
      pfVar2 = pfVar5;
      if (uVar4 < 5) {
        pfVar2 = pfVar5 + uVar4 * 5;
      }
      if (0 < (int)ALBW_AS_U32(pfVar2[4])) {
        uVar7 = uVar4;
        fVar10 = fVar8;
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 5);
  if (uVar7 != 5) {
    if (uVar6 < 5) {
      pfVar5 = pfVar5 + uVar6 * 5;
    }
    if ((int)ALBW_AS_U32(pfVar5[4]) < 1) {
      return uVar7;
    }
  }
  return uVar6;
}

