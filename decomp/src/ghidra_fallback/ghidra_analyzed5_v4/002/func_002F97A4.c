#include "ghidra_types.h"

extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB370(int param_1,uint param_2,int param_3);
extern int DAT_002f97c4;

// USA 002F97A4 <- EU 002F9780 (Ghidra, non-matching)
// GLOBAL DAT_002f97c4 int

void func_002F97A4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  func_004FB344(param_1,param_2);
  iVar1 = DAT_002f97c4;
  uVar2 = 0;
  do {
    func_004FACA4(param_1,uVar2,(int *)(iVar1 + uVar2 * 8));
    func_004FB370(param_1,uVar2,*(int *)(param_1 + 0x40c));
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xd);
  return;
}

