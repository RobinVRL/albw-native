#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern undefined1 *DAT_001d918c;

// USA 001D90EC <- EU 001D90EC (Ghidra, non-matching)
// GLOBAL DAT_001d918c undefined1 *

void func_001D90EC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined1 *)(albw_frame + 0x8))
  #define local_17 (*(undefined1 *)(albw_frame + 0x9))
  #define local_16 (*(undefined1 *)(albw_frame + 0xa))
  #define local_15 (*(undefined1 *)(albw_frame + 0xb))
  #define local_14 (*(undefined1 *)(albw_frame + 0xc))
  #define local_13 (*(undefined1 *)(albw_frame + 0xd))
  #define local_12 (*(undefined1 *)(albw_frame + 0xe))
  #define local_11 (*(undefined1 *)(albw_frame + 0xf))
  puVar3 = (undefined4 *)&local_18;
  *(char *)(param_1 + 0x49c) = (char)param_2;
  local_18 = 0xff;
  local_17 = 0xff;
  local_16 = 0xff;
  local_15 = 0xff;
  if (param_2 == 0) {
    puVar3 = (undefined4 *)&local_14;
  }
  local_14 = DAT_001d918c[3];
  local_13 = DAT_001d918c[2];
  local_12 = DAT_001d918c[1];
  local_11 = *DAT_001d918c;
  iVar2 = *(int *)(param_1 + 0x40c);
  if ((iVar2 != 0) && (iVar1 = 0, 0 < *(int *)(*(int *)(iVar2 + 0x20) + 4))) {
    do {
      func_004CF5DC(iVar2,iVar1,2,puVar3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(int *)(iVar2 + 0x20) + 4));
  }
  return;
}

