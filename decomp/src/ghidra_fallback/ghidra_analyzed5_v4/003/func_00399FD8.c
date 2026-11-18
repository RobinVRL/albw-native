#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0028F344(int param_1,int param_2);
extern int func_004905E0(float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int *DAT_0039a2f4;
extern uint *DAT_0039a2f8;
extern undefined4 DAT_0039a2fc;
extern undefined4 *DAT_0039a300;
extern uint *DAT_0039a304;
extern undefined4 *DAT_0039a308;
extern undefined4 DAT_0039a30c;
extern int *DAT_0039a310;
extern float DAT_0039a314;

// USA 00399FD8 <- EU 00399FB4 (Ghidra, non-matching)
// GLOBAL DAT_0039a2f4 int *
// GLOBAL DAT_0039a2f8 uint *
// GLOBAL DAT_0039a2fc undefined4
// GLOBAL DAT_0039a300 undefined4 *
// GLOBAL DAT_0039a304 uint *
// GLOBAL DAT_0039a308 undefined4 *
// GLOBAL DAT_0039a30c undefined4
// GLOBAL DAT_0039a310 int *
// GLOBAL DAT_0039a314 float

undefined4 func_00399FD8(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  piVar1 = DAT_0039a2f4;
  puVar5 = (undefined4 *)func_0052FBA0(*DAT_0039a2f4 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  uVar3 = DAT_0039a2fc;
  puVar2 = DAT_0039a2f8;
  if (((*DAT_0039a2f8 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0039a2f8), iVar6 != 0)) {
    *DAT_0039a300 = uVar3;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0039a300), iVar6 == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  if (((*(uint *)(param_2 + 0x24) & 0x8000) == 0) &&
     ((*(char *)(param_1 + 0x48) != '\r' || ((*(uint *)(param_2 + 0x24) & 0x20000) == 0)))) {
    if (puVar5 != (undefined4 *)0x0) {
      if (((*DAT_0039a304 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0039a304), iVar6 != 0)) {
        *DAT_0039a308 = DAT_0039a30c;
      }
      iVar6 = (**(code **)*puVar5)(puVar5,DAT_0039a308);
      if (iVar6 == 0) {
        uVar7 = puVar5[0x14];
        if (uVar7 == 0) {
          uVar7 = func_005568E8(*DAT_0039a310);
        }
        puVar8 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar7);
        if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0039a2f8), iVar6 != 0)) {
          *DAT_0039a300 = uVar3;
        }
        if ((puVar8 == (undefined4 *)0x0) ||
           (iVar6 = (**(code **)*puVar8)(puVar8,DAT_0039a300), iVar6 == 0)) {
          puVar8 = (undefined4 *)0x0;
        }
        if (puVar8 != (undefined4 *)0x0) {
          puVar5 = puVar8;
        }
        func_00115C70(&local_30,(float *)(*(int *)(param_1 + 4) + 0x3d0),(float *)(puVar5 + 0xda));
      }
      else {
        local_30 = ALBW_AS_F32(puVar5[0xf7]);
        uStack_2c = puVar5[0xf8];
        local_28 = ALBW_AS_F32(puVar5[0xf9]);
      }
      if (local_28 == DAT_0039a314 && local_30 == DAT_0039a314) {
        iVar6 = 0;
      }
      else if (local_28 < DAT_0039a314) {
        if (local_30 < DAT_0039a314) {
          if (local_30 < local_28) {
            iVar6 = func_004905E0(local_28 / local_30);
            iVar6 = -0x40000000 - iVar6;
          }
          else {
            iVar6 = func_004905E0(local_30 / local_28);
            iVar6 = iVar6 + -0x80000000;
          }
        }
        else {
          fVar9 = -local_28;
          if (fVar9 < local_30) {
            iVar6 = func_004905E0(fVar9 / local_30);
            iVar6 = iVar6 + 0x40000000;
          }
          else {
            iVar6 = func_004905E0(local_30 / fVar9);
            iVar6 = -0x80000000 - iVar6;
          }
        }
      }
      else if (local_30 < DAT_0039a314) {
        fVar9 = -local_30;
        if (local_28 < fVar9) {
          iVar6 = func_004905E0(local_28 / fVar9);
          iVar6 = iVar6 + -0x40000000;
        }
        else {
          iVar6 = func_004905E0(fVar9 / local_28);
          iVar6 = -iVar6;
        }
      }
      else if (local_28 < local_30) {
        iVar6 = func_004905E0(local_28 / local_30);
        iVar6 = 0x40000000 - iVar6;
      }
      else {
        iVar6 = func_004905E0(local_30 / local_28);
      }
      bVar4 = func_0028F344(iVar6,*(int *)(*(int *)(param_1 + 4) + 1000));
      if (!bVar4) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      if (((*(uint *)(param_2 + 0x24) & 8) == 0) ||
         (*(char *)(param_1 + 0x48) != '\r' && (*(uint *)(param_2 + 0x24) & 0x80000) != 0)) {
        *(undefined1 *)(param_1 + 0x4a) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x4a) = 1;
      }
      *(undefined1 *)(param_1 + 0x49) = 1;
      return 1;
    }
  }
  return 0;
}

