#include "ghidra_types.h"

extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int DAT_00324a70;
extern int DAT_00324a74;

// USA 00324A30 <- EU 00324A0C (Ghidra, non-matching)
// GLOBAL DAT_00324a70 int
// GLOBAL DAT_00324a74 int

int func_00324A30(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_00324a70;
  *piVar1 = DAT_00324a70;
  piVar1[200] = iVar2 + 0x5c;
  piVar1[0x103] = 0;
  iVar2 = func_004EE484(piVar1 + 0x104);
  *(undefined1 *)(iVar2 + 100) = 0;
  local_10 = *(uint *)(iVar2 + -0x144);
  func_004EDEA0(iVar2,&local_10);
  *(undefined2 *)(DAT_00324a74 + iVar2 + -0x410) = *(undefined2 *)(iVar2 + -0x3bc);
  *(undefined1 *)(iVar2 + 0x21) = 0;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  *(undefined2 *)(iVar2 + 0x30) = 0;
  return iVar2 + -0x410;
}

