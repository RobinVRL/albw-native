#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_0017a838;
extern int *DAT_0017a83c;
extern int *DAT_0017a840;
extern int DAT_0017a844;

// USA 0017A7AC <- EU 0017A7AC (Ghidra, non-matching)
// GLOBAL DAT_0017a838 int *
// GLOBAL DAT_0017a83c int *
// GLOBAL DAT_0017a840 int *
// GLOBAL DAT_0017a844 int

void func_0017A7AC(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  iVar2 = func_00588BE4(param_1);
  piVar1 = DAT_0017a840;
  if (iVar2 == *DAT_0017a838 || param_3 != 0) {
    uVar4 = 0;
    local_20[0] = *DAT_0017a83c;
    local_20[1] = *DAT_0017a838;
    do {
      piVar3 = (int *)func_005841A8(*piVar1,local_20[uVar4],*(int **)(DAT_0017a844 + *piVar1));
      piVar3 = (int *)*piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x30))(piVar3,param_2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
  }
  return;
}

