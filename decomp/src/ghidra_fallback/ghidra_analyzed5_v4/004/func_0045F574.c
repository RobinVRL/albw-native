// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_003616D4();
extern int func_005194D8(int param_1);
extern int func_0051C2F0(int param_1);
extern int func_0065CD54(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0045f5e4;
extern int *DAT_0045f5e8;

// USA 0045F574 <- EU 0045F54C (Ghidra, non-matching)
// GLOBAL DAT_0045f5e4 int *
// GLOBAL DAT_0045f5e8 int *

undefined4 func_0045F574(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_r1;
  int in_r2;
  int in_r3;
  int iVar3;
  bool bVar4;
  
  piVar2 = DAT_0045f5e4;
  cVar1 = *(char *)((int)param_1 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)((int)param_1 + 0xe);
  }
  if (bVar4 && cVar1 == '\0') {
    return 0;
  }
  if ((char)param_1[0x1e] != '\x03') {
    iVar3 = *DAT_0045f5e8;
    func_003616D4(iVar3,(int)*(char *)((int)param_1 + 0x11a),(int)(char)param_1[0x46]);
    in_r2 = (int)*(char *)((int)param_1 + 0x119);
    func_003616D4(iVar3,(int)*(char *)((int)param_1 + 0x11b),in_r2);
    func_0065CD54((undefined4 *)(*(int *)(*piVar2 + 0x130) + 0xc),2);
    func_005194D8(*piVar2);
  }
  func_0012C790((int)param_1);
  func_0051C2F0(*piVar2);
  return func_001B6B38(param_1,extraout_r1,in_r2,in_r3);
}

