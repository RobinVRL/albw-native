#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00652F28(int param_1,undefined *param_2,undefined4 param_3,int param_4);
extern int func_00652F8C(int param_1);
extern int func_00652FBC(int param_1);
extern int func_006530A4(int param_1,int param_2,undefined4 param_3);
extern int *DAT_00312184;
extern int DAT_00312188;

// USA 00312018 <- EU 00311FF4 (Ghidra, non-matching)
// GLOBAL DAT_00312184 int *
// GLOBAL DAT_00312188 int

bool func_00312018(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0xa37) = 1;
    bVar1 = func_00652F8C(param_1);
    return bVar1;
  case 1:
  case 2:
  case 10:
  case 0xb:
    break;
  case 3:
    func_00652F28(param_1,(undefined *)(uint)*(byte *)(param_1 + 0x9d0),param_3,param_4);
    break;
  case 4:
    iVar2 = func_00652FBC(param_1);
    if (iVar2 == 0) {
      return false;
    }
    break;
  case 5:
  case 8:
    if ((*DAT_00312184 != 0) &&
       (iVar2 = func_0052FBA0(*DAT_00312184 + 0x3dbbc,*(uint *)(param_1 + 0x9bc)), iVar2 != 0)) {
      if (param_2 == 5) {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
      *(undefined1 *)(iVar2 + 0x4cd) = uVar3;
    }
    break;
  case 6:
    uVar3 = 1;
    goto LAB_003120d8;
  case 7:
    uVar3 = 0;
LAB_003120d8:
    *(undefined1 *)(param_1 + 0x9ba) = uVar3;
    break;
  case 9:
    *(undefined1 *)(param_1 + 0xa37) = 0;
    bVar1 = func_00652F8C(param_1);
    return bVar1;
  case 0xc:
    func_006530A4(param_1,(int)*(char *)(DAT_00312188 + param_1),param_3);
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x9d0) == '\b') {
      *(undefined2 *)(param_1 + 0x9ce) = 10;
      *(undefined2 *)(param_1 + 0x9b6) = 10;
    }
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x9d0) == '\x02' || *(char *)(param_1 + 0x9d0) == '\a') {
      *(undefined2 *)(param_1 + 0x9ce) = 0x14;
      *(undefined2 *)(param_1 + 0x9b6) = 0x14;
    }
    break;
  case 0xf:
    if ((*DAT_00312184 != 0) &&
       (iVar2 = func_0052FBA0(*DAT_00312184 + 0x3dbbc,*(uint *)(param_1 + 0x9bc)), iVar2 != 0)) {
      *(undefined1 *)(iVar2 + 0x4cd) = 1;
    }
    break;
  default:
    return false;
  }
  return true;
}

