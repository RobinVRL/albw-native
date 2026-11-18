#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_004FA000(int param_1);
extern int DAT_004f96f4;
extern int DAT_004f96f8;
extern undefined1 *DAT_004f96fc;

// USA 004F95A0 <- EU 004F9578 (Ghidra, non-matching)
// GLOBAL DAT_004f96f4 int
// GLOBAL DAT_004f96f8 int
// GLOBAL DAT_004f96fc undefined1 *

void func_004F95A0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined1 *)(albw_frame + 0x0))
  #define local_1f (*(undefined1 *)(albw_frame + 0x1))
  #define local_1e (*(undefined1 *)(albw_frame + 0x2))
  #define local_1d (*(undefined1 *)(albw_frame + 0x3))
  #define local_1c (*(undefined1 *)(albw_frame + 0x4))
  #define local_1b (*(undefined1 *)(albw_frame + 0x5))
  #define local_1a (*(undefined1 *)(albw_frame + 0x6))
  #define local_19 (*(undefined1 *)(albw_frame + 0x7))
  *(char *)(param_1 + 0x77c) = (char)param_2;
  iVar5 = DAT_004f96f4;
  puVar4 = (undefined1 *)(param_1 + 0x824);
  if (param_2 == 0) {
    if (((*(uint *)(DAT_004f96f4 + 0x10) & 1) == 0) &&
       (iVar2 = func_00100174((int *)(DAT_004f96f4 + 0x10)), iVar2 != 0)) {
      *(undefined1 *)(iVar5 + 0x14) = 0xff;
      *(undefined1 *)(iVar5 + 0x15) = 0;
      *(undefined1 *)(iVar5 + 0x16) = 0;
      *(undefined1 *)(iVar5 + 0x17) = 0;
    }
    cVar1 = *(char *)(DAT_004f96f8 + param_1);
    puVar3 = (undefined4 *)func_004FA000((int)cVar1);
    puVar4 = DAT_004f96fc;
    *(undefined4 *)(iVar5 + 0x14) = *puVar3;
    if (cVar1 == 0) {
      *puVar4 = *(undefined1 *)(param_1 + 0x851);
    }
  }
  local_20 = puVar4[3];
  local_1f = puVar4[2];
  local_1e = puVar4[1];
  local_1d = *puVar4;
  local_1c = *(undefined1 *)(param_1 + 0x827);
  local_1b = *(undefined1 *)(param_1 + 0x826);
  local_1a = *(undefined1 *)(param_1 + 0x825);
  local_19 = *(undefined1 *)(param_1 + 0x824);
  uVar7 = 0;
  if (*(char *)(param_1 + 0x650) != '\0') {
    do {
      piVar6 = (int *)(param_1 + 0x5a8 + uVar7 * 0xc);
      iVar5 = *piVar6;
      if ((iVar5 != 0) && (iVar2 = 0, 0 < *(int *)(*(int *)(iVar5 + 0x20) + 4))) {
        do {
          if ((*(byte *)(piVar6 + 1) & 2) == 0) {
            func_004CF5DC(iVar5,iVar2,2,(undefined4 *)&local_1c);
          }
          else {
            func_004CF5DC(iVar5,iVar2,2,(undefined4 *)&local_20);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(*(int *)(iVar5 + 0x20) + 4));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(param_1 + 0x650));
  }
  return;
}

