#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0026F748(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern undefined4 DAT_0018b6fc;
extern uint *DAT_0018b700;
extern float DAT_0018b704;
extern float DAT_0018b708;
extern int DAT_0018b70c;
extern undefined4 *DAT_0018b710;
extern int *DAT_0018b714;

// USA 0018B58C <- EU 0018B58C (Ghidra, non-matching)
// GLOBAL DAT_0018b6fc undefined4
// GLOBAL DAT_0018b700 uint *
// GLOBAL DAT_0018b704 float
// GLOBAL DAT_0018b708 float
// GLOBAL DAT_0018b70c int
// GLOBAL DAT_0018b710 undefined4 *
// GLOBAL DAT_0018b714 int *

undefined4 func_0018B58C(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  fVar5 = DAT_0018b708;
  puVar1 = DAT_0018b700;
  uVar3 = DAT_0018b6fc;
  if (*(char *)(param_1 + 0x4ed) == '\0') {
    if (*(char *)(param_1 + 0x53a) == '\0') {
      if (*(float *)(param_1 + 0x524) <= *(float *)(param_1 + 0x3d4)) {
        fVar4 = *(float *)(param_1 + 0x3e0) - DAT_0018b704;
        *(float *)(param_1 + 0x3e0) = fVar4;
        if (fVar4 < fVar5) {
          fVar4 = fVar5;
        }
        *(float *)(param_1 + 0x3e0) = fVar4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3dc) = DAT_0018b6fc;
      *(undefined4 *)(param_1 + 0x3e0) = uVar3;
      *(undefined4 *)(param_1 + 0x3e4) = uVar3;
      if (*(int *)(param_1 + 0x344) != 0) {
        func_004A1B9C(aiStack_18,*(int *)(param_1 + 0x344),puVar1);
      }
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  *(int *)(param_1 + 0x4dc) = DAT_0018b70c + *(int *)(param_1 + 0x4dc);
  iVar2 = *(int *)(param_1 + 0x40c);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  func_004356B4(*(int **)(param_1 + 0x40c));
  fVar5 = *(float *)(param_1 + 0x530);
  if (*(float *)(param_1 + 0x3d4) <= fVar5) {
    if (*(char *)(param_1 + 0x538) != '\0') {
      func_004A9120(*DAT_0018b710,param_1 + 0x478);
      *(undefined1 *)(param_1 + 0x538) = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x474);
    uVar3 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(float *)(iVar2 + 8) = fVar5;
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    func_004356B4(*(int **)(param_1 + 0x474));
  }
  local_20[0] = *(int *)(param_1 + 0x2cc);
  return func_0026F748(*(int *)(*DAT_0018b714 + 0xf9c),(int)(char)*(undefined4 *)(param_1 + 0x5a8),local_20
                ,(undefined4 *)(param_1 + 0x3d0));
}

