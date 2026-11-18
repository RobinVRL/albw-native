#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_00669AEC(undefined4 *param_1,undefined1 param_2);
extern float DAT_003bd2f0;
extern float DAT_003bd2f4;
extern int *DAT_003bd2f8;
extern int DAT_003bd2fc;
extern char s_SE_PL_Hammer_HIT_GROUND_003bd31c[];
extern char s_SE_PL_Hammer_HIT_GROUND_Lv2_003bd300[];

// USA 003BD168 <- EU 003BD144 (Ghidra, non-matching)
// GLOBAL DAT_003bd2f0 float
// GLOBAL DAT_003bd2f4 float
// GLOBAL DAT_003bd2f8 int *
// GLOBAL DAT_003bd2fc int
// GLOBAL s_SE_PL_Hammer_HIT_GROUND_003bd31c string
// GLOBAL s_SE_PL_Hammer_HIT_GROUND_Lv2_003bd300 string

undefined4 func_003BD168(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 99) = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003bd2f0) {
      if (*(float *)(iVar1 + 8) <= DAT_003bd2f0) goto LAB_003bd1b0;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_003bd1b0:
      if (*(int **)(iVar2 + 0xbcc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 0xbcc) + 0x14))(*(int **)(iVar2 + 0xbcc));
      }
      func_00669AEC((undefined4 *)(param_1 + 0x6c),0);
      piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
      iVar1 = func_003ABB24(piVar3,1,1);
      if (iVar1 == 0) {
        return 0;
      }
      return func_003B147C((int *)piVar3[1],1,1);
    }
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0x8dc) + 0x14);
  fVar4 = *(float *)(iVar1 + 8);
  fVar5 = *(float *)(iVar1 + 0xc);
  if (fVar4 < fVar5) {
    if (*(float *)(iVar1 + 0x14) <= fVar5) {
      if (fVar4 < DAT_003bd2f4) {
        return 0;
      }
      goto LAB_003bd298;
    }
    if ((fVar5 < DAT_003bd2f4) && (DAT_003bd2f4 <= *(float *)(iVar1 + 0x14))) goto LAB_003bd298;
  }
  else if (DAT_003bd2f4 <= fVar5) {
    return 0;
  }
  if (fVar4 < DAT_003bd2f4) {
    return 0;
  }
LAB_003bd298:
  local_18 = DAT_003bd2fc;
  if (*(char *)(iVar2 + 0x1028) < '\x02') {
    local_14 = s_SE_PL_Hammer_HIT_GROUND_003bd31c;
    return func_004EABB8(*DAT_003bd2f8,&local_18,(undefined4 *)0x0);
  }
  local_14 = s_SE_PL_Hammer_HIT_GROUND_Lv2_003bd300;
  return func_004EABB8(*DAT_003bd2f8,&local_18,(undefined4 *)0x0);
}

