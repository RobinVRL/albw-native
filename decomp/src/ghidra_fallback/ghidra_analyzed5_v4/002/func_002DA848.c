#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_002D5350(int param_1,int param_2,int param_3,float fparam_0);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053EDD8(int param_1);
extern int func_0053EE40(int param_1,float fparam_0);
extern int func_00588BE4(int param_1);
extern float DAT_002dabec;
extern int *DAT_002dabf0;
extern uint *DAT_002dabf4;
extern float DAT_002dabf8;
extern undefined4 DAT_002dabfc;
extern undefined4 *DAT_002dac00;
extern int *DAT_002dac04;
extern int *DAT_002dac08;
extern int *DAT_002dac0c;
extern float DAT_002dac10;
extern uint *DAT_002dac14;
extern undefined4 *DAT_002dac18;
extern undefined4 DAT_002dac1c;
extern float DAT_002dac20;
extern float DAT_002dac24;
extern float DAT_002dac28;

// USA 002DA848 <- EU 002DA824 (Ghidra, non-matching)
// GLOBAL DAT_002dabec float
// GLOBAL DAT_002dabf0 int *
// GLOBAL DAT_002dabf4 uint *
// GLOBAL DAT_002dabf8 float
// GLOBAL DAT_002dabfc undefined4
// GLOBAL DAT_002dac00 undefined4 *
// GLOBAL DAT_002dac04 int *
// GLOBAL DAT_002dac08 int *
// GLOBAL DAT_002dac0c int *
// GLOBAL DAT_002dac10 float
// GLOBAL DAT_002dac14 uint *
// GLOBAL DAT_002dac18 undefined4 *
// GLOBAL DAT_002dac1c undefined4
// GLOBAL DAT_002dac20 float
// GLOBAL DAT_002dac24 float
// GLOBAL DAT_002dac28 float

void func_002DA848(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x60]; /* entry_sp - 0x60 .. entry_sp + 0x0 */
#define stack0xffffffa8 (*(undefined4 *)(albw_frame + 0x8))
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define fStack_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  uVar2 = DAT_002dabfc;
  puVar1 = DAT_002dabf4;
  piVar5 = DAT_002dabf0;
  if (param_2 == 0x78) {
    fVar10 = DAT_002dabec;
    fVar12 = DAT_002dabf8;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x78),DAT_002dabec);
    iVar6 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar6 == 0) {
      fVar10 = DAT_002dac10;
      iVar6 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x3c,DAT_002dac10);
      if (iVar6 == 0) {
        return;
      }
      piVar5 = (int *)func_0052FBA0(*piVar5 + 0x3dbbc,*(uint *)(param_1 + 0x70));
      if (((*DAT_002dac14 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002dac14), iVar6 != 0)) {
        *DAT_002dac18 = DAT_002dac1c;
      }
      if ((piVar5 == (int *)0x0) || (iVar6 = (**(code **)*piVar5)(piVar5,DAT_002dac18), iVar6 == 0))
      {
        piVar5 = (int *)0x0;
      }
      if (piVar5 == (int *)0x0) {
        return;
      }
      local_44 = ALBW_NAN_NEG;
      uVar3 = (**(code **)(*piVar5 + 0x50))(piVar5,&stack0xffffffa8);
      *(undefined1 *)(param_1 + 0x74) = uVar3;
      **(undefined4 **)(param_1 + 0x44) = 0;
      return;
    }
    puVar4 = (undefined4 *)func_0052FBA0(*piVar5 + 0x3dbbc,*(uint *)(param_1 + 0x70));
    if (((*puVar1 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002dabf4), iVar6 != 0)) {
      *DAT_002dac00 = uVar2;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar4)(puVar4,DAT_002dac00), iVar6 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    piVar5 = DAT_002dac04;
    if ((puVar4 != (undefined4 *)0x0) &&
       ((iVar6 = func_00588BE4((int)puVar4), iVar6 == *DAT_002dac08 ||
        (iVar6 = func_00588BE4((int)puVar4), iVar6 == *DAT_002dac0c)))) {
      if (*(int *)(*piVar5 + 0x44) != 0) {
        return;
      }
LAB_002da9c4:
      func_002D55D0(param_1,0x7a);
      return;
    }
    if ((*(char *)(param_1 + 0x74) == '\x02') && (*(int *)(*piVar5 + 0x44) == 0)) goto LAB_002da9c4;
    fVar10 = *(float *)(*(int *)(param_1 + 0x48) + 0x24);
    if (fVar10 <= fVar12) goto LAB_002da9ac;
  }
  else {
    if (param_2 != 0x79) {
      if (param_2 != 0x7a) {
        return;
      }
      fVar10 = DAT_002dabf8;
      puVar4 = (undefined4 *)func_0052FBA0(*DAT_002dabf0 + 0x3dbbc,*(uint *)(param_1 + 0x70));
      if (((*puVar1 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002dabf4), iVar6 != 0)) {
        *DAT_002dac00 = uVar2;
      }
      if ((puVar4 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar4)(puVar4,DAT_002dac00), iVar6 == 0)) {
        puVar4 = (undefined4 *)0x0;
      }
      if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 0x125) != '\0')) {
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      if (*(char *)(param_1 + 0x94) != '\0') {
        fVar12 = DAT_002dac20;
        func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x78),DAT_002dac20);
        fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x98),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar9 * DAT_002dac24;
        if (0x3f800000 < (int)ALBW_AS_U32((fVar9 * DAT_002dac24))) {
          fVar11 = DAT_002dac28;
        }
        fVar9 = DAT_002dac28;
        func_00115D70(&local_34,(float *)(param_1 + 0x7c),fVar11);
        func_00115D70(&local_34,(float *)(param_1 + 0x88),fVar9 - fVar11);
        local_4c = local_34;
        fStack_48 = local_30;
        local_44 = local_2c;
        func_00115C54(&local_34,(float *)&stack0xffffffa8,&local_4c);
        local_40 = local_34;
        local_3c = local_30;
        local_38 = local_2c;
        pfVar8 = *(float **)(param_1 + 0x30);
        uVar7 = **(uint **)(param_1 + 0x3c);
        fVar9 = SQRT((*pfVar8 - local_34) * (*pfVar8 - local_34) +
                     (pfVar8[2] - local_2c) * (pfVar8[2] - local_2c));
        fVar11 = fVar10;
        if (fVar12 < fVar9) {
          fVar10 = fVar12;
          uVar7 = func_004D80EC(pfVar8,&local_40,uVar7);
        }
        func_00115154(&local_34,&local_30,uVar7);
        *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar11;
        **(float **)(param_1 + 0x38) = fVar10 * local_34;
        *(float *)(*(int *)(param_1 + 0x38) + 8) = fVar10 * local_30;
        func_002D5350(param_1,0,7,fVar10);
        if ((fVar9 <= fVar12) && (0xe < *(int *)(param_1 + 0x98))) {
          fVar10 = *(float *)(*(int *)(param_1 + 0x48) + 0x24);
          func_002D55D0(param_1,(uint)(fVar11 < fVar10));
          return;
        }
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
        return;
      }
      iVar6 = *(int *)(param_1 + 0x4c);
      func_0028D580((uint *)(iVar6 + 0x3c),0,1,1,6);
      func_0028D580((uint *)(iVar6 + 0x5c),0,1,1,6);
      return;
    }
    fVar10 = DAT_002dabec;
    fVar12 = DAT_002dabf8;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x78),DAT_002dabec);
    iVar6 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar6 == 0) {
      return;
    }
    fVar10 = *(float *)(*(int *)(param_1 + 0x48) + 0x24);
    if (fVar10 <= fVar12) {
LAB_002da9ac:
      uVar7 = 0;
      goto LAB_002da9b0;
    }
  }
  uVar7 = 1;
LAB_002da9b0:
  func_002D55D0(param_1,uVar7);
  return;
}

