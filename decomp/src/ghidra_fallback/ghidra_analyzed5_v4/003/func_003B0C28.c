#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003AF388(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058A7D4(void);
extern int *DAT_003b0cdc;

// USA 003B0C28 <- EU 003B0C04 (Ghidra, non-matching)
// GLOBAL DAT_003b0cdc int *

void func_003B0C28(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  *(short *)(param_1 + 0x5e) = (short)((ulonglong)uVar2 * 0x3d >> 0x20) + 0x3c;
  if (('\x01' < *(char *)(*(int *)(param_1 + 0x48) + 0xee0)) &&
     (iVar3 = func_003AF388(*(int *)(param_1 + 0x48) + 0xed4), iVar3 != 0)) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (*(int *)(iVar3 + 0xf1c) < 1) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(iVar3 + 0xf1c) == 0) {
        puVar1 = (uint *)0x0;
      }
      else {
        iVar4 = *(int *)(iVar3 + 0xf18);
        if (*(int *)(iVar3 + 0xf14) <= iVar4) {
          iVar4 = iVar4 - *(int *)(iVar3 + 0xf14);
        }
        puVar1 = (uint *)(*(int *)(iVar3 + 0xf10) + iVar4 * 4);
      }
      uVar2 = *puVar1;
    }
    iVar3 = func_0052FBA0(*DAT_003b0cdc + 0x3dbbc,uVar2);
    if (iVar3 != 0) {
      puVar1 = (uint *)func_0058A7D4();
      uVar2 = func_00111A64(puVar1);
      *(short *)(param_1 + 0x5e) = (short)((ulonglong)uVar2 * 0x3d >> 0x20) + 10;
    }
  }
  return;
}

