#include "ghidra_types.h"

extern int func_004EA028(int param_1,int *param_2);
extern int func_004EADBC(int param_1,uint param_2);
extern int func_00587BA8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
extern int func_005883F8(int param_1,int *param_2);
extern int *DAT_0025b634;
extern int DAT_0025b638;

// USA 0025B57C <- EU 0025B5A4 (Ghidra, non-matching)
// GLOBAL DAT_0025b634 int *
// GLOBAL DAT_0025b638 int

int func_0025B57C(undefined4 param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  piVar1 = DAT_0025b634;
  iVar2 = func_005883F8(*DAT_0025b634,param_2);
  if (iVar2 == 0) {
    iVar2 = 0;
    (**(code **)(*param_2 + 8))(param_2);
    local_1c = param_2[1];
    local_20 = DAT_0025b638;
    iVar3 = func_00587BA8(*piVar1,&local_20,DAT_0025b638,param_4);
    if ((iVar3 != 1) && (iVar2 = func_004EA028(*piVar1,param_2), iVar2 != 0)) {
      func_004EADBC(*piVar1,param_3);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

