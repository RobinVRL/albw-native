#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0039f440;
extern undefined DAT_0039f444;
extern int DAT_0039f454;
extern int *DAT_0039f458;
extern char s__SE_PL_DRINK_0039f447[];
extern char s_cf_0039f447[];
extern undefined4 _DAT_0039f444;

// USA 0039F3B0 <- EU 0039F38C (Ghidra, non-matching)
// GLOBAL DAT_0039f440 undefined4
// GLOBAL DAT_0039f444 undefined
// GLOBAL DAT_0039f454 int
// GLOBAL DAT_0039f458 int *
// GLOBAL s_cf_0039f447 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0039F3B0(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  func_004CEA18(*(int *)(param_1 + 4),1,1);
  piVar5 = (int *)0x0;
  puVar1 = (uint *)func_002C11E8(aiStack_70,0,10,0);
  iVar4 = *(int *)(param_1 + 0x1c);
  func_0016898C(iVar4,puVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x10) = DAT_0039f440;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
  if (*(float *)(iVar2 + 8) != ALBW_AS_F32(_DAT_0039f444)) {
    uVar3 = 1;
    *(float *)(iVar2 + 8) = ALBW_AS_F32(_DAT_0039f444);
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  func_00169A80(*(int **)(param_1 + 0x1c),uVar3,iVar4,piVar5);
  local_c = s__SE_PL_DRINK_0039f447 + 1;
  local_10 = DAT_0039f454;
  return func_004EA104(*DAT_0039f458,&local_10,0);
}

