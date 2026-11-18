#include "ghidra_types.h"

extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052E7D8(int param_1,int param_2);
extern int func_0052E8A0(int param_1);
extern int DAT_0028fbe0;
extern float DAT_0028fbe4;
extern float DAT_0028fbe8;
extern undefined4 DAT_0028fbec;

// USA 0028FA44 <- EU 0028FA6C (Ghidra, non-matching)
// GLOBAL DAT_0028fbe0 int
// GLOBAL DAT_0028fbe4 float
// GLOBAL DAT_0028fbe8 float
// GLOBAL DAT_0028fbec undefined4

undefined4 func_0028FA44(int param_1)

{
  float fVar1;
  char cVar2;
  short sVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  iVar6 = DAT_0028fbe0;
  cVar2 = *(char *)(param_1 + 0x7f);
  bVar9 = cVar2 == '\0';
  if (bVar9) {
    cVar2 = *(char *)(param_1 + 0xb0);
  }
  if (((bVar9 && cVar2 == '\0') &&
      (sVar3 = *(short *)(*(int *)(param_1 + 0x48) + 4),
      *(char *)(*(int *)(param_1 + 0x1c) + 0x16b) != '\0')) &&
     ((*(char *)(DAT_0028fbe0 + *(short *)(param_1 + 0x42) * 0x10) != '\x01' && sVar3 != 0x1f) &&
      sVar3 != 0x20)) {
    func_004D80A4(&local_30,*(uint *)(*(int *)(param_1 + 0x10) + 1000),DAT_0028fbe4);
    fVar4 = DAT_0028fbe8;
    local_2c = DAT_0028fbe8;
    iVar5 = *(int *)(param_1 + 0x1c);
    fVar10 = *(float *)(iVar5 + 0x170);
    fVar11 = *(float *)(iVar5 + 0x178);
    fVar1 = *(float *)(iVar5 + 0x174) * DAT_0028fbe8;
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 1000);
    if (((*(char *)(param_1 + 0xb0) == '\0') &&
        (uVar12 = DAT_0028fbec, bVar9 = func_0052E8A0(*(int *)(param_1 + 0x10)), !bVar9)) &&
       ((*(uint *)(iVar6 + *(short *)(param_1 + 0x42) * 0x10 + 4) & 0x100) == 0)) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(*(int **)(param_1 + 0x48));
      iVar6 = func_0052E7D8(*(int *)(param_1 + 0x10),-2);
      func_001DD48C(*(int *)(param_1 + 0x10),iVar6,1);
      if (fVar4 < fVar10 * local_30 + fVar1 + fVar11 * local_28) {
        uVar8 = 0x20;
      }
      else {
        uVar8 = 0x1f;
      }
      puVar7 = (undefined4 *)func_002D55D0(*(int *)(param_1 + 0x48),uVar8);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uVar13;
        puVar7[1] = uVar12;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

