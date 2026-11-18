// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_002B91C0(int param_1,float *param_2);
extern int func_0052114C();
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_002114e4;
extern undefined4 DAT_002114e8;
extern undefined4 DAT_002114ec;
extern int *DAT_002114f0;
extern uint *DAT_002114f4;
extern undefined4 *DAT_002114f8;
extern undefined4 DAT_002114fc;
extern uint *DAT_00211500;
extern undefined4 *DAT_00211504;
extern undefined4 DAT_00211508;
extern float DAT_0021150c;

// USA 00211328 <- EU 00211328 (Ghidra, non-matching)
// GLOBAL DAT_002114e4 float
// GLOBAL DAT_002114e8 undefined4
// GLOBAL DAT_002114ec undefined4
// GLOBAL DAT_002114f0 int *
// GLOBAL DAT_002114f4 uint *
// GLOBAL DAT_002114f8 undefined4 *
// GLOBAL DAT_002114fc undefined4
// GLOBAL DAT_00211500 uint *
// GLOBAL DAT_00211504 undefined4 *
// GLOBAL DAT_00211508 undefined4
// GLOBAL DAT_0021150c float

void func_00211328(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  piVar2 = DAT_002114f0;
  uVar10 = DAT_002114e8;
  if (*(short *)(param_1 + 0x30) != 0) {
    uVar10 = DAT_002114ec;
  }
  fVar9 = DAT_002114e4;
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_002114f0 + 0x3dbbc,*(uint *)(param_1 + 0x964));
  if (puVar3 != (undefined4 *)0x0) {
    if (((*DAT_002114f4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_002114f4), iVar4 != 0)) {
      *DAT_002114f8 = DAT_002114fc;
    }
    iVar4 = (**(code **)*puVar3)(puVar3,DAT_002114f8);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      func_00115C70(&local_2c,(float *)(puVar3 + 0xf4),(float *)(param_1 + 0x3d0));
      uVar11 = CONCAT44(local_2c * local_2c + local_28 * local_28 + fStack_24 * fStack_24,uVar10);
      puVar5 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_1 + 0x964));
      if (puVar5 != (undefined4 *)0x0) {
        if (((*DAT_00211500 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00211500), iVar4 != 0))
        {
          *DAT_00211504 = DAT_00211508;
        }
        iVar4 = (**(code **)*puVar5)(puVar5,DAT_00211504);
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        iVar4 = func_0052114C(param_1,ALBW_AS_F32(puVar5[0xf5]),fVar9);
        bVar7 = iVar4 < 0;
        bVar8 = iVar4 == 0;
        bVar6 = false;
        if (!bVar8) {
          fVar9 = ALBW_AS_F32(uVar11) * ALBW_AS_F32(uVar11);
          fVar12 = ALBW_AS_F32(((ulonglong)uVar11 >> 0x20));
          bVar7 = fVar9 < fVar12;
          bVar8 = fVar9 == fVar12;
          bVar6 = NAN(fVar9) || NAN(fVar12);
        }
        if ((!bVar8 && bVar7 == bVar6) &&
           ((cVar1 = *(char *)(param_1 + 0x8c0), cVar1 == '\x01' || cVar1 == '\x02' ||
            (cVar1 == '\x05' || cVar1 == '\x06')))) {
          func_00115C70(afStack_38,(float *)(param_1 + 0x3d0),(float *)(puVar3 + 0xf4));
          func_00115DC8(afStack_38);
          func_00115D70(afStack_38,afStack_38,DAT_0021150c);
          func_002B91C0((int)puVar3,afStack_38);
        }
      }
    }
  }
  return;
}

