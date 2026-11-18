#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_004905E0(float fparam_0);
extern int func_004BFC24(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00390e2c;
extern undefined4 *DAT_00390e30;
extern int *DAT_00390e34;
extern int *DAT_00390e38;
extern uint *DAT_00390e3c;
extern undefined4 *DAT_00390e40;
extern undefined4 DAT_00390e44;
extern float DAT_00390e48;
extern float DAT_00390e4c;

// USA 00390B70 <- EU 00390B4C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00390e2c int *
// GLOBAL DAT_00390e30 undefined4 *
// GLOBAL DAT_00390e34 int *
// GLOBAL DAT_00390e38 int *
// GLOBAL DAT_00390e3c uint *
// GLOBAL DAT_00390e40 undefined4 *
// GLOBAL DAT_00390e44 undefined4
// GLOBAL DAT_00390e48 float
// GLOBAL DAT_00390e4c float

void func_00390B70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define afStack_30 ((float *)(albw_frame + 0x10))
  puVar2 = DAT_00390e30;
  iVar4 = *(int *)(*DAT_00390e2c + 0x18);
  *(undefined4 *)(param_1 + 0x45c) = *DAT_00390e30;
  *(undefined4 *)(param_1 + 0x460) = puVar2[1];
  *(undefined4 *)(param_1 + 0x464) = puVar2[2];
  *(undefined4 *)(param_1 + 0x468) = puVar2[3];
  uVar3 = puVar2[5];
  uVar5 = puVar2[6];
  *(undefined4 *)(param_1 + 0x46c) = puVar2[4];
  *(undefined4 *)(param_1 + 0x470) = uVar3;
  *(undefined4 *)(param_1 + 0x474) = uVar5;
  *(undefined4 *)(param_1 + 0x478) = puVar2[7];
  *(undefined4 *)(param_1 + 0x47c) = puVar2[8];
  *(undefined4 *)(param_1 + 0x480) = puVar2[9];
  *(undefined2 *)(param_1 + 0x484) = *(undefined2 *)(puVar2 + 10);
  *(undefined2 *)(param_1 + 0x486) = *(undefined2 *)((int)puVar2 + 0x2a);
  puVar2 = *(undefined4 **)(*DAT_00390e34 + 0x1c);
  *(undefined4 *)(param_1 + 0x450) = *puVar2;
  *(undefined4 *)(param_1 + 0x454) = puVar2[1];
  *(undefined4 *)(param_1 + 0x458) = puVar2[2];
  func_00115C54(afStack_30,(float *)(param_1 + 0x450),(float *)(param_1 + 0x478));
  iVar1 = func_004BFC24((undefined4 *)(param_1 + 0x4d4));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)func_0052FBA0(*DAT_00390e38 + 0x3dbbc,*(uint *)(param_1 + 0x4d4));
    if (((*DAT_00390e3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00390e3c), iVar1 != 0)) {
      *DAT_00390e40 = DAT_00390e44;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar1 = (**(code **)*puVar2)(puVar2,DAT_00390e40), iVar1 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      fVar7 = ALBW_AS_F32(puVar2[0xf6]);
      fVar6 = ALBW_AS_F32(puVar2[0xf4]);
      fVar8 = DAT_00390e48;
      if (fVar7 == DAT_00390e48 && fVar6 == DAT_00390e48) {
        iVar1 = 0;
      }
      else if (fVar7 < DAT_00390e48) {
        if (fVar6 < DAT_00390e48) {
          if (fVar6 < fVar7) {
            iVar1 = func_004905E0(fVar7 / fVar6);
            iVar1 = -0x40000000 - iVar1;
          }
          else {
            iVar1 = func_004905E0(fVar6 / fVar7);
            iVar1 = iVar1 + -0x80000000;
          }
        }
        else {
          fVar7 = -fVar7;
          if (fVar7 < fVar6) {
            iVar1 = func_004905E0(fVar7 / fVar6);
            iVar1 = iVar1 + 0x40000000;
          }
          else {
            iVar1 = func_004905E0(fVar6 / fVar7);
            iVar1 = -0x80000000 - iVar1;
          }
        }
      }
      else if (fVar6 < DAT_00390e48) {
        fVar6 = -fVar6;
        if (fVar7 < fVar6) {
          iVar1 = func_004905E0(fVar7 / fVar6);
          iVar1 = iVar1 + -0x40000000;
        }
        else {
          iVar1 = func_004905E0(fVar6 / fVar7);
          iVar1 = -iVar1;
        }
      }
      else if (fVar7 < fVar6) {
        iVar1 = func_004905E0(fVar7 / fVar6);
        iVar1 = 0x40000000 - iVar1;
      }
      else {
        iVar1 = func_004905E0(fVar6 / fVar7);
      }
      *(int *)(param_1 + 0x464) = iVar1 + -0x80000000 + *(int *)(param_1 + 0x464);
      if (*(int *)(param_1 + 0x4d4) != 0) {
        local_3c = DAT_00390e4c;
        local_34 = DAT_00390e4c;
        local_38 = fVar8;
        func_00120FBC(iVar4,(undefined4 *)(param_1 + 0x40c),afStack_30,
                      (undefined4 *)(param_1 + 0x45c),(uint)*(ushort *)(param_1 + 0x484),0,&local_3c
                     );
      }
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  return;
}

