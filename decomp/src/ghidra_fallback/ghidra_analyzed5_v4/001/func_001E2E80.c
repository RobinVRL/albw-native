#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_001e2f18;
extern int DAT_001e2f1c;
extern int DAT_001e2f20;

// USA 001E2E80 <- EU 001E2E80 (Ghidra, non-matching)
// GLOBAL DAT_001e2f18 int
// GLOBAL DAT_001e2f1c int
// GLOBAL DAT_001e2f20 int

undefined4 func_001E2E80(int *param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  iVar1 = DAT_001e2f18;
  param_1[200] = DAT_001e2f18 + 0x98;
  *param_1 = iVar1;
  uVar2 = (ushort)*(byte *)(param_1 + 0x1e3);
  bVar4 = uVar2 == 1;
  if (bVar4) {
    uVar2 = *(ushort *)(param_1 + 0xb);
  }
  if (bVar4 && uVar2 == 0) {
    func_00588C14((int)param_1,1,1);
  }
  puVar3 = func_0035D6D0(param_1 + 0x2a4);
  puVar3 = func_00503368(puVar3 + -0xb9);
  iVar1 = DAT_001e2f1c;
  puVar3[-0x123] = DAT_001e2f1c + 0x98;
  puVar3[-0x1eb] = iVar1;
  puVar3 = func_0035D6D0(puVar3 + -0x14);
  puVar3 = func_00503368(puVar3 + -0xb9);
  iVar1 = DAT_001e2f20;
  puVar3[-0x56] = DAT_001e2f20 + 0x5c;
  puVar3[-0x11e] = iVar1;
  puVar3 = func_004EE540(puVar3 + -0x1a);
  return func_001510A4(puVar3 + -0x104);
}

