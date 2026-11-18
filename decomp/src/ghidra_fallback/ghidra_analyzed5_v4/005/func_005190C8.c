#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00444180(int *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00520B48(int param_1);
extern int *DAT_00519198;
extern int *DAT_0051919c;
extern int *DAT_005191a0;

// USA 005190C8 <- EU 005190A0 (Ghidra, non-matching)
// GLOBAL DAT_00519198 int *
// GLOBAL DAT_0051919c int *
// GLOBAL DAT_005191a0 int *

undefined4 func_005190C8(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  code *in_r2;
  int in_r3;
  bool bVar4;
  
  if (((*(int *)(*DAT_00519198 + 0x44) != 0) || (iVar2 = func_00520B48(*DAT_0051919c), iVar2 != 0))
     || (*(char *)(*DAT_005191a0 + 0x22) != '\0')) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x58) == 3) {
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0xd);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(iVar2 + 0xe);
      }
      if (!bVar4 || cVar1 != '\0') {
        return 0;
      }
    }
    *(undefined1 *)(iVar2 + 0xe) = 1;
    piVar3 = *(int **)(param_1 + 0xf8);
  }
  else {
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0xd);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(iVar2 + 0xe);
      }
      if (!bVar4 || cVar1 != '\0') {
        func_0012C790(iVar2);
        func_001B6B38(*(int **)(param_1 + 0x54),extraout_r1,in_r2,in_r3);
      }
    }
    in_r2 = *(code **)(*(int *)(param_1 + 0x48) + 8);
    iVar2 = (*in_r2)(param_1 + 0x48,3);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0xe) = 1;
    }
    piVar3 = *(int **)(param_1 + 0xf8);
  }
  if (piVar3 != (int *)0x0) {
    func_00444180(piVar3,1,in_r2,in_r3);
  }
  return 1;
}

