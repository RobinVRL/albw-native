#include "ghidra_types.h"

extern int func_00149C2C(byte *param_1,byte *param_2);
extern int func_002554A0(int param_1,int param_2);
extern int func_002D455C(int *param_1,int param_2,byte param_3,int param_4);
extern int *DAT_001dbd50;

// USA 001DBC94 <- EU 001DBC94 (Ghidra, non-matching)
// GLOBAL DAT_001dbd50 int *

undefined4 func_001DBC94(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(char *)(*DAT_001dbd50 + 0x25) == '\0') {
    func_002554A0(iVar1 + 0x40c,param_2);
    func_00149C2C((byte *)(iVar1 + 0x598),(byte *)param_2);
    iVar2 = (int)*(char *)(param_2 + 200);
    iVar4 = (int)*(char *)(param_2 + 0xc9);
    iVar3 = (int)*(char *)(param_2 + 0xca);
    if (0x19 < iVar2 + 2U) {
      iVar2 = -1;
    }
    if (0x19 < iVar4 + 2U) {
      iVar4 = -1;
    }
    if (0x19 < iVar3 + 2U) {
      iVar3 = -1;
    }
    func_002D455C((int *)(iVar1 + 0x694),iVar2,0,1);
    func_002D455C((int *)(iVar1 + 0x6ac),iVar4,0,1);
    return func_002D455C((int *)(iVar1 + 0x6a0),iVar3,0,1);
  }
  return 0;
}

