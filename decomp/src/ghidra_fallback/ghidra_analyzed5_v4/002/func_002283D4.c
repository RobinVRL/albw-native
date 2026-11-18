#include "ghidra_types.h"

extern int func_00224FB8(int param_1,int param_2,float fparam_0);
extern int func_002255D0(int param_1,uint param_2,int param_3,int param_4,float fparam_0,float fparam_1);
extern int func_00227EB0(int param_1,float fparam_0,float fparam_1);
extern float DAT_00228744;
extern int DAT_00228748;
extern float DAT_0022874c;
extern float DAT_00228750;
extern float DAT_00228754;
extern float DAT_00228758;
extern float DAT_0022875c;
extern float DAT_00228760;
extern float DAT_00228764;
extern float DAT_00228768;
extern float DAT_0022876c;
extern float DAT_00228770;
extern float DAT_00228774;
extern float DAT_00228778;
extern int DAT_002287e0;

// USA 002283D4 <- EU 002283D4 (Ghidra, non-matching)
// GLOBAL DAT_00228744 float
// GLOBAL DAT_00228748 int
// GLOBAL DAT_0022874c float
// GLOBAL DAT_00228750 float
// GLOBAL DAT_00228754 float
// GLOBAL DAT_00228758 float
// GLOBAL DAT_0022875c float
// GLOBAL DAT_00228760 float
// GLOBAL DAT_00228764 float
// GLOBAL DAT_00228768 float
// GLOBAL DAT_0022876c float
// GLOBAL DAT_00228770 float
// GLOBAL DAT_00228774 float
// GLOBAL DAT_00228778 float
// GLOBAL DAT_002287e0 int

void func_002283D4(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  uint in_fpscr;
  float fVar12;
  float fparam_0;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fparam_0 = DAT_00228744;
  uVar6 = (uint)*(byte *)(param_1 + 0x744);
  fVar12 = DAT_00228744;
  fVar14 = DAT_00228744;
  if (uVar6 != 0) {
    if (*(ushort *)(param_1 + 0x740) < 0x14) {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = (uint)(fVar12 * DAT_00228750 * DAT_00228754);
      pfVar4 = (float *)(DAT_00228748 + (uVar6 >> 0x18) * 0x10);
      fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = *(uint *)(param_1 + 0x6d0);
      pfVar11 = (float *)(DAT_00228748 + (uVar6 >> 0x18) * 0x10);
      fVar13 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (*pfVar4 + pfVar4[1] * fVar12 * DAT_0022874c) * DAT_00228758;
      fVar12 = (*pfVar11 + pfVar11[1] * fVar13 * DAT_0022874c) * fVar14;
      fVar13 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (pfVar11[2] + pfVar11[3] * fVar13 * DAT_0022874c) * fVar14;
    }
    else {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = *(uint *)(param_1 + 0x6d0);
      pfVar4 = (float *)(DAT_00228748 + (uVar6 >> 0x18) * 0x10);
      fVar14 = (DAT_0022875c - fVar12) * DAT_00228760;
      fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (*pfVar4 + pfVar4[1] * fVar12 * DAT_0022874c) * fVar14;
      fVar14 = (pfVar4[2] + pfVar4[3] * fVar13 * DAT_0022874c) * fVar14;
    }
    *(byte *)(param_1 + 0x744) = *(byte *)(param_1 + 0x744) - 1;
  }
  if (*(char *)(param_1 + 0x746) != '\0') {
    *(char *)(param_1 + 0x746) = *(char *)(param_1 + 0x746) + -1;
  }
  fVar3 = DAT_00228774;
  fVar2 = DAT_00228770;
  fVar15 = DAT_0022876c;
  fVar13 = DAT_00228768;
  cVar1 = *(char *)(param_1 + 0x46c);
  puVar8 = (uint *)(param_1 + 0x6c4);
  piVar7 = (int *)(param_1 + 0x6b4);
  piVar9 = (int *)(param_1 + 0x6b8);
  piVar10 = (int *)(param_1 + 0x6bc);
  if (cVar1 == '\x04') {
    fVar12 = DAT_00228774;
    fVar14 = DAT_00228770;
    fVar13 = DAT_0022876c;
    fVar15 = DAT_00228768;
    iVar5 = func_00224FB8(param_1,0x2f,*(float *)(param_1 + 0x6fc) * DAT_00228764);
    *(int *)(param_1 + 0x6b0) = iVar5 + *(int *)(param_1 + 0x6b0);
    iVar5 = func_00224FB8(param_1,0x27,*(float *)(param_1 + 0x6fc) * fVar15);
    *piVar7 = iVar5 + *piVar7;
    iVar5 = func_00224FB8(param_1,0x1f,*(float *)(param_1 + 0x6fc) * fVar13);
    *piVar9 = iVar5 + *piVar9;
    iVar5 = func_00224FB8(param_1,0x17,*(float *)(param_1 + 0x6fc) * fVar14);
    piVar7 = (int *)(param_1 + 0x6c0);
    *piVar10 = iVar5 + *piVar10;
    iVar5 = func_00224FB8(param_1,0xf,*(float *)(param_1 + 0x6fc) * fVar12);
    *piVar7 = iVar5 + *piVar7;
    func_00227EB0(param_1,fparam_0,fparam_0);
    iVar5 = func_00224FB8(param_1,0,DAT_00228778);
    uVar6 = *puVar8;
    *puVar8 = uVar6 + iVar5;
    func_002255D0(param_1,uVar6 + iVar5,*(int *)(param_1 + 0x6f0),0,fparam_0,fparam_0);
    return;
  }
  if (((cVar1 != '\x05' && cVar1 != '\f') && (cVar1 != '\x06' && cVar1 != '\t')) &&
     (cVar1 != '\a' && cVar1 != '\x0e')) {
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    *(undefined4 *)(param_1 + 0x6b4) = 0;
    *(undefined4 *)(param_1 + 0x6b8) = 0;
    *(undefined4 *)(param_1 + 0x6bc) = 0;
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    *(undefined4 *)(param_1 + 0x6c4) = 0;
    return;
  }
  *(int *)(param_1 + 0x6b0) =
       (int)(*(float *)(param_1 + 0x6fc) * DAT_00228764) + *(int *)(param_1 + 0x6b0);
  *piVar7 = (int)(*(float *)(param_1 + 0x6fc) * fVar13) + *piVar7;
  *piVar9 = (int)(*(float *)(param_1 + 0x6fc) * fVar15) + *piVar9;
  *piVar10 = (int)(*(float *)(param_1 + 0x6fc) * fVar2) + *piVar10;
  if (*(char *)(param_1 + 0x74f) == '\0') {
    *(int *)(param_1 + 0x6c0) =
         (int)(*(float *)(param_1 + 0x6fc) * fVar3) + *(int *)(param_1 + 0x6c0);
  }
  else {
    *(int *)(param_1 + 0x6c0) = *(int *)(param_1 + 0x6c0) + 0xb60b60;
  }
  func_00227EB0(param_1,fVar12,fVar14);
  if (*(char *)(param_1 + 0x46c) == '\x05') {
    *puVar8 = DAT_002287e0 + *puVar8;
  }
  func_002255D0(param_1,*(uint *)(param_1 + 0x6c4),*(int *)(param_1 + 0x6f0),0,fparam_0,fparam_0);
  return;
}

