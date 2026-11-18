/* compilefix: USA 00554F70 (EU 00554F48), cast animation command (event: play an animation on a
 * cast slot, or a blend / speed variant by flag 0x20000 / 0x40000). The vt+4 play-animation call
 * had lost its animation and blend arguments (BOOT_LOG 160r). Rest unchanged. */
#include "ghidra_types.h"

extern int func_001FE944(int param_1,undefined4 param_2,int param_3);
extern int func_001FEA20(int param_1,undefined4 param_2);

// USA 00554F70 <- EU 00554F48 (Ghidra, non-matching)

undefined4 func_00554F70(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined4 *)(param_2 + 0x1418);
  if (*(uint *)(param_1 + 0xc) < 0x10) {
    puVar1 = puVar1 + *(uint *)(param_1 + 0xc);
  }
  piVar3 = (int *)*puVar1;
  if (piVar3 != (int *)0x0) {
    if ((uVar2 & 0x20000) != 0) {
      return func_001FEA20((int)piVar3,uVar2 & 0xffff);
    }
    if ((uVar2 & 0x40000) == 0) {
      /* ARM EU 554FC0..554FCC: r1 = command +0x10 (animation word), r2 = command +0x14 (blend
       * frames); vt+4 = castSlot_PlayAnim 004F0864(slot, anim, blend). The Ghidra call had only
       * the slot: animations started with index 0x3F800000 (a float 1.0 left in the register), so
       * locator-following animations were missed (Yuga stood at the room origin, culled) */
      ((void (*)(int *, uint, int))*(code **)(*piVar3 + 4))(piVar3, uVar2, *(int *)(param_1 + 0x14));
      piVar3[6] = (int)uVar4;
      piVar3[7] = (int)((ulonglong)uVar4 >> 0x20);
      return 0;
    }
    func_001FE944((int)piVar3,uVar2 & 0xffff,*(int *)(param_1 + 0x14));
    piVar3[8] = (int)uVar4;
  }
  return 0;
}

