#include "ghidra_types.h"

extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E7D8(int param_1,int param_2);
extern int func_0052E8A0(int param_1);
extern int DAT_002903e4;

// USA 00290320 <- EU 00290348 (Ghidra, non-matching)
// GLOBAL DAT_002903e4 int

undefined4 func_00290320(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if ((((*(char *)(iVar2 + 0xb0) == '\0') && (bVar1 = func_0052E8A0(*(int *)(iVar2 + 0x10)), !bVar1)
       ) && ((*(uint *)(DAT_002903e4 + *(short *)(iVar2 + 0x42) * 0x10 + 4) & 0x100) == 0)) &&
     (*(short *)(iVar2 + 0x42) != 0x21)) {
    (**(code **)(**(int **)(iVar2 + 0x48) + 0x20))(*(int **)(iVar2 + 0x48));
    iVar3 = func_0052E7D8(*(int *)(iVar2 + 0x10),param_2);
    func_001DD48C(*(int *)(iVar2 + 0x10),iVar3,1);
    func_002D55D0(*(int *)(iVar2 + 0x48),0x21);
    return 1;
  }
  return 0;
}

