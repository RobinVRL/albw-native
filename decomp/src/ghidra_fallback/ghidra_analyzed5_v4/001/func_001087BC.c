#include "ghidra_types.h"

extern int func_0010ACB8(undefined4 *param_1,uint param_2);
extern int func_0010AD10(int *param_1,int param_2);
extern int func_0010AD78(undefined4 *param_1,undefined2 param_2);
extern int func_0010C380(undefined4 *param_1,int param_2);
extern char *DAT_00108870;
extern int *DAT_00108874;

// USA 001087BC <- EU 001087BC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_00108870 char *
// GLOBAL DAT_00108874 int *

undefined4 func_001087BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = param_2;
  param_1[8] = param_5 & 0xff;
  param_1[6] = param_3;
  param_1[7] = param_4;
  func_0010AD78(param_1 + 3,4);
  pcVar1 = DAT_00108870;
  if (*DAT_00108870 == '\0') {
    func_0010AD78(DAT_00108874,4);
    *pcVar1 = '\x01';
  }
  piVar4 = DAT_00108874;
  iVar3 = 0;
  do {
    iVar3 = func_0010C380(piVar4,iVar3);
    if (iVar3 == 0) goto LAB_00108860;
  } while ((param_1 < *(undefined4 **)(iVar3 + 0x18)) || (*(undefined4 **)(iVar3 + 0x1c) <= param_1)
          );
  iVar2 = func_0010ACB8((undefined4 *)(iVar3 + 0xc),(uint)param_1);
  if (iVar2 == 0) {
    iVar2 = iVar3;
  }
  piVar4 = (int *)(iVar2 + 0xc);
LAB_00108860:
  return func_0010AD10(piVar4,(int)param_1);
}

