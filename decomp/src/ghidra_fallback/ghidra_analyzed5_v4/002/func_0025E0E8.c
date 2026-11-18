#include "ghidra_types.h"

extern int func_0025DCF8(int param_1);
extern int func_0031D4D4(int param_1,float fparam_0);
extern int func_0036158C(int param_1,undefined1 param_2);
extern int func_003616E4(int param_1);
extern int func_0065FF80(undefined4 *param_1,undefined1 param_2);
extern int DAT_0025e278;
extern int *DAT_0025e27c;
extern int *DAT_0025e280;

// USA 0025E0E8 <- EU 0025E110 (Ghidra, non-matching)
// GLOBAL DAT_0025e278 int
// GLOBAL DAT_0025e27c int *
// GLOBAL DAT_0025e280 int *

void func_0025E0E8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_0025e278;
  iVar2 = *(int *)(param_1 + 0xf4);
  uVar4 = (uint)*(char *)(iVar2 + 0x14);
  if ((*(char *)(iVar2 + 0x16a) == '\0') || (uVar4 != 2)) {
    if ((uVar4 == 3) && (*(char *)(iVar2 + 0x168) != '\0')) {
      uVar4 = *(uint *)(param_1 + 0x134);
      iVar2 = uVar4 + 1;
      *(int *)(param_1 + 0x134) = iVar2;
      if (iVar2 < 0xc) {
        iVar3 = iVar3 + iVar2 * 0x24;
        uVar6 = *(undefined4 *)(iVar3 + 8);
        *(uint *)(param_1 + 0xbc) = (uint)*(byte *)(iVar3 + 4);
        *(undefined4 *)(param_1 + 0xc0) = uVar6;
        *(uint *)(param_1 + 0xc4) = uVar4 & 0xff000000 | 0x1003f;
        if ((int)(uVar4 + 2) < 0xc) {
          func_0031D4D4(*(int *)(param_1 + 0xf4),*(float *)(iVar3 + 0x24));
        }
        *(undefined1 *)(param_1 + 0x138) = 1;
        if (iVar2 == 0xb) {
          *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x16a) = 1;
        }
      }
    }
    else {
      bVar5 = uVar4 == 3;
      if (bVar5) {
        uVar4 = (uint)*(byte *)(iVar2 + 0x169);
      }
      if (((bVar5 && uVar4 == 0) && (0xf < *(int *)(iVar2 + 0x10))) &&
         (*(char *)(*DAT_0025e27c + 0x60) == '\0')) {
        *(undefined1 *)(iVar2 + 0x169) = 1;
        func_0025DCF8(param_1);
        piVar1 = DAT_0025e280;
        func_0036158C(*DAT_0025e280,
                      *(char *)(iVar3 + *(int *)(param_1 + 0x134) * 0x24 + 0x10) != '\0');
        func_003616E4(*piVar1);
      }
    }
    if (*(char *)(*(int *)(param_1 + 0xf4) + 0x14) == '\x04') {
      *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x94) = 0;
      return;
    }
  }
  else {
    func_0065FF80((undefined4 *)(param_1 + 200),3);
  }
  return;
}

