#include "ghidra_types.h"

extern int func_0051AA20(int param_1);
extern int func_00532C78(int param_1);
extern int func_0058DA7C(int param_1);
extern int func_0058DABC(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00448324;
extern float DAT_00448328;

// USA 00448244 <- EU 0044821C (Ghidra, non-matching)
// GLOBAL DAT_00448324 int *
// GLOBAL DAT_00448328 float

undefined4 func_00448244(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  piVar2 = DAT_00448324;
  bVar1 = true;
  uVar3 = 0;
  do {
    if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
      uVar4 = *(uint *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
    }
    else {
      uVar4 = 0;
    }
    bVar6 = *(char *)(uVar4 + 0xd) == '\x03';
    if (bVar6) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if (!bVar6 || uVar4 != 3) {
      if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (*(char *)(iVar5 + 0x6c) != '\0') {
        bVar1 = false;
        goto LAB_00448284;
      }
    }
    uVar3 = uVar3 + 1;
    if (0x13 < (int)uVar3) {
LAB_00448284:
      iVar5 = func_0058DA7C(*DAT_00448324);
      if (iVar5 != 0) {
        func_0051AA20(*piVar2);
      }
      if (((*(float *)(param_1 + 0x260) <= DAT_00448328) &&
          (iVar5 = func_0058DABC(*piVar2), iVar5 != 0)) &&
         (bVar6 = func_00532C78(param_1 + 0xf8), !bVar6)) {
        uVar3 = *(uint *)(param_1 + 0x214);
        bVar6 = *(char *)(uVar3 + 0xd) == '\x01';
        if (bVar6) {
          uVar3 = (uint)*(byte *)(uVar3 + 0xe);
        }
        if ((!bVar6 || uVar3 != 1) && (bVar1)) {
          if (*(char *)(param_1 + 0x290) == '\0') {
            return func_0066CC58((undefined4 *)(param_1 + 0x158),0);
          }
          func_0066CC58((undefined4 *)(param_1 + 0x158),2);
        }
      }
      return 0;
    }
  } while( true );
}

