#include "ghidra_types.h"

extern int func_0010BC94(undefined4 *param_1,undefined1 param_2);
extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_0029536C(int param_1);
extern uint DAT_00296d24;

// USA 00296C48 <- EU 00296C70 (Ghidra, non-matching)
// GLOBAL DAT_00296d24 uint

void func_00296C48(int param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = (ulonglong)DAT_00296d24;
  do {
    uVar1 = uVar3 & 0xff;
    if (uVar1 < 4) {
      if (uVar1 < *(uint *)(param_1 + 0x178)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_0010C7F8(iVar2,param_2,ALBW_AS_F32(uVar4));
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  uVar3 = 0;
  do {
    uVar1 = uVar3 & 0xff;
    if (uVar1 < 3) {
      if (uVar1 < *(uint *)(param_1 + 0x164)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x16c) + uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_0010C7F8(iVar2,param_2,ALBW_AS_F32(uVar4));
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  func_0029536C(param_1);
  func_0010BC94((undefined4 *)(param_1 + 0xc4),0);
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}

