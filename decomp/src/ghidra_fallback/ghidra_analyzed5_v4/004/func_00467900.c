#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern int func_002BECAC(int param_1,int param_2);
extern int func_002BF2BC(int param_1);

// USA 00467900 <- EU 004678D8 (Ghidra, non-matching)

void func_00467900(int param_1)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0x11c);
  if (*(byte *)(param_1 + 0x128) < 5) {
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 4;
    *(uint *)(*(int *)(param_1 + 0x120) + 0x18) = *(uint *)(*(int *)(param_1 + 0x120) + 0x18) | 4;
    iVar2 = *(int *)(*(int *)(param_1 + 0x120) + 0x14);
    if (iVar2 != 0) {
      puVar3 = (ushort *)(iVar2 + 0x16);
      *puVar3 = *puVar3 & 0xffbf;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x11c) + 0x14);
    if (iVar2 != 0) {
      puVar3 = (ushort *)(iVar2 + 0x16);
      *puVar3 = *puVar3 & 0xffbf;
      return;
    }
  }
  else {
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffb;
    *(uint *)(*(int *)(param_1 + 0x120) + 0x18) =
         *(uint *)(*(int *)(param_1 + 0x120) + 0x18) & 0xfffffffb;
    iVar2 = *(int *)(*(int *)(param_1 + 0x120) + 0x14);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x44c) == '\0')) {
      puVar3 = (ushort *)(iVar2 + 0x16);
      *puVar3 = *puVar3 | 0x40;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x11c) + 0x14);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x44c) == '\0')) {
      puVar3 = (ushort *)(iVar2 + 0x16);
      *puVar3 = *puVar3 | 0x40;
    }
    iVar2 = *(int *)(param_1 + 0x11c);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x126) < *(char *)(param_1 + 0x124)) {
        func_002BECAC(iVar2,(uint)(*(char *)(param_1 + 0x44c) == '\0'));
        iVar2 = iVar2 + 0x6c;
      }
      else {
        func_002BF2BC(iVar2);
        iVar2 = iVar2 + 0x78;
      }
      func_00231524(iVar2);
      iVar2 = *(int *)(param_1 + 0x11c);
      cVar1 = *(char *)(iVar2 + 0xd);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(iVar2 + 0xe);
      }
      if (bVar4 && cVar1 == '\0') {
        *(undefined1 *)(iVar2 + 0xe) = 1;
      }
    }
    iVar2 = *(int *)(param_1 + 0x120);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x125) < *(char *)(param_1 + 0x127)) {
        func_002BECAC(iVar2,(uint)(*(char *)(param_1 + 0x44c) == '\0'));
        iVar2 = iVar2 + 0x6c;
      }
      else {
        func_002BF2BC(iVar2);
        iVar2 = iVar2 + 0x78;
      }
      func_00231524(iVar2);
      iVar2 = *(int *)(param_1 + 0x120);
      cVar1 = *(char *)(iVar2 + 0xd);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(iVar2 + 0xe);
      }
      if (bVar4 && cVar1 == '\0') {
        *(undefined1 *)(iVar2 + 0xe) = 1;
      }
    }
  }
  return;
}

