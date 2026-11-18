#include "ghidra_types.h"

extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern undefined4 DAT_00487bc4;
extern int DAT_00487bc8;
extern undefined4 DAT_00487bcc;
extern undefined4 DAT_00487bd0;
extern undefined4 DAT_00487bd4;

// USA 00487AFC <- EU 00487AD4 (Ghidra, non-matching)
// GLOBAL DAT_00487bc4 undefined4
// GLOBAL DAT_00487bc8 int
// GLOBAL DAT_00487bcc undefined4
// GLOBAL DAT_00487bd0 undefined4
// GLOBAL DAT_00487bd4 undefined4

void func_00487AFC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  iVar2 = DAT_00487bc8;
  local_24 = DAT_00487bc4;
  local_28 = DAT_00487bc8;
  iVar1 = func_005229AC(*(int **)(param_1 + 0x1c),&local_28);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      local_20 = iVar2;
      local_1c = DAT_00487bd0;
      iVar2 = func_005229AC(*(int **)(param_1 + 0x1c),&local_20);
    }
    else if (param_2 == 1) {
      local_20 = iVar2;
      local_1c = DAT_00487bd4;
      iVar2 = func_005229AC(*(int **)(param_1 + 0x1c),&local_20);
    }
    else {
      if (param_2 != 2) {
        return;
      }
      local_20 = iVar2;
      local_1c = DAT_00487bcc;
      iVar2 = func_005229AC(*(int **)(param_1 + 0x1c),&local_20);
    }
    if (iVar2 != 0) {
      if (*(int *)(iVar1 + 0xc) != 0) {
        func_003FF904(*(int *)(iVar1 + 0xc),iVar1);
      }
      func_003FF898(iVar2,iVar1);
      *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
      *(char *)(param_1 + 0x88) = (char)param_2;
    }
  }
  return;
}

