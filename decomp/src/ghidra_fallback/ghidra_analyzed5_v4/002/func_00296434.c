#include "ghidra_types.h"

extern int func_0010BC94(undefined4 *param_1,undefined1 param_2);
extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_004EB970(int param_1,float fparam_0);
extern int func_005568B0(int param_1);
extern int *DAT_002964bc;
extern float DAT_002964c0;
extern float DAT_002964c4;
extern int *DAT_002964c8;

// USA 00296434 <- EU 0029645C (Ghidra, non-matching)
// GLOBAL DAT_002964bc int *
// GLOBAL DAT_002964c0 float
// GLOBAL DAT_002964c4 float
// GLOBAL DAT_002964c8 int *

undefined4 func_00296434(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = func_005568B0(*DAT_002964bc);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0x178) < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x180) + 4);
  }
  func_0010C7F8(iVar2,0x3c,DAT_002964c0);
  func_0010BC94((undefined4 *)(param_1 + 0xc4),0);
  return func_004EB970(*DAT_002964c8,DAT_002964c4);
}

