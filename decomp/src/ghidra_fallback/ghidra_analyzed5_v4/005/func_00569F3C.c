#include "ghidra_types.h"

extern int func_00569764(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569C64(int param_1,uint *param_2);
extern int func_0056CD08(int param_1);
extern int DAT_0056a074;

// USA 00569F3C <- EU 00569F14 (Ghidra, non-matching)
// GLOBAL DAT_0056a074 int

uint func_00569F3C(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_2c (*(int *)(albw_frame + 0x24))
  uVar3 = func_0056CD08(param_2);
  uVar5 = uVar3 * 0x5c + 0x1f & 0xffffffe0;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      local_48 = 0;
      local_44 = 0;
      bVar2 = func_00569764(param_2,uVar4 | 0x4000000,&local_48);
      iVar1 = 0;
      if (bVar2) {
        iVar1 = local_44;
      }
      if (bVar2 && iVar1 != 0) {
        uVar5 = local_48 * ((iVar1 + 0x1fU & 0xffffffe0) + 0x40) + uVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  bVar2 = func_00569C64(param_2,&local_40);
  if (bVar2) {
    uVar5 = (local_3c * 0x138 + 0x1fU & 0xffffffe0) +
            (local_38 * DAT_0056a074 + 0x1fU & 0xffffffe0) +
            (local_40 * 0x88 + 0x1f & 0xffffffe0) + (local_40 * 0x2d8 + 0x1f & 0xffffffe0) + uVar5 +
            (local_2c * 0x1e4 + 0x1fU & 0xffffffe0) + (local_2c * 0x4c + 0x1fU & 0xffffffe0);
  }
  if (param_3 != 0) {
    uVar5 = (param_3 + 3U & 0xfffffffc) * (local_38 + local_2c + local_40) + uVar5;
  }
  return uVar5;
}

