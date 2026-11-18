#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002B1740(int *param_1,int param_2,float *param_3);
extern int func_0034CA24(undefined4 *param_1);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);

// USA 0022671C <- EU 0022671C (Ghidra, non-matching)

undefined4 func_0022671C(int *param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  func_0034CA24((undefined4 *)param_1[0x10d]);
  func_0014E2A0((int)param_1,param_1[0x182],param_1 + 0x105,0x1600,0,0);
  piVar3 = (int *)param_1[0x10d];
  sVar2 = 0;
  if (*piVar3 != 0) {
    sVar2 = (short)piVar3[0xc];
  }
  if (*piVar3 == 0 || sVar2 == 0) {
    if (*(char *)((int)param_1 + 0x747) != '\0') {
      *(char *)((int)param_1 + 0x747) = *(char *)((int)param_1 + 0x747) + -1;
    }
    return 0;
  }
  if (*(char *)((int)param_1 + 0x747) != '\0') {
    *(char *)((int)param_1 + 0x747) = *(char *)((int)param_1 + 0x747) + -1;
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x747) = 10;
  cVar1 = *(char *)((int)piVar3 + 0x21);
  uVar5 = (uint)*(ushort *)(piVar3 + 0xc);
  if (cVar1 == '\b' || cVar1 == '\f') {
    uVar5 = 0xc;
    *(undefined1 *)((int)param_1 + 0x747) = 0x3c;
    goto LAB_00226804;
  }
  if ((cVar1 != '\x01') && ((cVar1 != '\x03' || (*(char *)((int)piVar3 + 0x23) != '\x01')))) {
    if (cVar1 == '\r') {
      *(undefined1 *)((int)param_1 + 0x747) = 0x1e;
      goto LAB_00226804;
    }
    if (cVar1 != '\x0e') goto LAB_00226804;
  }
  *(undefined1 *)((int)param_1 + 0x747) = 0x3c;
LAB_00226804:
  iVar4 = param_1[0x1b5];
  param_1[0x1b5] = iVar4 - uVar5;
  if ((*(char *)((int)piVar3 + 0x21) == '\x02') && (0 < (int)(iVar4 - uVar5))) {
    func_0065E774(param_1 + 0x11a,0xd);
  }
  else {
    func_0065E774(param_1 + 0x11a,0xc);
    func_002B1740(param_1,param_1[0x10d],(float *)0x0);
  }
  return 1;
}

