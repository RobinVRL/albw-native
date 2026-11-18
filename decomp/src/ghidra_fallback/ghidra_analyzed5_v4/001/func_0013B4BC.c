#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00583B1C(int param_1);
extern int DAT_0013b678;
extern char s_SE_Climber_DRINK_0013b664[];

// USA 0013B4BC <- EU 0013B4BC (Ghidra, non-matching)
// GLOBAL DAT_0013b678 int
// GLOBAL s_SE_Climber_DRINK_0013b664 string

undefined4 func_0013B4BC(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (param_1[0x263] != param_2) {
    param_1[0x263] = param_2;
    param_1[0x264] = 0;
  }
  puVar1 = (uint *)(param_1 + 0x264);
  if (param_2 == 0) {
    if (param_1[0x264] == 0) {
      *(undefined1 *)((int)param_1 + 0x919) = 0;
      if (param_1[0x1e9] != 0) {
        func_004CF478(param_1[0x1e9],1);
      }
      (**(code **)(*param_1 + 0xac))(param_1,9,0xffffffff);
      *(undefined1 *)((int)param_1 + 0x989) = 2;
      local_14 = s_SE_Climber_DRINK_0013b664;
      local_18 = DAT_0013b678;
      func_00150A84(param_1,&local_18,0);
    }
    iVar2 = param_1[0x264];
    *puVar1 = iVar2 + 1U;
    if (iVar2 + 1U < 0x3d) {
      return 0;
    }
  }
  else if (param_2 == 1) {
    if (param_1[0x264] == 0) {
      func_004CEA18(param_1[0x1e9],0,1);
      (**(code **)(*param_1 + 0xac))(param_1,10,0xffffffff);
    }
    *puVar1 = param_1[0x264] + 1;
    iVar2 = func_00583B1C((int)param_1);
    if (iVar2 == 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
  }
  else if (param_2 == 2) {
    if (param_1[0x264] == 0) {
      (**(code **)(*param_1 + 0xac))(param_1,0xb,0xffffffff);
    }
    *puVar1 = param_1[0x264] + 1;
    iVar2 = func_00583B1C((int)param_1);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x919) = 1;
    if (param_1[0x1e9] != 0) {
      func_004CF478(param_1[0x1e9],0);
    }
  }
  return 1;
}

