#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0017B378(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_0017bf6c;
extern float DAT_0017bf70;

// USA 0017BDE8 <- EU 0017BDE8 (Ghidra, non-matching)
// GLOBAL DAT_0017bf6c float
// GLOBAL DAT_0017bf70 float

undefined4 func_0017BDE8(int param_1)

{
  int iVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_7c ((int *)(albw_frame + 0x4))
  #define afStack_20 ((float *)(albw_frame + 0x60))
  #define local_14 (*(int *)(albw_frame + 0x6c))
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x844);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0x848);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x84c);
  *(float *)(param_1 + 0x83c) = *(float *)(param_1 + 0x83c) + DAT_0017bf6c;
  iVar1 = *(int *)(*(int *)(param_1 + 0x7b4) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0017bf70) {
      if (DAT_0017bf70 < *(float *)(iVar1 + 8)) goto LAB_0017bf04;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_0017bf04;
    iVar1 = **(int **)(*(int *)(param_1 + 0x7b4) + 0x14);
    iVar4 = *(int *)(param_1 + 0x87c);
    if (*(int *)(param_1 + 0x878) == iVar1) {
      *(undefined4 *)(param_1 + 0x878) = 0xffffffff;
      if (-1 < iVar4) {
        puVar2 = (uint *)func_002C11E8(aiStack_7c,iVar4,10,0);
        func_0016898C(*(int *)(param_1 + 0x7b4),puVar2);
        goto LAB_0017bf04;
      }
    }
    else {
      if (iVar4 != iVar1) goto LAB_0017bf04;
      *(undefined4 *)(param_1 + 0x87c) = 0xffffffff;
    }
    puVar2 = (uint *)func_002C11E8(aiStack_7c,0,10,0);
    func_0016898C(*(int *)(param_1 + 0x7b4),puVar2);
  }
LAB_0017bf04:
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(afStack_20,pfVar3,(float *)(param_1 + 0x3d0));
  piVar5 = (int *)0x0;
  local_14 = func_0068C690(afStack_20);
  if (*(char *)(param_1 + 0x885) == '\0') {
    if (0x1e < *(int *)(param_1 + 0x788)) {
      piVar5 = &local_14;
    }
  }
  else {
    piVar5 = (int *)(param_1 + 0x874);
  }
  return func_0017B378(param_1,piVar5,1,1);
}

