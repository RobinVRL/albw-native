#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010A98C(uint param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int DAT_003e3a84;
extern uint DAT_003e3a88;
extern int DAT_003e3a8c;
extern int DAT_003e3a90;

// USA 003E395C <- EU 003E393C (Ghidra, non-matching)
// GLOBAL DAT_003e3a84 int
// GLOBAL DAT_003e3a88 uint
// GLOBAL DAT_003e3a8c int
// GLOBAL DAT_003e3a90 int

void func_003E395C(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint in_r12;
  
  iVar6 = DAT_003e3a90;
  iVar5 = DAT_003e3a8c;
  uVar4 = DAT_003e3a88;
  iVar3 = DAT_003e3a84;
  while( true ) {
    software_interrupt(0x24);
    if (param_1[0xb] < 0) {
      func_0010A98C(param_1[0xb]);
    }
    software_interrupt(0x19);
    if (param_1[0xb] < 0) {
      func_0010A98C(param_1[0xb]);
    }
    if (*(char *)((int)param_1 + 0x77) != '\0') break;
    while( true ) {
      pbVar7 = (byte *)param_1[0xd];
      iVar9 = iVar3;
      if ((pbVar7 != (byte *)0x0) && (iVar9 = iVar6, pbVar7[1] != 0)) {
        in_r12 = (uint)pbVar7[*pbVar7 + 0xc];
        do {
          puVar11 = (uint *)param_1[0xd];
          uVar10 = *puVar11;
          uVar8 = (uVar10 & 0xff) + 1;
          bVar2 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar2);
        *puVar11 = uVar8 + (uint)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x24) * -0x34 & 0xff |
                   uVar10 & 0xffff0000 |
                   ((((uVar10 & 0xffffff00) << 0x10) >> 0x18) - 1) * 0x100 & 0xff00;
        iVar9 = 0;
        if (*(char *)(param_1[0xd] + 2) == '\x01') {
          iVar9 = iVar5;
        }
      }
      if (iVar9 == iVar6) break;
      uVar8 = in_r12 & 0xff;
      func_0010C0C0(param_1);
      if ((code *)param_1[uVar8 + 4] != (code *)0x0) {
        (*(code *)param_1[uVar8 + 4])();
      }
      cVar1 = *(char *)((int)param_1 + 0x76);
      *(undefined1 *)((int)param_1 + 0x76) = 2;
      if (cVar1 == '\x01') {
        func_001080D4(param_1 + 0x19);
      }
      func_0010C160(param_1);
    }
  }
  return;
}

