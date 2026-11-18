#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern float DAT_0018d710;
extern float DAT_0018d714;
extern float DAT_0018d718;
extern float DAT_0018d71c;
extern int DAT_0018d720;
extern float DAT_0018d724;

// USA 0018D524 <- EU 0018D524 (Ghidra, non-matching)
// GLOBAL DAT_0018d710 float
// GLOBAL DAT_0018d714 float
// GLOBAL DAT_0018d718 float
// GLOBAL DAT_0018d71c float
// GLOBAL DAT_0018d720 int
// GLOBAL DAT_0018d724 float

void func_0018D524(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  iVar3 = DAT_0018d720;
  fVar6 = DAT_0018d710;
  if (*(char *)(param_1 + 0x55e) == '\0') {
    fVar6 = DAT_0018d714;
  }
  fVar6 = fVar6 * DAT_0018d718;
  iVar8 = (int)fVar6;
  fVar9 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar9 != fVar6) && (DAT_0018d71c <= fVar6)) {
    iVar8 = iVar8 + 1;
  }
  local_3c = *(float *)(param_1 + 0x4d8);
  local_38 = *(float *)(param_1 + 0x4dc);
  local_34 = *(float *)(param_1 + 0x4e0);
  bVar1 = false;
  iVar4 = 0;
  pfVar5 = (float *)(param_1 + 0x4cc);
  fVar6 = DAT_0018d724;
  fVar9 = DAT_0018d71c;
  while( true ) {
    func_00115C70(&local_48,pfVar5,&local_3c);
    fVar7 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
    if (iVar3 < (int)ALBW_AS_U32(fVar7)) {
      if (fVar9 < fVar7) {
        fVar7 = fVar6 / fVar7;
        local_40 = local_40 * fVar7;
        local_48 = local_48 * fVar7;
        local_44 = local_44 * fVar7;
      }
      func_00115C54(&local_48,&local_48,&local_3c);
    }
    else {
      local_48 = *pfVar5;
      bVar1 = true;
      local_44 = *(float *)(param_1 + 0x4d0);
      local_40 = *(float *)(param_1 + 0x4d4);
    }
    if (iVar4 == iVar8 + -1) {
      local_48 = *pfVar5;
      bVar1 = true;
      local_44 = *(float *)(param_1 + 0x4d0);
      local_40 = *(float *)(param_1 + 0x4d4);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x42c) + iVar4 * 4);
    *(float *)(iVar2 + 4) = local_48;
    *(float *)(iVar2 + 8) = local_44;
    *(float *)(iVar2 + 0xc) = local_40;
    func_004356B4(*(int **)(*(int *)(param_1 + 0x42c) + iVar4 * 4));
    iVar4 = iVar4 + 1;
    if (bVar1) break;
    if (iVar8 <= iVar4) {
      return;
    }
    local_3c = local_48;
    local_38 = local_44;
    local_34 = local_40;
  }
  for (; iVar4 < iVar8; iVar4 = iVar4 + 1) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x42c) + iVar4 * 4);
    *(float *)(iVar3 + 4) = local_48;
    *(float *)(iVar3 + 8) = local_44;
    *(float *)(iVar3 + 0xc) = local_40;
    func_004356B4(*(int **)(*(int *)(param_1 + 0x42c) + iVar4 * 4));
  }
  return;
}

