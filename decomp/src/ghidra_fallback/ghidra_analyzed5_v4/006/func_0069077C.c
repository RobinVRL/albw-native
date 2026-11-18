#include "ghidra_types.h"

extern int func_00690F94(int param_1,int param_2,float *param_3,float fparam_0);
extern int func_006912A8(int param_1,int param_2,float fparam_0,float fparam_1);
extern uint DAT_00690aac;
extern float DAT_00690ab0;

// USA 0069077C <- EU 00690754 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_00690aac uint
// GLOBAL DAT_00690ab0 float

void func_0069077C(int param_1,int param_2,int *param_3,int *param_4,float *param_5,float fparam_0)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fparam_0_00;
  float fVar7;
  longlong lVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  uVar1 = DAT_00690aac;
  lVar8 = (ulonglong)(uint)ALBW_AS_U32(DAT_00690ab0) << 0x20;
  fparam_0_00 = *param_5;
  if (*(short *)(**(int **)(param_1 + 0xc) + 6) == 4) {
    fVar7 = param_5[1];
    uVar4 = 0;
    fVar9 = DAT_00690ab0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        uVar6 = (uint)*(ushort *)(*param_4 + uVar4 * 2);
        if (uVar6 != uVar1) {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + uVar4 * 4);
          iVar3 = *(int *)(param_2 + 0xc) + uVar6 * 0x40;
          if (((*(uint *)(iVar5 + 8) & 0x70000) == 0) &&
             (*(float *)(*param_3 + uVar6 * 0xc) == fVar9)) {
            *(float *)(iVar3 + 4) = fVar9;
            *(float *)(iVar3 + 8) = fVar9;
            *(float *)(iVar3 + 0xc) = fVar9;
          }
          if (((*(uint *)(iVar5 + 8) & 0x380000) == 0) &&
             (*(float *)(*param_3 + (uVar6 * 3 + 1) * 4) == fVar9)) {
            *(float *)(iVar3 + 0x10) = fVar9;
            *(float *)(iVar3 + 0x14) = fVar9;
            *(float *)(iVar3 + 0x18) = fVar9;
            *(float *)(iVar3 + 0x20) = fVar9;
          }
          if (((*(uint *)(iVar5 + 8) & 0x1c00000) == 0) &&
             (*(float *)(*param_3 + (uVar6 * 3 + 2) * 4) == fVar9)) {
            *(float *)(iVar3 + 0x1c) = fVar9;
            *(float *)(iVar3 + 0x2c) = fVar9;
            *(float *)(iVar3 + 0x3c) = fVar9;
          }
          local_40 = fparam_0_00;
          local_3c = fVar7;
          func_00690F94(iVar5,iVar3,&local_40,fparam_0);
          if ((*(uint *)(iVar5 + 8) & 0x70000) == 0) {
            pfVar2 = (float *)(*param_3 + uVar6 * 0xc);
            *pfVar2 = *pfVar2 + fparam_0;
          }
          if ((*(uint *)(iVar5 + 8) & 0x380000) == 0) {
            pfVar2 = (float *)(*param_3 + (uVar6 * 3 + 1) * 4);
            *pfVar2 = *pfVar2 + fparam_0;
          }
          if ((*(uint *)(iVar5 + 8) & 0x1c00000) == 0) {
            pfVar2 = (float *)(*param_3 + (uVar6 * 3 + 2) * 4);
            *pfVar2 = *pfVar2 + fparam_0;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x10));
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        uVar6 = (uint)*(ushort *)(*param_4 + uVar4 * 2);
        if (uVar6 != uVar1) {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + uVar4 * 4);
          iVar3 = *(int *)(param_2 + 0xc) + uVar6 * 0x40;
          fVar9 = ALBW_AS_F32(((ulonglong)lVar8 >> 0x20));
          if (((*(uint *)(iVar5 + 8) & 0x20) == 0) && (*(float *)(*param_3 + uVar6 * 0xc) == fVar9))
          {
            *(float *)(iVar3 + 4) = fVar9;
            *(float *)(iVar3 + 8) = fVar9;
            *(float *)(iVar3 + 0xc) = fVar9;
          }
          if (((*(uint *)(iVar5 + 8) & 0x10) == 0) &&
             (*(float *)(*param_3 + (uVar6 * 3 + 1) * 4) == fVar9)) {
            *(float *)(iVar3 + 0x10) = fVar9;
            *(float *)(iVar3 + 0x14) = fVar9;
            *(float *)(iVar3 + 0x18) = fVar9;
            *(float *)(iVar3 + 0x20) = fVar9;
          }
          if (((*(uint *)(iVar5 + 8) & 8) == 0) &&
             (*(float *)(*param_3 + (uVar6 * 3 + 2) * 4) == fVar9)) {
            *(float *)(iVar3 + 0x1c) = fVar9;
            *(float *)(iVar3 + 0x2c) = fVar9;
            *(float *)(iVar3 + 0x3c) = fVar9;
          }
          func_006912A8(iVar5,iVar3,fparam_0_00,fparam_0);
          if ((*(uint *)(iVar5 + 8) & 0x20) == 0) {
            pfVar2 = (float *)(*param_3 + uVar6 * 0xc);
            *pfVar2 = *pfVar2 + fparam_0;
          }
          if ((*(uint *)(iVar5 + 8) & 0x10) == 0) {
            pfVar2 = (float *)(*param_3 + (uVar6 * 3 + 1) * 4);
            *pfVar2 = *pfVar2 + fparam_0;
          }
          if ((*(uint *)(iVar5 + 8) & 8) == 0) {
            pfVar2 = (float *)(*param_3 + (uVar6 * 3 + 2) * 4);
            *pfVar2 = *pfVar2 + fparam_0;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

