#include "ghidra_types.h"

extern int func_003DD93C(void);
extern int func_003DEE98(int param_1,int param_2,ushort *param_3);
extern int DAT_003ddb24;

// USA 003DDA44 <- EU 003DDA24 (Ghidra, non-matching)
// GLOBAL DAT_003ddb24 int

undefined4 func_003DDA44(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  
  *(bool *)(param_1 + param_2 + 6) = param_3[1] != 0;
  iVar1 = func_003DD93C();
  uVar3 = *param_3;
  bVar4 = (uVar3 & 1) != 0;
  if (bVar4) {
    uVar3 = param_3[1];
  }
  iVar1 = iVar1 + param_2 * 0x34;
  if (bVar4) {
    *(ushort *)(iVar1 + 0x2a) = uVar3;
  }
  if ((*param_3 & 4) != 0) {
    *(ushort *)(iVar1 + 0x2e) = param_3[3];
    *(ushort *)(iVar1 + 0x44) = param_3[0xe];
    *(ushort *)(iVar1 + 0x46) = param_3[0xf];
    *(ushort *)(iVar1 + 0x48) = param_3[0x10];
    *(ushort *)(iVar1 + 0x4a) = param_3[0x11];
    *(ushort *)(iVar1 + 0x4c) = param_3[0x12];
    *(ushort *)(iVar1 + 0x4e) = param_3[0x13];
    *(ushort *)(iVar1 + 0x50) = param_3[0x14];
    *(ushort *)(iVar1 + 0x52) = param_3[0x15];
    *(ushort *)(iVar1 + 0x54) = param_3[0x16];
    *(ushort *)(iVar1 + 0x56) = param_3[0x17];
    *(ushort *)(iVar1 + 0x58) = param_3[0x18];
    *(ushort *)(iVar1 + 0x5a) = param_3[0x19];
  }
  if ((*param_3 & 2) != 0) {
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_3 + 10);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_3 + 0xc);
  }
  uVar2 = func_003DEE98(DAT_003ddb24,param_2,param_3);
  return uVar2;
}

