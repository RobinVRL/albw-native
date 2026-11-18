#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_0036C1E4(int param_1);
extern int func_0036C2DC(int param_1);
extern int DAT_0036bfa0;
extern int *DAT_0036bfa4;
extern int *DAT_0036bfa8;

// USA 0036BE78 <- EU 0036BE54 (Ghidra, non-matching)
// GLOBAL DAT_0036bfa0 int
// GLOBAL DAT_0036bfa4 int *
// GLOBAL DAT_0036bfa8 int *

undefined4 func_0036BE78(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar2 = DAT_0036bfa0;
  if (*(int *)(param_1 + 0xf0) == 3) {
    iVar3 = 0x1e;
    if (-1 < *(int *)(param_1 + 0x24)) {
      iVar3 = *(int *)(param_1 + 0x24);
    }
    iVar3 = func_00165E28(*(int *)(param_1 + 0xc),(short)iVar3);
    if (iVar3 != 0) {
      if ((*(char *)(param_1 + 0xf8) != '\0') && (*DAT_0036bfa4 != 0)) {
        *(undefined1 *)(*DAT_0036bfa4 + 0xa1) = 0;
      }
      *(undefined4 *)(param_1 + 0xf0) = 4;
      return 0;
    }
  }
  if (*(int *)(param_1 + 0xf0) == 2) {
    cVar1 = *(char *)(param_1 + 0xf4);
    if (cVar1 == '\x01') {
      func_0036C2DC(param_1);
    }
    else if (cVar1 == '\x02') {
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      if (puVar4 == (undefined4 *)0x0) {
        iVar3 = *(int *)(param_1 + 4);
        local_10 = *(undefined4 *)(iVar3 + 0x3d8);
        local_18 = *(undefined4 *)(iVar3 + 0x3d0);
        uStack_14 = *(undefined4 *)(iVar3 + 0x3d4);
      }
      else {
        local_18 = *puVar4;
        uStack_14 = puVar4[1];
        local_10 = puVar4[2];
      }
      func_001E8268(*(int *)(*DAT_0036bfa8 + 0x18),(int *)(*(int *)(param_1 + 0xc) + 0xac),&local_18
                    ,(undefined4 *)(iVar2 + (*(uint *)(param_1 + 0x1c) & 0xff) * 0x2c));
    }
    else {
      if (cVar1 != '\x03') {
        return 0;
      }
      func_0036C1E4(param_1);
    }
  }
  if (*(int *)(param_1 + 0xf0) != 5) {
    return 0;
  }
  return 1;
}

