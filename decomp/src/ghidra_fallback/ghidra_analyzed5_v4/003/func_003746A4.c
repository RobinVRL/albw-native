#include "ghidra_types.h"

extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00653CC8(int param_1,undefined *param_2,undefined4 param_3,int param_4);
extern int func_00653D2C(int param_1);
extern int func_00653D5C(int param_1);
extern int *DAT_003747e0;
extern int *DAT_003747e4;
extern undefined4 *DAT_003747e8;
extern int DAT_003747ec;

// USA 003746A4 <- EU 00374680 (Ghidra, non-matching)
// GLOBAL DAT_003747e0 int *
// GLOBAL DAT_003747e4 int *
// GLOBAL DAT_003747e8 undefined4 *
// GLOBAL DAT_003747ec int

bool func_003746A4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_003747e0;
  switch(param_2) {
  case 0:
    func_00653CC8(param_1,(undefined *)(uint)*(byte *)(param_1 + 0x9d0),param_3,param_4);
    return true;
  case 1:
    if (*(char *)(param_1 + 0x9d0) != '\x02') {
      bVar2 = func_00653D2C(param_1);
      puVar1 = DAT_003747e8;
      if (((bVar2) && (*(char *)(param_1 + 0x9d0) == '\x01')) && (iVar4 = *piVar3, iVar4 != 0)) {
        piVar3 = (int *)func_005841A8(iVar4,*DAT_003747e8,*(int **)(DAT_003747ec + iVar4));
        if (*(int **)(iVar4 + 0x3dbc8) != piVar3) {
          do {
            if (*piVar3 != 0) {
              func_00588C14(*piVar3,0,1);
            }
            piVar3 = (int *)func_005841A8(iVar4,*puVar1,piVar3 + 1);
          } while (*(int **)(iVar4 + 0x3dbc8) != piVar3);
        }
      }
      return bVar2;
    }
    iVar4 = func_001DD484(*DAT_003747e4,4,1);
    break;
  case 2:
  case 3:
    goto switchD_00374690_caseD_2;
  case 4:
    iVar4 = func_00653D5C(param_1);
    break;
  case 5:
    if (*DAT_003747e0 == 0) {
      return true;
    }
    iVar4 = func_0052FBA0(*DAT_003747e0 + 0x3dbbc,*(uint *)(param_1 + 0x9bc));
    if (iVar4 == 0) {
      return true;
    }
    *(undefined1 *)(iVar4 + 0x4cd) = 3;
    return true;
  default:
    goto switchD_00374690_default;
  }
  if (iVar4 == 0) {
switchD_00374690_default:
    return false;
  }
switchD_00374690_caseD_2:
  return true;
}

