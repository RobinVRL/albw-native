#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int DAT_005659e4;

// USA 00565904 <- EU 005658DC (Ghidra, non-matching)
// GLOBAL DAT_005659e4 int

int func_00565904(undefined4 param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = DAT_005659e4;
  uVar2 = 0;
  do {
    iVar3 = *(int *)(*param_4 + (uint)*(ushort *)(param_3 + 0x20) * 0x278 + uVar2 * 4 + 0x238);
    if (iVar3 != 0) {
      local_24 = *(undefined4 *)(iVar1 + 0x14);
      local_28 = (uVar2 & 0xff) * 0x100 + 0x800;
      func_0010E3C4((uint *)*param_2,&local_28,8);
      *param_2 = *param_2 + 8;
      func_003CC090(param_2,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8) << 2);
    }
    iVar3 = *param_4 + (uint)*(ushort *)(param_3 + 0x20) * 0x278 + uVar2 * 4;
    iVar4 = *(int *)(iVar3 + 600);
    if (iVar4 != 0) {
      local_24 = *(undefined4 *)(iVar1 + 0xc);
      local_28 = (uVar2 & 0xff) * 0x100 + 0x1000;
      func_0010E3C4((uint *)*param_2,&local_28,8);
      *param_2 = *param_2 + 8;
      iVar3 = func_003CC090(param_2,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8) << 2);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return iVar3;
}

