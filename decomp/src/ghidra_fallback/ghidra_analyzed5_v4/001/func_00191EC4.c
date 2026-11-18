#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern float DAT_001920c0;
extern float DAT_001920c4;
extern undefined4 DAT_001920c8;
extern int *DAT_001920cc;
extern undefined4 *DAT_001920d0;
extern int DAT_001920d4;
extern uint *DAT_001920d8;
extern undefined4 DAT_001920dc;
extern undefined4 *DAT_001920e0;

// USA 00191EC4 <- EU 00191EC4 (Ghidra, non-matching)
// GLOBAL DAT_001920c0 float
// GLOBAL DAT_001920c4 float
// GLOBAL DAT_001920c8 undefined4
// GLOBAL DAT_001920cc int *
// GLOBAL DAT_001920d0 undefined4 *
// GLOBAL DAT_001920d4 int
// GLOBAL DAT_001920d8 uint *
// GLOBAL DAT_001920dc undefined4
// GLOBAL DAT_001920e0 undefined4 *

void func_00191EC4(float *param_1,float *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define fStack_70 (*(float *)(albw_frame + 0x40))
  uVar10 = CONCAT44(DAT_001920c8,DAT_001920c4);
  local_9c = param_2[2] * DAT_001920c0 - DAT_001920c4;
  local_a4 = *param_2 * DAT_001920c0 - DAT_001920c4;
  local_a0 = DAT_001920c8;
  fVar11 = DAT_001920c0;
  func_00115C70(&local_94,param_1,&local_a4);
  func_00115C54(&local_78,param_1,&local_a4);
  puVar2 = DAT_001920d0;
  piVar1 = DAT_001920cc;
  uVar12 = CONCAT44(local_90,fVar11);
  uVar14 = (ulonglong)(uint)ALBW_AS_U32(local_8c);
  uVar9 = CONCAT44(local_78,local_94);
  uVar13 = CONCAT44(fStack_70,local_74);
  puVar5 = (undefined4 *)
           func_005841A8(*DAT_001920cc,*DAT_001920d0,*(int **)(DAT_001920d4 + *DAT_001920cc));
  uVar4 = DAT_001920dc;
  puVar3 = DAT_001920d8;
  puVar8 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  for (; puVar5 != puVar8; puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar5 + 1)) {
    puVar7 = (undefined4 *)*puVar5;
    if (((*puVar3 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_001920d8), iVar6 != 0)) {
      *DAT_001920e0 = uVar4;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar7)(puVar7,DAT_001920e0), iVar6 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 != (undefined4 *)0x0) {
      local_a4 = ALBW_AS_F32(puVar7[0x105]) * ALBW_AS_F32(uVar12) - ALBW_AS_F32(uVar10);
      local_a0 = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_9c = local_a4;
      func_00115C70(&local_94,(float *)(puVar7 + 0xf4),&local_a4);
      func_00115C54(&local_78,(float *)(puVar7 + 0xf4),&local_a4);
      if ((((local_94 <= ALBW_AS_F32(((ulonglong)uVar9 >> 0x20))) && (ALBW_AS_F32(uVar9) <= local_78)) &&
          (local_90 <= ALBW_AS_F32(uVar13))) &&
         (((ALBW_AS_F32(((ulonglong)uVar12 >> 0x20)) <= local_74 &&
           (local_8c <= ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)))) && (ALBW_AS_F32(uVar14) <= fStack_70)))) {
        iVar6 = puVar7[0x106];
        if (0x15 < iVar6) {
          iVar6 = 0x15;
        }
        puVar7[0x106] = iVar6;
      }
    }
  }
  return;
}

