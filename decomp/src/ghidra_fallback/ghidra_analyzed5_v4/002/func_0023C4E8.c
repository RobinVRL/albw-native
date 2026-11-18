#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3700(int param_1);
extern undefined4 *DAT_0023c6fc;
extern float DAT_0023c700;
extern undefined DAT_0023c704;
extern char s__Twinkle_0023c707[];
extern undefined4 _DAT_0023c704;

// USA 0023C4E8 <- EU 0023C4E8 (Ghidra, non-matching)
// GLOBAL DAT_0023c6fc undefined4 *
// GLOBAL DAT_0023c700 float
// GLOBAL DAT_0023c704 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0023C4E8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 ((uint *)(albw_frame + 0x8))
  #define local_a0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(uint *)(albw_frame + 0x38))
  #define local_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x60))
  #define local_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x70))
  uVar3 = _DAT_0023c704;
  fVar4 = DAT_0023c700;
  puVar5 = DAT_0023c6fc;
  piVar2 = (int *)(param_1 + 0x53c);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x539) != '\0') {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x540))) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffbb | 8;
        func_004A3700(iVar1);
      }
      local_a0 = &local_9c;
      local_a8[1] = 3;
      local_54 = 10;
      local_50 = 0;
      local_a8[0] = 1;
      local_9c = 1;
      local_88 = ALBW_AS_F32(((uint)piVar2 | 0xff));
      local_98 = fVar4;
      local_94 = uVar3;
      local_90 = puVar5;
      local_8c = uVar3;
      func_0016898C(*(int *)(param_1 + 0x4f8),local_a8);
      iVar1 = *(int *)(*(int *)(param_1 + 0x4f8) + 0x14);
      if (*(float *)(iVar1 + 8) != fVar4) {
        *(float *)(iVar1 + 8) = fVar4;
        *(undefined1 *)(iVar1 + 0x26) = 1;
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 0x10) = uVar3;
    }
    func_003521F0(param_1 + 0x324,0);
  }
  else {
    if (*(char *)(param_1 + 0x539) == '\0') {
      if (*(int *)(param_1 + 0x344) == 0) {
        *piVar2 = 0;
        *(undefined4 *)(param_1 + 0x540) = 0;
      }
      else {
        iVar1 = *piVar2;
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x540))) {
          func_00110848(iVar1);
        }
        func_004A1B9C((int *)&local_a0,*(int *)(param_1 + 0x344),(uint *)(s__Twinkle_0023c707 + 1));
        *piVar2 = (int)local_a0;
        *(undefined4 *)(param_1 + 0x540) = local_9c;
      }
      local_90 = &local_8c;
      local_94 = 3;
      local_44 = 10;
      local_40 = 0;
      local_8c = 0;
      local_98 = 1.4013e-45;
      local_78 = (uint)piVar2 | 0xff;
      local_88 = fVar4;
      uStack_84 = uVar3;
      local_80 = puVar5;
      local_7c = uVar3;
      func_0016898C(*(int *)(param_1 + 0x4f8),(uint *)&local_98);
      iVar1 = *(int *)(*(int *)(param_1 + 0x4f8) + 0x14);
      if (*(float *)(iVar1 + 8) != fVar4) {
        *(float *)(iVar1 + 8) = fVar4;
        *(undefined1 *)(iVar1 + 0x26) = 1;
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 0x10) = uVar3;
    }
    func_003521F0(param_1 + 0x324,1);
  }
  *(char *)(param_1 + 0x539) = (char)param_2;
  return;
}

