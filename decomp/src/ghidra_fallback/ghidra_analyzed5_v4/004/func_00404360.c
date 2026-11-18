#include "ghidra_types.h"

extern int func_003E6AA8(int param_1,uint param_2,int param_3,undefined4 param_4,...);
extern undefined4 DAT_00404428;
extern undefined4 DAT_0040442c;
extern undefined4 *DAT_00404430;
extern int DAT_00404434;
extern int DAT_00404438;

// USA 00404360 <- EU 00404340 (Ghidra, non-matching)
// GLOBAL DAT_00404428 undefined4
// GLOBAL DAT_0040442c undefined4
// GLOBAL DAT_00404430 undefined4 *
// GLOBAL DAT_00404434 int
// GLOBAL DAT_00404438 int

int * func_00404360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define auStack_60 ((undefined1 *)(albw_frame + 0x0))
  func_003E6AA8((int)auStack_60,0x48,0x47,DAT_00404428,param_2);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),DAT_0040442c,auStack_60,0);
  piVar3 = (int *)(**(code **)(*(int *)*DAT_00404430 + 8))((int *)*DAT_00404430,0x34,4);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = DAT_00404434;
    iVar1 = DAT_00404438;
    piVar3[1] = 0;
    piVar3[2] = (int)(piVar3 + 2);
    piVar3[4] = 0;
    piVar3[3] = (int)(piVar3 + 2);
    piVar3[5] = 0;
    piVar3[6] = iVar1;
    piVar3[7] = iVar1;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = (int)(piVar3 + 0xb);
    piVar3[0xc] = (int)(piVar3 + 0xb);
  }
  (**(code **)(*piVar3 + 0x38))(piVar3,uVar2,*(undefined4 *)(param_1 + 0x24),param_4,param_3);
  return piVar3;
}

