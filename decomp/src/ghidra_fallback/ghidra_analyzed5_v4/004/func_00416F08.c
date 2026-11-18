#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern uint DAT_00416f78;

// USA 00416F08 <- EU 00416EE8 (Ghidra, non-matching)
// GLOBAL DAT_00416f78 uint

void func_00416F08(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  *(char *)(param_1 + 0x7b) = (char)param_2;
  iVar3 = *(int *)(param_1 + 0x130);
  if (iVar3 != 0) {
    uVar1 = (ulonglong)DAT_00416f78;
    do {
      if (param_2 == 0) {
        uVar4 = 0xff;
      }
      else {
        uVar4 = 0;
      }
      if ((uint)*(ushort *)(iVar3 + 0x180) < (uint)*(ushort *)(iVar3 + 0x17e)) {
        bVar2 = *(byte *)(iVar3 + 0x17c);
        lVar5 = func_001104E4(((uint)*(byte *)(iVar3 + 0x17d) - (uint)bVar2) *
                              (uint)*(ushort *)(iVar3 + 0x180),(uint)*(ushort *)(iVar3 + 0x17e));
        bVar2 = (char)lVar5 + bVar2;
      }
      else {
        bVar2 = *(byte *)(iVar3 + 0x17d);
      }
      *(byte *)(iVar3 + 0x17c) = bVar2;
      *(undefined1 *)(iVar3 + 0x17d) = uVar4;
      *(short *)(iVar3 + 0x17e) = (short)(uint)((param_3 + 4) * uVar1 >> 0x22);
      *(undefined2 *)(iVar3 + 0x180) = 0;
      iVar3 = *(int *)(iVar3 + 0x1a4);
    } while (iVar3 != 0);
  }
  return;
}

