#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int *DAT_0039d734;
extern float DAT_0039d738;

// USA 0039D5C8 <- EU 0039D5A4 (Ghidra, non-matching)
// GLOBAL DAT_0039d734 int *
// GLOBAL DAT_0039d738 float

undefined4 func_0039D5C8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_50 ((float *)(albw_frame + 0x10))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  iVar1 = func_0052FBA0(*DAT_0039d734 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  if (*(char *)(param_1 + 0x410) == '\0') {
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x4d4);
      *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar2 + 0x80),
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(iVar1 + 0x40c) + 0x24) + 0x14) +
                    *(int *)(iVar1 + 0xb80) * 0x30));
      iVar1 = *(int *)(param_1 + 0x4d4);
      *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(iVar1 + 0x8c);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(iVar1 + 0x9c);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar1 + 0xac);
    }
    iVar1 = *(int *)(param_1 + 0x4d4);
    uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x2d0) + 0x14);
    *(undefined4 *)(iVar1 + 0x74) = uVar3;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar1 + 0x78) = uVar3;
    *(undefined4 *)(iVar1 + 0x7c) = uVar3;
  }
  else {
    func_00491B3C(afStack_50,(float *)(param_1 + 0x51c));
    iVar2 = *(int *)(param_1 + 0x4d4);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar2 + 0x80),afStack_50);
    local_60 = local_48;
    local_5c = local_38;
    local_58 = local_28;
    func_0068A3EC(&local_60,DAT_0039d738);
    iVar2 = *(int *)(param_1 + 0x4d4);
    func_00115C54(&local_20,(float *)(param_1 + 0x3d0),&local_60);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(float *)(iVar2 + 0x8c) = local_20;
    *(undefined4 *)(iVar2 + 0x9c) = uStack_1c;
    *(undefined4 *)(iVar2 + 0xac) = uStack_18;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x4d4);
      uVar3 = **(undefined4 **)(*(int *)(iVar1 + 0x2d0) + 0x14);
      *(undefined4 *)(iVar2 + 0x74) = uVar3;
      *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar2 + 0x78) = uVar3;
      *(undefined4 *)(iVar2 + 0x7c) = uVar3;
    }
  }
  return func_004CEAF0(*(int *)(param_1 + 0x4d4));
}

