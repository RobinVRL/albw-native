// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00556E64(int param_1);
extern undefined4 DAT_00604620;
extern int DAT_00604624;
extern int *DAT_00604628;

// USA 00604598 <- EU 00604570 (Ghidra, non-matching)
// GLOBAL DAT_00604620 undefined4
// GLOBAL DAT_00604624 int
// GLOBAL DAT_00604628 int *

int * func_00604598(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  #define local_2c (*(int * *)(albw_frame + 0x14))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(int *)(albw_frame + 0x24))
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00604620);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar4 = DAT_00604624 + 0x54;
    *piVar3 = DAT_00604624;
    piVar3[200] = iVar4;
    iVar4 = piVar3[0xb4];
    piVar5 = (int *)(iVar4 + 0xc);
    (**(code **)(*piVar5 + 8))(piVar5);
    func_003529A0(auStack_38,*(undefined4 *)(iVar4 + 0x10),piVar3 + 200);
    local_2c = piVar3 + 0xf4;
    local_1c = (int)(short)param_1[10];
    if ((*DAT_00604628 == 0) || (bVar1 = func_00556E64(*DAT_00604628), !bVar1)) {
      local_20 = 0;
    }
    else {
      local_20 = 1;
    }
    func_002C41BC(piVar3 + 200,auStack_38,(int)piVar3);
  }
  return piVar3;
}

