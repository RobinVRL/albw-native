// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_004F68AC();
extern int func_00556E64(int param_1);
extern int *DAT_002a2ab4;
extern int *DAT_002a2ab8;
extern float *DAT_002a2abc;

// USA 002A2A34 <- EU 002A2A10 (Ghidra, non-matching)
// GLOBAL DAT_002a2ab4 int *
// GLOBAL DAT_002a2ab8 int *
// GLOBAL DAT_002a2abc float *

undefined4 func_002A2A34(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int unaff_r5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  cVar1 = *(char *)(param_1 + 0x9e4);
  if ((((cVar1 != '\0' && cVar1 != '\x0e') && (cVar1 != '\x0f' && cVar1 != '\x12')) &&
      (*DAT_002a2ab4 != 0)) && (bVar2 = func_00556E64(*DAT_002a2ab4), !bVar2)) {
    iVar3 = *DAT_002a2ab8;
    if (iVar3 != 0) {
      unaff_r5 = *(int *)(iVar3 + 0x18);
    }
    if (iVar3 != 0 && unaff_r5 != 0) {
      local_20 = *(float *)(param_1 + 0x3d0);
      uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
      uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
      func_00115C54(&local_20,&local_20,DAT_002a2abc);
      param_3 = 1;
      func_001E8440(unaff_r5,&local_20,1);
    }
  }
  return func_004F68AC(param_1,param_2,param_3,param_4);
}

