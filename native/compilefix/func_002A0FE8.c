/* compilefix: func_002A0FE8, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002A0FE8.c) with `this` restored in method calls (on a
 * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */
#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 uRam002a1050;
extern undefined4 uRam002a1054;

// USA 002A0FE8 <- EU 002A0FC4 (Ghidra, non-matching)
// GLOBAL UNK_002a1050 undefined4
// GLOBAL UNK_002a1054 undefined4

undefined8 func_002A0FE8(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff4b | 3;
  func_00151148(*(int *)(param_1 + 0x95c),1);
  uVar4 = uRam002a1050;
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = uRam002a1054;
  *(undefined4 *)(param_1 + 0x8f8) = uVar4;
  *(undefined4 *)(param_1 + 0x900) = uVar4;
  *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0x3d4);
  uVar5 = func_0058AB74(param_1);
  if ((int)uVar5 != 3) {
    uVar4 = 5;
    if (*(int *)(param_1 + 0x5a0) * 0x100000 < 0) {
      uVar1 = 0;
    }
    else {
      if (*(undefined4 **)(param_1 + 0x81c) == (undefined4 *)0x0) {
        puVar2 = (uint *)func_002C11E8(aiStack_68,5,(uint)*(byte *)(param_1 + 0x655),0);
        func_0016898C(*(int *)(param_1 + 0x410),puVar2);
      }
      else {
        (**(code **)**(undefined4 **)(param_1 + 0x81c))(*(undefined4 **)(param_1 + 0x81c));   /* this restored (vtable_this_fix) */
      }
      puVar3 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
      *puVar3 = *puVar3 & 0xfffe;
      uVar4 = 1;
      *(undefined1 *)(param_1 + 0x82a) = 1;
      *(undefined4 *)(param_1 + 0x414) = 0;
      uVar1 = 1;
    }
    return CONCAT44(uVar4,uVar1);
  }
  return uVar5;
}

