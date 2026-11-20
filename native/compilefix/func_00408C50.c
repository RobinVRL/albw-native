/* compilefix: USA 00408C50, from the Ghidra text with 2 cast(s) fixed: the word param_5[8] is an integer count compared with an integer local, read through a float VALUE conversion (small counts became 0).
 * Same class as 0032F024 (BOOT_LOG 160ar): an integer word read through a float * parameter must be
 * taken by its bits (ALBW_AS_U32), not converted by value. */
#include "ghidra_types.h"

extern int func_004098FC(undefined4 param_1,int param_2,undefined4 param_3,float *param_4,float fparam_0);
extern int func_00409940(int param_1,int param_2,int param_3,float *param_4,int *param_5,float fparam_0);
extern int func_00409A00(int param_1,float *param_2,float *param_3,int param_4,float *param_5,float *param_6);
extern int func_00409A64(int param_1,int param_2,int param_3,float *param_4,float *param_5,float fparam_0);
extern float DAT_00408e1c;

// USA 00408C50 <- EU 00408C30 (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 uint
// PARAM param_5 Stack[0x4]:4 float *
// GLOBAL DAT_00408e1c float

/* WARNING: Variable defined which should be unmapped: objStack_60 */
/* WARNING: Variable defined which should be unmapped: objStack_5c */

void func_00408C50(int param_1,int param_2,float *param_3,uint param_4,float *param_5)

{
  uint auVar1 [1];
  int *piVar2;
  float *pfVar3;
  ulonglong uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define objStack_5c ((uint *)(albw_frame + 0x4))
  #define local_54 ((float *)(albw_frame + 0xc))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 ((float *)(albw_frame + 0x2c))
  fVar5 = DAT_00408e1c;
  uVar4 = (ulonglong)(uint)ALBW_AS_U32(DAT_00408e1c);
  if ((param_4 & 1) != 0) {
    *param_5 = DAT_00408e1c;
  }
  if ((param_4 & 2) != 0) {
    param_5[8] = ALBW_AS_F32(-*(int *)(param_2 + 0x1c));
  }
  if ((param_4 & 0x10) != 0) {
    param_5[6] = fVar5;
  }
  if (1 < *(uint *)(param_2 + 0xc)) {
    param_4 = param_4 & 0xffffffd3;
  }
  piVar2 = *(int **)(param_2 + 0x10);
  if (piVar2 != (int *)(param_2 + 0x10)) {
    do {
      pfVar3 = (float *)(piVar2 + -0x19);
      fVar5 = ALBW_AS_F32(uVar4);
      if ((param_4 & 0x33) != 0) {
        local_48 = *param_3 - ALBW_AS_F32(piVar2[-0xd]);
        local_44 = param_3[1] - ALBW_AS_F32(piVar2[-0xc]);
        local_40 = param_3[2] - ALBW_AS_F32(piVar2[-0xb]);
        fVar5 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
      }
      uVar4 = CONCAT44(fVar5,ALBW_AS_F32(uVar4));
      if ((param_4 & 3) != 0) {
        objStack_60[0] = (uint)objStack_5c;
        func_00409940(param_2,(int)pfVar3,(int)param_3,&local_38,(int *)objStack_60[0],fVar5);
        if ((param_4 & 1) != 0) {
          fVar5 = *param_5;
          if (*param_5 <= local_38) {
            fVar5 = local_38;
          }
          *param_5 = fVar5;
        }
        if ((param_4 & 2) != 0) {
          auVar1[0] = (uint)ALBW_AS_U32(param_5[8]);
          if ((int)ALBW_AS_U32(param_5[8]) <= (int)objStack_5c[0]) {
            auVar1[0] = objStack_5c[0];
          }
          param_5[8] = ALBW_AS_F32(auVar1[0]);
        }
      }
      if ((param_4 & 0xc) != 0) {
        objStack_5c[0] = (uint)&local_38;
        objStack_60[0] = (uint)local_54;
        func_00409A00(param_2,pfVar3,param_3,param_1 + 4,(float *)objStack_60[0],
                      (float *)objStack_5c[0]);
        if ((param_4 & 4) != 0) {
          param_5[2] = local_54[0];
        }
        if ((param_4 & 8) != 0) {
          param_5[3] = local_38;
        }
      }
      if ((param_4 & 0x20) != 0) {
        objStack_60[0] = (uint)local_34;
        func_00409A64(param_2,(int)pfVar3,(int)param_3,&local_48,(float *)objStack_60[0],
                      ALBW_AS_F32((uVar4 >> 0x20)));
        param_5[1] = local_34[0];
      }
      if ((param_4 & 0x10) != 0) {
        func_004098FC(param_2,(int)pfVar3,param_3,(float *)objStack_60,ALBW_AS_F32((uVar4 >> 0x20)));
        param_5[7] = *(float *)(param_2 + 0x28);
        auVar1[0] = objStack_60[0];
        if (ALBW_AS_F32(objStack_60[0]) < param_5[6]) {
          auVar1[0] = (uint)ALBW_AS_U32(param_5[6]);
        }
        param_5[6] = ALBW_AS_F32(auVar1[0]);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(param_2 + 0x10));
  }
  return;
}

