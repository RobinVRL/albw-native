#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int func_0025716C(int param_1,undefined4 param_2);
extern int func_004090E0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0057D86C(int *param_1);

// USA 00258F5C <- EU 00258F84 (Ghidra, non-matching)

undefined4 func_00258F5C(int param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined1 *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(undefined1 *)(albw_frame + 0x44))
  #define local_2b (*(undefined1 *)(albw_frame + 0x45))
  #define local_24 (*(undefined4 *)(albw_frame + 0x4c))
  if (param_3 != -1) {
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    if (*(char *)(param_1 + 100) != '\0') {
      bVar1 = func_0057D86C((int *)(param_1 + 0xc));
      if (bVar1) {
        return 0;
      }
      *(undefined1 *)(param_1 + 100) = 0;
    }
    bVar1 = func_0057D86C((int *)(param_1 + 0xc));
    if (bVar1) {
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xac);
      }
      if (iVar3 == param_3) {
        return 0;
      }
    }
    if ((*(int **)(param_1 + 0xc) != (int *)0x0) &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc)), iVar3 != 0)) {
      func_00110DDC((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      *(undefined1 *)(param_1 + 100) = 0;
    }
    if (param_4 < 1) {
      cVar2 = func_004090E0(param_2,param_1 + 0xc,param_3,0);
      *(char *)(param_1 + 0x10) = cVar2;
    }
    else {
      local_50 = 0;
      local_4c = 0;
      uStack_48 = 0xffffffff;
      local_40 = 0xffffffff;
      local_2c = 0;
      local_38 = 0;
      local_3c = 0xffffffff;
      local_2b = 0xff;
      local_44 = 0xffffffff;
      local_68 = 1;
      local_24 = 0;
      local_64 = 2;
      local_34 = 0;
      local_30 = 0;
      *(int *)(param_1 + 0x48) = param_4;
      local_60 = param_4;
      cVar2 = func_004090E0(param_2,param_1 + 0xc,param_3,&local_68);
      *(char *)(param_1 + 0x10) = cVar2;
    }
    if (cVar2 == '\0') {
      func_0025716C(param_1,param_3);
    }
    *(undefined1 *)(param_1 + 100) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      return 1;
    }
  }
  return 0;
}

