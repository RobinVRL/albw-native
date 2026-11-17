/* compilefix: func_002A0DF4, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002A0DF4.c) with `this` restored in method calls (on a
 * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int iRam002a0eb4;
extern undefined4 uRam002a0eb8;
extern int *DAT_002a0ea8;
extern undefined4 DAT_002a0eac;
extern undefined4 DAT_002a0eb0;

// USA 002A0DF4 <- EU 002A0DD0 (Ghidra, non-matching)
// GLOBAL DAT_002a0ea8 int *
// GLOBAL DAT_002a0eac undefined4
// GLOBAL DAT_002a0eb0 undefined4
// GLOBAL UNK_002a0eb4 int
// GLOBAL UNK_002a0eb8 undefined4

/* WARNING: Removing unreachable block (ram,0x004fabe4) */

undefined4 func_002A0DF4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  if (*DAT_002a0ea8 != 0) {
    puVar6 = *(undefined4 **)(*DAT_002a0ea8 + 0x1c);
    *(undefined4 *)(param_1 + 0x96c) = *puVar6;
    *(undefined4 *)(param_1 + 0x970) = puVar6[1];
    *(undefined4 *)(param_1 + 0x974) = puVar6[2];
    func_00115C70((float *)(param_1 + 0x96c),(float *)(param_1 + 0x96c),(float *)(param_1 + 0x3d0));
  }
  uVar3 = DAT_002a0eac;
  *(undefined4 *)(param_1 + 0x914) = 0x10;
  *(undefined4 *)(param_1 + 0x918) = uVar3;
  *(undefined4 *)(param_1 + 0x910) = 0;
  uVar3 = DAT_002a0eb0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b | 0x33;
  func_00151148(*(int *)(param_1 + 0x95c),1);
  uVar2 = uRam002a0eb8;
  iVar1 = iRam002a0eb4;
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = uVar3;
  *(undefined4 *)(param_1 + 0x8f8) = uVar2;
  *(undefined4 *)(param_1 + 0x900) = uVar2;
  *(undefined2 *)(iVar1 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0x3d4);
  if (*(int *)(param_1 + 0x5a0) * 0x100000 < 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined4 **)(param_1 + 0x81c) == (undefined4 *)0x0) {
      puVar4 = (uint *)func_002C11E8(aiStack_68,2,0,0);
      func_0016898C(*(int *)(param_1 + 0x410),puVar4);
    }
    else {
      (**(code **)**(undefined4 **)(param_1 + 0x81c))(*(undefined4 **)(param_1 + 0x81c));   /* this restored (vtable_this_fix) */
    }
    puVar5 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
    *puVar5 = *puVar5 & 0xfffe;
    *(undefined1 *)(param_1 + 0x82a) = 1;
    *(undefined4 *)(param_1 + 0x414) = 0;
    uVar3 = 1;
  }
  return uVar3;
}

