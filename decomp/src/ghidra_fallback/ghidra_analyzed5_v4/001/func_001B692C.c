#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_0038A674(int *param_1,undefined4 param_2,uint param_3);

// USA 001B692C <- EU 001B692C (Ghidra, non-matching)

undefined4 func_001B692C(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = (**(code **)(*param_1 + 0x48))(param_1);
  if ((int)uVar8 != 0) {
    func_0038A674(param_1,(int)((ulonglong)uVar8 >> 0x20),param_3);
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  if (param_1[0x62] < 0x29) {
    bVar3 = *(byte *)(param_1 + 0x65) & 0xfe;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x65) | 1;
  }
  *(byte *)(param_1 + 0x65) = bVar3;
  piVar1 = (int *)param_1[9];
  iVar6 = param_1[0x62];
  piVar5 = piVar1 + param_1[7];
  for (; piVar1 != piVar5; piVar1 = piVar1 + 1) {
    *(undefined1 *)(*piVar1 + 0xe) = 1;
    piVar4 = *(int **)(*piVar1 + 0x1c);
    if (iVar6 < 5) {
      if (((piVar4 != (int *)0x0) && (iVar7 = *(int *)(*piVar4 + 0x10), iVar7 != 0)) &&
         ((*(byte *)(iVar7 + 0x44) & 1) != 0)) {
        *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
      }
    }
    else if (((piVar4 != (int *)0x0) && (iVar7 = *(int *)(*piVar4 + 0x10), iVar7 != 0)) &&
            ((*(byte *)(iVar7 + 0x44) & 1) == 0)) {
      *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe | 1;
      *(byte *)(piVar4 + 0x1c) = *(byte *)(piVar4 + 0x1c) | 2;
    }
    iVar6 = iVar6 + -4;
  }
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) & 0xfd;
  *(undefined1 *)(param_1[0x1d] + 0xe) = 1;
  piVar1 = (int *)param_1[0x1d];
  if (*(char *)((int)piVar1 + 0xe) == '\x01') {
    if (*(char *)((int)piVar1 + 0xd) != '\x01') {
      (**(code **)(*piVar1 + 0x14))(piVar1);
    }
    func_00231340((short *)(piVar1 + 8));
    *(undefined1 *)((int)piVar1 + 0xe) = 3;
    (**(code **)(*piVar1 + 0x24))(piVar1);
    *(undefined1 *)((int)piVar1 + 0xd) = *(undefined1 *)((int)piVar1 + 0xe);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

