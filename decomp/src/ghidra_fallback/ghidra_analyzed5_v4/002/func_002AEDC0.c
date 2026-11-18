#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_002B05F0(int param_1,int param_2,int param_3);
extern int func_002B1644(int param_1,undefined4 param_2,int param_3);
extern int func_004FBCC0(int *param_1);
extern int DAT_002aee64;

// USA 002AEDC0 <- EU 002AED9C (Ghidra, non-matching)
// GLOBAL DAT_002aee64 int

undefined4 func_002AEDC0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_002aee64;
  piVar3 = *(int **)(param_1 + 0x34);
  cVar1 = (char)piVar3[0x1ff];
  if ((cVar1 == '\0' || cVar1 == '\x04') || cVar1 == '\x05') {
    func_002ADE0C(param_1,param_2);
    *(undefined2 *)(param_1 + 0x1a2) = 0;
    func_004FBCC0(*(int **)(param_1 + 0x34));
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 1000) = *(undefined4 *)(param_1 + 0x90);
    return func_002AD658(param_1,6,param_2 & 0xff,(int)*(char *)(param_1 + 0x110),
                  *(undefined1 *)(param_1 + 0x111),1);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(short *)(iVar2 + (int)piVar3) < 1) {
    return func_002B1644(param_1,0xf,param_2 & 0xff);
  }
  func_004FBCC0(piVar3);
  return func_002B05F0(param_1,6,param_2 & 0xff);
}

