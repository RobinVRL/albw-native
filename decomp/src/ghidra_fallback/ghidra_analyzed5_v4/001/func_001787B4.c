#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_00178DB0(int param_1);

// USA 001787B4 <- EU 001787B4 (Ghidra, non-matching)

undefined4 func_001787B4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x18) <= (int)(uint)*(ushort *)(param_1 + 6)) {
    if (*(short *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    return 0;
  }
  puVar4 = (uint *)(*(int *)(param_1 + 8) + param_2);
  func_001164F4(puVar4,(uint)*(ushort *)(param_1 + 4) - param_2);
  uVar1 = (uint)*(ushort *)(param_1 + 6);
  uVar3 = *(int *)(param_1 + 0x18) - uVar1;
  if (((int)uVar3 < 0x200) || (*(char *)(param_1 + 0x2e) == '\x01')) {
    *(short *)(param_1 + 6) = (short)*(int *)(param_1 + 0x18);
    *(short *)(param_1 + 0x20) = (short)uVar3 + (short)param_2;
    func_0010E3C4(puVar4,(uint *)(*(int *)(param_1 + 0x10) + uVar1),uVar3);
  }
  else {
    uVar3 = 0x200;
    if ((uint)*(ushort *)(param_1 + 4) <= param_2 + 0x200U) {
      if (param_2 + 0x100U < (uint)*(ushort *)(param_1 + 4)) {
        uVar3 = 0x100;
      }
      else {
        uVar3 = 0x80;
      }
    }
    uVar2 = uVar1 + uVar3;
    if (uVar1 <= uVar2) {
      do {
        if (*(short *)(*(int *)(param_1 + 0x10) + (uVar2 & 0xfffffffe)) == 10) {
          uVar3 = (uVar2 - uVar1) + 2;
          break;
        }
        uVar2 = uVar2 - 2;
      } while (uVar1 <= uVar2);
    }
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) + (short)uVar3;
    *(short *)(param_1 + 0x20) = (short)uVar3 + (short)param_2;
    func_0010E3C4(puVar4,(uint *)(*(int *)(param_1 + 0x10) + uVar1),uVar3);
  }
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return func_00178DB0(param_1);
}

