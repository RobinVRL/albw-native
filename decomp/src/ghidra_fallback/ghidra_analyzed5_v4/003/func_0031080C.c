#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);

// USA 0031080C <- EU 003107E8 (Ghidra, non-matching)

void func_0031080C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define auStack_48 ((undefined4 *)(albw_frame + 0x8))
  uVar4 = 0;
  piVar5 = param_1 + 0x29f;
  do {
    piVar2 = piVar5;
    if (uVar4 < 0x12) {
      piVar2 = piVar5 + uVar4;
    }
    if (param_1[0x2b1] == *piVar2) {
      piVar2 = piVar5;
      if (uVar4 < 0x12) {
        piVar2 = piVar5 + uVar4;
      }
      iVar1 = *piVar2;
      iVar3 = 1;
    }
    else {
      piVar2 = piVar5;
      if (uVar4 < 0x12) {
        piVar2 = piVar5 + uVar4;
      }
      iVar1 = *piVar2;
      iVar3 = 0;
    }
    func_004CF478(iVar1,iVar3);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x12);
  if (param_1[0x2b1] != 0) {
    func_001119F4(auStack_48,
                  (undefined4 *)
                  (*(int *)(*(int *)(param_1[0x1e8] + 0x24) + 0x14) + param_1[0x2b2] * 0x30));
    iVar1 = param_1[0x2b1];
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar1 + 0x80),auStack_48);
    func_004CEAF0(param_1[0x2b1]);
  }
  return;
}

