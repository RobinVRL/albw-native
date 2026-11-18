#include "ghidra_types.h"

extern int func_0011E770(int param_1,int param_2);
extern int func_0011EAA4(int param_1,int param_2);
extern int func_0030BE08(int param_1,uint param_2,uint param_3);
extern uint DAT_0030bde0;

// USA 0030BCD4 <- EU 0030BCB0 (Ghidra, non-matching)
// GLOBAL DAT_0030bde0 uint

undefined4 func_0030BCD4(int *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = (char *)param_1[0x3c];
  if (*pcVar3 == '\x01') {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  else if (*pcVar3 == '\x05') {
    return func_0030BE08((int)param_1,(uint)*(ushort *)(pcVar3 + 10),(uint)*(ushort *)(pcVar3 + 8));
  }
  uVar2 = DAT_0030bde0;
  pcVar3 = (char *)param_1[0x3c];
  cVar1 = *pcVar3;
  if (cVar1 != '\x01') {
    uVar5 = DAT_0030bde0;
    if (cVar1 == '\x02') {
      if (param_2 < *(ushort *)(pcVar3 + 0xc)) {
        if ((uint)*(ushort *)((int)param_1 + 0xee) < (uint)param_1[2]) {
          iVar4 = func_0011E770(param_1[1],(uint)*(ushort *)((int)param_1 + 0xee));
        }
        else {
          iVar4 = 0;
        }
        uVar5 = (uint)*(ushort *)(iVar4 + param_2 * 2);
      }
      goto LAB_0030bd60;
    }
    if (cVar1 != '\x03' && cVar1 != '\x04') goto LAB_0030bd60;
  }
  uVar5 = (uint)*(ushort *)(pcVar3 + 8);
LAB_0030bd60:
  *(short *)((int)param_1 + 0xee) = (short)uVar5;
  if (uVar5 != uVar2) {
    if (uVar5 < (uint)param_1[2]) {
      iVar4 = func_0011EAA4(param_1[1],uVar5);
    }
    else {
      iVar4 = 0;
    }
    param_1[0x3c] = iVar4;
  }
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar4 != 0) {
    return 0;
  }
  if ((*(ushort *)((int)param_1 + 0xee) != uVar2) && (*(char *)param_1[0x3c] == '\x01')) {
    (**(code **)(*param_1 + 0x34))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0030bdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x24))(param_1);
}

