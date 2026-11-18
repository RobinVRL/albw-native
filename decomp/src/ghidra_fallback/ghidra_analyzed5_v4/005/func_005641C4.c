#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);

// USA 005641C4 <- EU 0056419C (Ghidra, non-matching)

undefined8 func_005641C4(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  func_001163A0(param_2,param_1,0x70);
  puVar4 = param_2 + 0x1c;
  uVar2 = param_1[0x4c];
  uVar5 = 0;
  if ((int)(char)uVar2 != 0) {
    do {
      func_0010BB00(puVar4,param_1 + uVar5 * 3 + 0x1c);
      func_001163A0(puVar4 + 2,(uint *)param_1[uVar5 * 3 + 0x1e],param_1[uVar5 * 3 + 0x1d]);
      iVar1 = uVar5 * 3;
      uVar5 = uVar5 + 1;
      puVar4 = (uint *)((int)(puVar4 + 2) + (param_1[iVar1 + 0x1d] + 3 & 0xfffffffc));
    } while (uVar5 < (uint)(int)(char)uVar2);
  }
  if ((uint *)param_1[0x4e] != (uint *)0x0) {
    func_001163A0(puVar4,(uint *)param_1[0x4e],param_1[0x4d]);
    puVar4 = (uint *)((int)puVar4 + param_1[0x4d]);
  }
  uVar3 = 0;
  if ((uint *)param_1[0x4f] != (uint *)0x0) {
    uVar6 = func_001163A0(puVar4,(uint *)param_1[0x4f],0x20);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  return CONCAT44(uVar3,param_1[1]);
}

