#include "ghidra_types.h"

extern int func_00322274(int param_1,int param_2);
extern int func_003223B8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_00379AEC(int param_1,int param_2);
extern int func_00379B4C(int param_1,undefined4 param_2,int param_3);
extern int func_00409100(int *param_1,int *param_2,int param_3,uint *param_4);
extern int func_00588174(int param_1,uint param_2);
extern int *DAT_001e01a4;

// USA 001E0090 <- EU 001E0090 (Ghidra, non-matching)
// GLOBAL DAT_001e01a4 int *

bool func_001E0090(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0xe0) == param_3) {
    *(undefined1 *)(param_1 + 0x111) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x111) = 1;
  }
  *(int *)(param_1 + 0xe0) = param_3;
  if (*(int *)(param_1 + 0xe4) == -1) {
    *(int *)(param_1 + 0xe4) = param_3;
  }
  uVar6 = 0;
  cVar2 = func_00409100(param_2,(int *)(param_1 + 0x20),param_3,(uint *)0x0);
  *(char *)(param_1 + 0x30) = cVar2;
  *(int **)(param_1 + 0x24) = (int *)(param_1 + 0x20);
  piVar1 = DAT_001e01a4;
  if (*(char *)(param_1 + 0x108) != '\0') goto LAB_001e0168;
  iVar3 = func_00379AEC(*DAT_001e01a4,param_3);
  if (iVar3 == 0) {
    uVar4 = func_00588174(*piVar1,param_3);
    iVar3 = param_1;
    if ((uVar4 & 0x40) == 0) {
      if (((uVar4 & 0x20) != 0) && (iVar5 = func_00379B4C(*piVar1,param_3,param_1), iVar5 != 0)) {
        uVar4 = 4;
        goto LAB_001e0158;
      }
    }
    else {
      iVar5 = func_00379B4C(*piVar1,param_3,param_1);
      if (iVar5 != 0) {
        uVar4 = 0x10;
LAB_001e0158:
        func_003223B8(iVar5,uVar4,iVar3,uVar6);
      }
    }
  }
  else {
    func_00322274(iVar3,param_1);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x108) = 1;
  *(undefined1 *)(param_1 + 0x10d) = 1;
LAB_001e0168:
  return *(char *)(param_1 + 0x30) == '\0';
}

