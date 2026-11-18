#include "ghidra_types.h"

extern int func_00557568(int param_1);
extern int func_005576F0(int param_1);
extern int func_0066E304(undefined4 *param_1,undefined1 param_2);

// USA 00470980 <- EU 00470958 (Ghidra, non-matching)

undefined4 func_00470980(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(ushort *)(*(int *)(param_1 + 0x6c) + 10);
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x6c) + 8);
  uVar6 = uVar3 & 0xff;
  uVar7 = uVar2 & 0xff;
  iVar4 = func_005576F0(*(int *)(param_1 + 0xe0));
  if ((iVar4 == 0) || ((*(char *)(param_1 + 0xed) != '\x01' && uVar6 != 1) && (uVar2 & 0xff) != 0))
  {
    bVar1 = *(byte *)(param_1 + 0xec);
    uVar5 = (uint)bVar1;
    if (uVar6 == bVar1 >> 6) {
      if ((uVar3 & 0xff) == 0) {
        uVar5 = uVar5 & 3;
      }
      else {
        uVar5 = (uVar5 << 0x1c) >> 0x1e;
      }
      if (uVar5 == uVar7) {
        uVar3 = func_00557568(*(int *)(param_1 + 0xe0));
        if (uVar3 == 0) {
          return 0;
        }
      }
      else {
        if (*(char *)(param_1 + 0xed) == '\0' && (uVar3 & 0xff) == 0) {
          iVar4 = *(int *)(param_1 + 0x6c);
          *(undefined2 *)(iVar4 + 8) = 0;
          *(short *)(iVar4 + 10) = (short)uVar6;
          return 0;
        }
        uVar6 = uVar2 & 3;
        if ((uVar3 & 0xff) == 0) {
          *(byte *)(param_1 + 0xec) = bVar1 & 0xfc | (byte)uVar6;
        }
        else {
          *(byte *)(param_1 + 0xec) = bVar1 & 0xf3 | (byte)(uVar6 << 2);
        }
      }
    }
    else {
      uVar5 = uVar5 & 0xffffff3f | (uVar3 & 3) << 6;
      *(char *)(param_1 + 0xec) = (char)uVar5;
      if ((uVar3 & 0xff) != 0) {
        uVar5 = uVar5 >> 2;
      }
      if (uVar7 != (uVar5 & 3)) {
        iVar4 = *(int *)(param_1 + 0x6c);
        *(short *)(iVar4 + 8) = (short)(uVar5 & 3);
        *(short *)(iVar4 + 10) = (short)uVar6;
        return func_0066E304((undefined4 *)(param_1 + 0x74),2);
      }
    }
  }
  return func_0066E304((undefined4 *)(param_1 + 0x74),1);
}

