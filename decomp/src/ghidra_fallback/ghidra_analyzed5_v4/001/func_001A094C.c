#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int DAT_001a0a44;

// USA 001A094C <- EU 001A094C (Ghidra, non-matching)
// GLOBAL DAT_001a0a44 int

void func_001A094C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_23 (*(undefined1 *)(albw_frame + 0xd))
  #define local_22 (*(undefined1 *)(albw_frame + 0xe))
  #define local_21 (*(undefined1 *)(albw_frame + 0xf))
  puVar4 = (undefined4 *)&local_28;
  *(char *)(DAT_001a0a44 + param_1) = (char)param_2;
  local_28 = 0xff;
  local_24 = 0xff;
  local_27 = 0xff;
  local_23 = 0xff;
  local_26 = 0xff;
  local_22 = 0xff;
  local_25 = 0xff;
  local_21 = 0xa0;
  iVar2 = *(int *)(param_1 + 0x40c);
  if (param_2 == 0) {
    puVar4 = (undefined4 *)&local_24;
  }
  if ((iVar2 != 0) && (iVar1 = 0, 0 < *(int *)(*(int *)(iVar2 + 0x20) + 4))) {
    do {
      func_004CF5DC(iVar2,iVar1,2,puVar4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(int *)(iVar2 + 0x20) + 4));
  }
  iVar2 = 0;
  do {
    iVar1 = 0;
    iVar3 = *(int *)(param_1 + iVar2 * 0x48 + 0xa1c);
    if (0 < *(int *)(*(int *)(iVar3 + 0x20) + 4)) {
      do {
        func_004CF5DC(iVar3,iVar1,2,puVar4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(int *)(iVar3 + 0x20) + 4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}

