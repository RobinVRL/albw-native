#include "ghidra_types.h"

extern int func_00149C2C(byte *param_1,byte *param_2);
extern int func_002554A0(int param_1,int param_2);
extern int func_002D455C(int *param_1,int param_2,byte param_3,int param_4);
extern int *DAT_001dbd50;

// USA 001DBC9C <- EU 001DBC9C (Ghidra, non-matching)
// GLOBAL DAT_001dbd50 int *

undefined4 func_001DBC9C(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*DAT_001dbd50 + 0x25) == '\0') {
    func_002554A0(param_1 + 0x40c,(int)param_2);
    func_00149C2C((byte *)(param_1 + 0x598),param_2);
    iVar1 = (int)(char)param_2[200];
    iVar3 = (int)(char)param_2[0xc9];
    iVar2 = (int)(char)param_2[0xca];
    if (0x19 < iVar1 + 2U) {
      iVar1 = -1;
    }
    if (0x19 < iVar3 + 2U) {
      iVar3 = -1;
    }
    if (0x19 < iVar2 + 2U) {
      iVar2 = -1;
    }
    func_002D455C((int *)(param_1 + 0x694),iVar1,0,1);
    func_002D455C((int *)(param_1 + 0x6ac),iVar3,0,1);
    return func_002D455C((int *)(param_1 + 0x6a0),iVar2,0,1);
  }
  return 0;
}

