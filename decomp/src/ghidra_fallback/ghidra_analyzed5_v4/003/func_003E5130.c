#include "ghidra_types.h"

extern int func_00105998(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4, undefined4 *param_5,int *param_6,uint param_7,uint param_8);
extern int DAT_003e5200;
extern int DAT_003e5204;

// USA 003E5130 <- EU 003E5110 (Ghidra, non-matching)
// GLOBAL DAT_003e5200 int
// GLOBAL DAT_003e5204 int

uint func_003E5130(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char unaff_r10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(uint *)(albw_frame + 0xc))
  #define local_50 ((int *)(albw_frame + 0x10))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_40 ((undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(uint *)(albw_frame + 0x34))
  #define piStack_28 (*(int * *)(albw_frame + 0x38))
  iVar2 = DAT_003e5200;
  iVar5 = 0;
  local_2c = param_1;
  piStack_28 = param_2;
  while( true ) {
    do {
      local_48 = 0;
      local_58 = 0;
      uVar3 = func_00105998(&local_54,local_50,(undefined1 *)0x0,0,local_40,&local_58,
                            *(uint *)(iVar2 + 0x90),*(uint *)(iVar2 + 0x94));
      uVar4 = 0;
      if (DAT_003e5204 != uVar3 * 0x400000) {
        unaff_r10 = '\x01';
        if ((-1 < (int)uVar3) && (*(code **)(iVar2 + 0x48) != (code *)0x0)) {
          unaff_r10 = (**(code **)(iVar2 + 0x48))
                                (*(undefined4 *)(iVar2 + 0x88),local_54,local_50[0],local_48,0,
                                 local_40[0],local_58);
        }
        uVar4 = local_54;
        iVar5 = local_50[0];
        if (param_2 != (int *)0x0) {
          *param_2 = local_58;
        }
      }
    } while (unaff_r10 == '\0');
    if ((int)(uVar3 & 0x80000000) < 0) break;
    uVar1 = uVar3 & 0x80000000;
    if (iVar5 == 3) {
      uVar1 = local_2c;
    }
    if (iVar5 == 3 && uVar1 == uVar4) {
      return uVar3;
    }
  }
  return uVar3;
}

