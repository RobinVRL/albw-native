#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern float fRam00252394;
extern float fRam00252398;
extern undefined4 uRam0025239c;
extern int *piRam002523a0;
extern int *piRam002523a4;
extern float DAT_004eb3c8;
extern char s_SE_OBJ_PL_THROW_L_004eb3cc[];
extern char s_SE_PV_THROW_L_004eb3e0[];

// USA 00252288 <- EU 002522B0 (Ghidra, non-matching)
// GLOBAL DAT_004eb3c8 float
// GLOBAL UNK_00252394 float
// GLOBAL UNK_00252398 float
// GLOBAL UNK_0025239c undefined4
// GLOBAL UNK_002523a0 int *
// GLOBAL UNK_002523a4 int *
// GLOBAL s_SE_OBJ_PL_THROW_L_004eb3cc string
// GLOBAL s_SE_PV_THROW_L_004eb3e0 string

undefined4 func_00252288(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x520),1);
  func_00115C70(&fStack_18,(float *)(param_1 + 0x540),(float *)(param_1 + 0x3d0));
  fVar1 = fRam00252398;
  fVar3 = fRam00252394;
  *(float *)(param_1 + 0x3dc) = fStack_18;
  *(char **)(param_1 + 0x3e0) = pcStack_14;
  *(float *)(param_1 + 0x3e4) = fStack_10;
  fVar4 = SQRT(fStack_18 * fStack_18 + ALBW_AS_F32(pcStack_14) * ALBW_AS_F32(pcStack_14) + fStack_10 * fStack_10
              );
  if (fVar1 < fVar4) {
    fVar3 = fVar3 / fVar4;
    *(float *)(param_1 + 0x3dc) = fStack_18 * fVar3;
    *(float *)(param_1 + 0x3e0) = ALBW_AS_F32(pcStack_14) * fVar3;
    *(float *)(param_1 + 0x3e4) = fStack_10 * fVar3;
  }
  *(undefined4 *)(param_1 + 0x3e0) = uRam0025239c;
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x520),1);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(*(int *)(*piRam002523a0 + 0x1c) + 4);
  fVar3 = DAT_004eb3c8;
  iVar2 = *piRam002523a4;
  if (param_1 == 0) {
    param_1 = *(undefined4 *)(iVar2 + 0x58);
  }
  if ((int *)param_1 != (int *)0x0) {
    pcStack_14 = s_SE_OBJ_PL_THROW_L_004eb3cc;
    fStack_18 = DAT_004eb3c8;
    func_00150A84((int *)param_1,(int *)&fStack_18,0);
  }
  pcStack_14 = s_SE_PV_THROW_L_004eb3e0;
  fStack_18 = fVar3;
  return func_004EAF8C(iVar2,(int *)&fStack_18,0);
}

