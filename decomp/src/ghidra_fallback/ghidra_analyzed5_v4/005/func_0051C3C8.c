#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0014A980(int param_1,undefined1 param_2);
extern int func_001E3704(int param_1);
extern int func_0058DDB0(int param_1);
extern int *DAT_0051c500;

// USA 0051C3C8 <- EU 0051C3A0 (Ghidra, non-matching)
// GLOBAL DAT_0051c500 int *

undefined4 func_0051C3C8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint in_r3;
  bool bVar6;
  bool bVar7;
  
  piVar2 = DAT_0051c500;
  if (*(char *)(*DAT_0051c500 + 0x25) != '\0') {
    return 0;
  }
  func_001E3704(*(int *)(param_1 + 0x130));
  cVar1 = *(char *)(*(int *)(param_1 + 0xe4) + 0xd);
  if (((cVar1 == '\x01') ||
      ((cVar1 == '\x03' && (*(char *)(*(int *)(param_1 + 0xe4) + 0xe) == '\x03')))) &&
     (iVar3 = func_0058DDB0(param_1), iVar3 != 0)) {
    func_0012C718(*(int *)(param_1 + 0xe4));
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xe4);
    bVar6 = *(char *)(uVar4 + 0xd) == '\0';
    if (bVar6) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if ((bVar6 && uVar4 == 0) && (iVar3 = func_0058DDB0(param_1), iVar3 == 0)) {
      *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0xe) = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x84);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    in_r3 = (uint)*(byte *)(iVar3 + 0xe);
  }
  bVar7 = bVar6 && in_r3 == 0;
  if (bVar6 && in_r3 == 0) {
    bVar7 = *(int *)(param_1 + 0x118) == 0;
  }
  if ((bVar7) && ((*(ushort *)(param_1 + 0x33e) & 0x238) != 0)) {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  else if (((cVar1 == '\x01') || ((cVar1 == '\x03' && (*(char *)(iVar3 + 0xe) == '\x03')))) &&
          ((*(int *)(param_1 + 0x118) != 0 || ((*(ushort *)(param_1 + 0x33e) & 0x238) == 0)))) {
    func_0012C718(iVar3);
  }
  *(ushort *)(param_1 + 0x33e) = *(ushort *)(param_1 + 0x33e) & 0xffdb;
  uVar4 = *(uint *)(param_1 + 0x54);
  if (uVar4 != 0) {
    bVar6 = *(char *)(uVar4 + 0xd) == '\0';
    if (bVar6) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if (!bVar6 || uVar4 != 0) {
      uVar5 = 0;
      goto LAB_0051c4e8;
    }
  }
  uVar5 = 1;
LAB_0051c4e8:
  return func_0014A980(*piVar2,uVar5);
}

