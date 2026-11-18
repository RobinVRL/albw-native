#include "ghidra_types.h"

extern int func_001150B0(int param_1,undefined4 *param_2);
extern int func_0026DEB0(int param_1,uint param_2);
extern int func_002FE918(int param_1);
extern int func_00403F18(int *param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_005FFDC0(void);
extern int DAT_0012ed00;

// USA 0012EC04 <- EU 0012EC04 (Ghidra, non-matching)
// GLOBAL DAT_0012ed00 int

undefined4 func_0012EC04(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  func_005FFDC0();
  puVar3 = (undefined4 *)(param_1 + 0x169c);
  iVar1 = param_1 + 0x6b4;
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x16dc);
  }
  func_001150B0(iVar1,puVar3);
  uVar2 = func_0041F7CC();
  uVar2 = (**(code **)(*(int *)(param_1 + 0x20) + 0x20))(param_1 + 0x20,uVar2,iVar1,0);
  func_0041F7DC(uVar2);
  func_002FE918(*(int *)(param_1 + 0x1824));
  uVar2 = func_0041F7CC();
  uVar2 = func_00403F18((int *)(param_1 + 0x20),uVar2,iVar1,0);
  func_0041F7DC(uVar2);
  func_0026DEB0(*(int *)(DAT_0012ed00 + param_1),(uint)(param_2 == 0));
  puVar3 = (undefined4 *)(param_1 + 0x171c);
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x175c);
  }
  func_001150B0(iVar1,puVar3);
  uVar2 = func_0041F7CC();
  uVar2 = (**(code **)(*(int *)(param_1 + 0x20) + 0x20))(param_1 + 0x20,uVar2,iVar1,0);
  func_0041F7DC(uVar2);
  func_002FE918(*(int *)(param_1 + 0x1828));
  uVar2 = func_0041F7CC();
  uVar2 = func_00403F18((int *)(param_1 + 0x20),uVar2,iVar1,0);
  return func_0041F7DC(uVar2);
}

