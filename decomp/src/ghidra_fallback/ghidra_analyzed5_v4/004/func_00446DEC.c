#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_001B6D40(int param_1);
extern int func_002C00A8(int param_1);
extern int func_002C0AEC(int param_1);
extern int func_004460EC(int param_1);
extern int func_0058DB74(int param_1);
extern int *DAT_00446e80;

// USA 00446DEC <- EU 00446DC4 (Ghidra, non-matching)
// GLOBAL DAT_00446e80 int *

/* WARNING: Removing unreachable block (ram,0x00446dec) */
/* WARNING: Removing unreachable block (ram,0x00446df8) */

undefined4 func_00446DEC(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  bool bVar5;
  
  func_001B6D40(param_1);
  func_002C00A8(*(int *)(param_1 + 0x14));
  piVar2 = DAT_00446e80;
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + 4) = 0;
  puVar4 = (ushort *)(iVar3 + 0x16);
  *puVar4 = *puVar4 & 0xffbf;
  iVar3 = func_0058DB74(*piVar2);
  if (iVar3 == 0) {
    func_004460EC(param_1);
  }
  iVar3 = *(int *)(param_1 + 0x20c);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar5 && cVar1 == '\x03') {
    func_0012C718(iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x210);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar5 && cVar1 == '\x03') {
    func_0012C718(iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x214);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar5 && cVar1 == '\x03') {
    func_0012C718(iVar3);
  }
  iVar3 = *(int *)(*(int *)(*piVar2 + 0x80) + 0x15c);
  if (iVar3 == 0) {
    return 0;
  }
  return func_002C0AEC(iVar3);
}

