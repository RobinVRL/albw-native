#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00148354(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5A38(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E5E4(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_0053EDC8(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0054CC2C(int param_1);
extern float DAT_00366554;
extern float DAT_00366558;
extern undefined DAT_0036655c;
extern int DAT_00366574;
extern int *DAT_00366578;
extern int DAT_0036657c;
extern int *DAT_00366580;
extern uint *DAT_00366584;
extern undefined4 *DAT_00366588;
extern undefined4 DAT_0036658c;
extern char s__SE_PL_SandRod_SWING_0036655f[];
extern undefined4 _DAT_0036655c;

// USA 003662C8 <- EU 003662A4 (Ghidra, non-matching)
// GLOBAL DAT_00366554 float
// GLOBAL DAT_00366558 float
// GLOBAL DAT_0036655c undefined
// GLOBAL DAT_00366574 int
// GLOBAL DAT_00366578 int *
// GLOBAL DAT_0036657c int
// GLOBAL DAT_00366580 int *
// GLOBAL DAT_00366584 uint *
// GLOBAL DAT_00366588 undefined4 *
// GLOBAL DAT_0036658c undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003662C8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = func_0052E5E4(*(int *)(param_1 + 0x28),7);
  if (iVar2 == 0) {
    if (DAT_00366554 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_00366334;
LAB_0036633c:
    uVar4 = 0;
  }
  else {
    if (param_2 == 0x53) {
      fVar7 = DAT_00366558;
      iVar2 = func_002D55E8(param_1);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = func_002D5A38(param_1);
      if (iVar2 != 0) {
        return 0;
      }
      func_002D56A8(param_1,ALBW_AS_F32(_DAT_0036655c));
      func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar7);
      iVar2 = func_0054CC2C(*(int *)(param_1 + 0x48));
      if (iVar2 == 0) {
        return 0;
      }
      if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 10) {
        return 0;
      }
      func_002D55D0(param_1,0x54);
      local_1c = s__SE_PL_SandRod_SWING_0036655f + 1;
      local_20 = DAT_00366574;
      return func_004EA104(*DAT_00366578,&local_20,0);
    }
    if (param_2 == 0x54) {
      fVar7 = DAT_00366554;
      fVar5 = DAT_00366558;
      iVar2 = func_002D55E8(param_1);
      if (iVar2 != 0) {
        return 0;
      }
      func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar5);
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar7) {
LAB_00366468:
        bVar1 = false;
      }
      else {
        fVar5 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x5c);
        fVar6 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
        if (DAT_0036657c < (int)ALBW_AS_U32((fVar5 - fVar6))) goto LAB_00366468;
        bVar1 = true;
      }
      iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
      if (iVar2 == 0 && !bVar1) {
        return 0;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar7) goto LAB_0036633c;
    }
    else {
      if (param_2 != 0x55) {
        return 0;
      }
      fVar7 = DAT_00366554;
      fVar5 = DAT_00366558;
      iVar2 = func_002D55E8(param_1);
      if (iVar2 != 0) {
        return 0;
      }
      func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar5);
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) == 0xf) {
        puVar3 = (undefined4 *)
                 func_0052FBA0(*DAT_00366580 + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x28) + 0x624));
        if (((*DAT_00366584 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00366584), iVar2 != 0))
        {
          *DAT_00366588 = DAT_0036658c;
        }
        if ((puVar3 == (undefined4 *)0x0) ||
           (iVar2 = (**(code **)*puVar3)(puVar3,DAT_00366588), iVar2 == 0)) {
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar3 != (undefined4 *)0x0) {
          func_00148354((int)puVar3);
        }
      }
      iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar7) goto LAB_0036633c;
    }
LAB_00366334:
    uVar4 = 1;
  }
  return func_002D55D0(param_1,uVar4);
}

