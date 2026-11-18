#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern float DAT_0039f50c;
extern int DAT_0039f51c;
extern int *DAT_0039f520;
extern char s_SE_PL_DRINK_0039f510[];

// USA 0039F480 <- EU 0039F45C (Ghidra, non-matching)
// GLOBAL DAT_0039f50c float
// GLOBAL DAT_0039f51c int
// GLOBAL DAT_0039f520 int *
// GLOBAL s_SE_PL_DRINK_0039f510 string

undefined4 func_0039F480(int param_1)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  func_004CEA18(*(int *)(param_1 + 4),1,1);
  piVar6 = (int *)0x0;
  puVar2 = (uint *)func_002C11E8(aiStack_70,0,10,0);
  iVar5 = *(int *)(param_1 + 0x1c);
  func_0016898C(iVar5,puVar2);
  fVar1 = DAT_0039f50c;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x10) = DAT_0039f50c;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
  if (*(float *)(iVar3 + 8) != fVar1) {
    uVar4 = 1;
    *(float *)(iVar3 + 8) = fVar1;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  func_00169A80(*(int **)(param_1 + 0x1c),uVar4,iVar5,piVar6);
  local_c = s_SE_PL_DRINK_0039f510;
  local_10 = DAT_0039f51c;
  return func_004EA104(*DAT_0039f520,&local_10,0);
}

