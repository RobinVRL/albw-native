#include "ghidra_types.h"

extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_004EFA7C(int param_1,int param_2);
extern int *DAT_0036492c;

// USA 00364888 <- EU 00364864 (Ghidra, non-matching)
// GLOBAL DAT_0036492c int *

void func_00364888(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((byte *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined2 *)(albw_frame + 0x8))
  #define local_16 (*(undefined1 *)(albw_frame + 0xa))
  piVar1 = DAT_0036492c;
  if (*(char *)(param_1 + 0xd4) != '\0') {
    iVar3 = *DAT_0036492c;
    if (*(char *)(iVar3 + 0x18) == '\x14') {
      local_18 = 0x1a;
      local_20[0] = 0x14;
      local_1c = 0;
      local_16 = 1;
      uVar4 = func_004EF418(iVar3,local_20,2,0);
      uVar2 = (undefined1)uVar4;
    }
    else {
      uVar2 = func_004EFA7C(iVar3,2);
    }
    *(undefined1 *)(param_1 + 0xd5) = uVar2;
    *(undefined1 *)(param_1 + 0xd4) = 0;
  }
  if (((*(char *)(param_1 + 0x9a) != '\0') && (*(char *)(param_1 + 0xd5) == '\0')) &&
     (iVar3 = func_004EF418(*piVar1,(byte *)(*(int *)(param_1 + 0x50) + 0x80),5,0), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 0xd5) = 1;
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
  return;
}

