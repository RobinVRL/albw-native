#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined8 func_0058AB74(int param_1);
extern float DAT_00215e18;
extern undefined4 DAT_00215e1c;
extern undefined4 DAT_00215e20;

// USA 00215CF4 <- EU 00215CF4 (Ghidra, non-matching)
// GLOBAL DAT_00215e18 float
// GLOBAL DAT_00215e1c undefined4
// GLOBAL DAT_00215e20 undefined4

void func_00215CF4(int param_1)

{
  int iVar1;
  int iVar2;
  uint unaff_r7;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 ((uint *)(albw_frame + 0x8))
  #define puStack_90 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x60))
  #define local_28 (*(int *)(albw_frame + 0x78))
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x968);
  local_28 = param_1;
  uVar7 = func_0058AB74(param_1);
  if ((int)uVar7 == 5) {
    return;
  }
  lVar6 = (ulonglong)(uint)ALBW_AS_U32(DAT_00215e18) << 0x20;
  if (iVar3 != 0) {
    lVar6 = CONCAT44(DAT_00215e18,DAT_00215e20);
    fVar4 = DAT_00215e18;
    uVar5 = DAT_00215e1c;
    do {
      iVar1 = *(int *)(param_1 + 0x964) + iVar2;
      if (*(int *)(param_1 + 0x960) <= iVar1) {
        iVar1 = iVar1 - *(int *)(param_1 + 0x960);
      }
      iVar1 = *(int *)(param_1 + 0x95c) + iVar1 * 0x28;
      puStack_90 = &local_8c;
      local_98[1] = 3;
      uStack_80 = (undefined4)lVar6;
      local_44 = 10;
      local_40 = 0;
      local_98[0] = 1;
      local_8c = 5;
      unaff_r7 = unaff_r7 | 0xff;
      local_88 = fVar4;
      uStack_84 = uVar5;
      uStack_7c = uVar5;
      local_78 = unaff_r7;
      func_0016898C(*(int *)(iVar1 + 0x1c),local_98);
      iVar2 = iVar2 + 1;
      iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x14);
      if (*(float *)(iVar1 + 8) != fVar4) {
        *(float *)(iVar1 + 8) = fVar4;
        *(undefined1 *)(iVar1 + 0x26) = 1;
      }
    } while (iVar2 != iVar3);
  }
  fVar4 = ALBW_AS_F32(((ulonglong)lVar6 >> 0x20));
  func_004FABDC(local_28,5,0xffffffff,0);
  if ((*(int *)(local_28 + 0x410) != 0) &&
     (iVar2 = *(int *)(*(int *)(local_28 + 0x410) + 0x14), *(float *)(iVar2 + 8) != fVar4)) {
    *(float *)(iVar2 + 8) = fVar4;
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  return;
}

