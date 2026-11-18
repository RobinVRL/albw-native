#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0058A4BC(undefined4 param_1,float *param_2,float *param_3,float *param_4,undefined1 param_5, undefined4 param_6,uint param_7);
extern undefined4 *DAT_005312e0;
extern float DAT_005312e4;
extern float DAT_005312e8;
extern float DAT_005312ec;
extern uint DAT_005312f0;

// USA 0053114C <- EU 00531124 (Ghidra, non-matching)
// GLOBAL DAT_005312e0 undefined4 *
// GLOBAL DAT_005312e4 float
// GLOBAL DAT_005312e8 float
// GLOBAL DAT_005312ec float
// GLOBAL DAT_005312f0 uint

undefined4 func_0053114C(int param_1,uint param_2,float *param_3,float *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fparam_0;
  ulonglong uVar5;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x50))
  #define fStack_4c (*(float *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  puVar1 = DAT_005312e0;
  if (((DAT_005312e0[-0xb] & 1) == 0) && (iVar2 = func_00100174(DAT_005312e0 + -0xb), iVar2 != 0)) {
    *puVar1 = 0x40000000;
    puVar1[1] = 0xc0000000;
  }
  local_94 = *(float *)(param_1 + 0x9b4);
  local_8c = *(float *)(param_1 + 0x9bc);
  local_90 = *(float *)(param_1 + 0x3d4) + DAT_005312e4;
  fVar4 = DAT_005312e8;
  if (param_4 == (float *)0x0) {
    func_001119F4(&uStack_68,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                  *(int *)(param_1 + 0x9cc) * 0x30));
    fparam_0 = SQRT((local_94 - local_5c) * (local_94 - local_5c) +
                    (local_8c - local_3c) * (local_8c - local_3c)) + DAT_005312ec;
  }
  else {
    fparam_0 = *param_4;
  }
  if (fVar4 < fparam_0) {
    uVar3 = 0;
    uVar5 = (ulonglong)DAT_005312f0;
    do {
      func_004D80A4(&fStack_4c,param_2 + puVar1[uVar3],ALBW_AS_F32(uVar5));
      local_48 = fVar4;
      func_00115C54(&local_80,&local_94,&fStack_4c);
      local_64 = local_80;
      uStack_60 = uStack_7c;
      local_5c = fStack_78;
      func_004D80A4(&fStack_40,param_2,fparam_0);
      local_3c = fVar4;
      func_00115C54(&local_74,&local_64,&fStack_40);
      local_58 = local_74;
      uStack_54 = uStack_70;
      uStack_50 = uStack_6c;
      iVar2 = func_0058A4BC(param_1,&local_64,&local_58,param_3,0,0,0xf);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
  }
  return 0;
}

