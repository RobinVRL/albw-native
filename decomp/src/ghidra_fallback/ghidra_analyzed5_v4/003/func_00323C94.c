#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0043BDF4(undefined4 *param_1);
extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int func_00491260(undefined4 *param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int DAT_00323d10;
extern undefined4 DAT_00323d14;
extern char s_LoadingFader_00323d00[];

// USA 00323C94 <- EU 00323C70 (Ghidra, non-matching)
// GLOBAL DAT_00323d10 int
// GLOBAL DAT_00323d14 undefined4
// GLOBAL s_LoadingFader_00323d00 string

int func_00323C94(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iStack_18 = DAT_00323d10;
  local_14 = s_LoadingFader_00323d00;
  (**(code **)(DAT_00323d10 + 8))(&iStack_18);
  puVar1 = func_0048E140(param_1,param_2,(int)local_14);
  *puVar1 = DAT_00323d14;
  puVar1[0x7b] = 0;
  iVar2 = func_00491260(puVar1 + 0x7c);
  *(undefined4 *)(iVar2 + 0xe8) = 0x28;
  *(undefined4 *)(iVar2 + 0xec) = 0x78;
  *(undefined4 *)(iVar2 + 0xf0) = 0x1e;
  puVar1 = (undefined4 *)func_0010BAB4(0x8c);
  piVar3 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = func_0043BDF4(puVar1);
  }
  *(int **)(iVar2 + -4) = piVar3;
  func_004B9958((int)piVar3,8);
  return iVar2 + -0x1f0;
}

