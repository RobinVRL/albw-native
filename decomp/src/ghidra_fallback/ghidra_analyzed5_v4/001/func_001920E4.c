#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_001922b0;
extern uint *DAT_001922b4;
extern int DAT_001922b8;
extern uint *DAT_001922bc;
extern undefined4 DAT_001922c0;
extern undefined4 *DAT_001922c4;
extern undefined4 DAT_001922c8;
extern int *DAT_001922cc;
extern undefined4 DAT_001922d0;

// USA 001920E4 <- EU 001920E4 (Ghidra, non-matching)
// GLOBAL DAT_001922b0 int *
// GLOBAL DAT_001922b4 uint *
// GLOBAL DAT_001922b8 int
// GLOBAL DAT_001922bc uint *
// GLOBAL DAT_001922c0 undefined4
// GLOBAL DAT_001922c4 undefined4 *
// GLOBAL DAT_001922c8 undefined4
// GLOBAL DAT_001922cc int *
// GLOBAL DAT_001922d0 undefined4

undefined4 func_001920E4(float *param_1,int param_2,float fparam_0)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 in_s1;
  ulonglong uVar9;
  undefined4 uVar10;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define local_300 (*(int *)(albw_frame + 0x0))
  #define local_2fc (*(float *)(albw_frame + 0x4))
  #define fStack_2f8 (*(float *)(albw_frame + 0x8))
  #define fStack_2f4 (*(float *)(albw_frame + 0xc))
  #define local_2f0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_2e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x44))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2b0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_40 (*(undefined4 *)(albw_frame + 0x2c0))
  #define uStack_34 (*(undefined8 *)(albw_frame + 0x2cc))
  #define pfStack_2c (*(float * *)(albw_frame + 0x2d4))
  #define local_28 (*(int *)(albw_frame + 0x2d8))
  puVar2 = DAT_001922b4;
  piVar1 = DAT_001922b0;
  uStack_34 = CONCAT44(in_s1,fparam_0);
  uVar9 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  pfStack_2c = param_1;
  local_28 = param_2;
  puVar4 = (undefined4 *)
           func_005841A8(*DAT_001922b0,*DAT_001922b4,*(int **)(DAT_001922b8 + *DAT_001922b0));
  uVar10 = DAT_001922c0;
  puVar3 = DAT_001922bc;
  local_2f0 = (undefined4)uVar9;
  puVar8 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  while( true ) {
    if (puVar4 == puVar8) {
      local_2e0 = 0;
      local_2dc = 0;
      local_2e4 = 0;
      local_2b8 = 0;
      local_2b4 = 0;
      local_40 = 0;
      func_002DFF7C(&local_300);
      local_300 = func_0019B04C(*puVar2);
      local_2fc = *param_1;
      fStack_2f8 = param_1[1];
      fStack_2f4 = param_1[2];
      local_2e0 = 0;
      uStack_2ec = DAT_001922c8;
      uVar10 = DAT_001922c8;
      local_2e8 = local_2f0;
      uVar6 = func_00581D60(*DAT_001922cc);
      local_2b0 = (undefined2)uVar6;
      local_2bc = uVar10;
      if (local_28 == 0) {
        local_2bc = DAT_001922d0;
      }
      return func_004C43E0(*piVar1,&local_300);
    }
    puVar7 = (undefined4 *)*puVar4;
    if (((*puVar3 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001922bc), iVar5 != 0)) {
      *DAT_001922c4 = uVar10;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar7)(puVar7,DAT_001922c4), iVar5 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if ((((puVar7 != (undefined4 *)0x0) && (ALBW_AS_F32(puVar7[0xf4]) == *param_1)) &&
        (ALBW_AS_F32(puVar7[0xf6]) == param_1[2])) &&
       ((*(char *)((int)puVar7 + 0x429) != '\0' &&
        ((*(char *)(puVar7 + 0x109) != '\0' || (*(char *)((int)puVar7 + 0x425) == '\0')))))) break;
    puVar4 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar4 + 1);
    local_2f0 = (undefined4)uVar9;
  }
  puVar7[0x106] = 0x168;
  return 0;
}

