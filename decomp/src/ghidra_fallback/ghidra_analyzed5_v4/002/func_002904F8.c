#include "ghidra_types.h"

extern int func_0052EE58(void);
extern int func_00552FC0(uint param_1);
extern int *DAT_00290634;
extern int DAT_00290638;

// USA 002904F8 <- EU 00290520 (Ghidra, non-matching)
// GLOBAL DAT_00290634 int *
// GLOBAL DAT_00290638 int

void func_002904F8(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar4 = DAT_00290638;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) == 0x3f800000) {
    uVar5 = *(uint *)(*DAT_00290634 + 0x44);
    bVar7 = uVar5 == 0;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(param_1 + 0x7c);
    }
    if (((((bVar7 && uVar5 == 0) &&
          (cVar1 = *(char *)(DAT_00290638 + *(short *)(param_1 + 0x42) * 0x10),
          cVar1 != '\b' && cVar1 != '\x11')) && (cVar1 != '\x12')) &&
        (iVar6 = func_0052EE58(), iVar6 == 0)) &&
       ((uVar5 = *(uint *)(param_1 + 0x1c), (*(uint *)(uVar5 + 0x328) & 0x80) == 0 ||
        (*(char *)(uVar5 + 0x33c) != '\f')))) {
      uVar5 = func_00552FC0(uVar5);
      if (uVar5 == 0) {
        if (((*(uint *)(iVar4 + *(short *)(param_1 + 0x40) * 0x10 + 4) & 2) == 0) ||
           (2 < *(uint *)(param_1 + 0x44))) {
          uVar2 = *(ushort *)(param_1 + 0x42);
          if ((1 < uVar2) && (uVar2 != 0x6b && uVar2 != 0x6c)) goto LAB_0029062c;
        }
        else if (*(short *)(param_1 + 0x42) == 7) goto LAB_0029062c;
      }
      sVar3 = *(short *)(param_1 + 0x42);
      if (((sVar3 != 0x1d && sVar3 != 0x1e) && sVar3 != 0x5f) &&
         (*(int *)(*(int *)(param_1 + 0x10) + 0x620) == 0)) {
        *(undefined1 *)(param_1 + 0xce) = 1;
        return;
      }
    }
  }
LAB_0029062c:
  *(undefined1 *)(param_1 + 0xce) = 0;
  return;
}

