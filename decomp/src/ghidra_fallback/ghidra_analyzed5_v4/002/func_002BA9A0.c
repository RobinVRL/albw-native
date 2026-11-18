#include "ghidra_types.h"

extern int func_0011558C(float *param_1,float *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern float func_002B6294(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern float DAT_002baa80;
extern int DAT_002baa84;
extern int DAT_002baa88;
extern float DAT_002baa8c;
extern float DAT_002baa90;
extern float DAT_002baa94;

// USA 002BA9A0 <- EU 002BA97C (Ghidra, non-matching)
// GLOBAL DAT_002baa80 float
// GLOBAL DAT_002baa84 int
// GLOBAL DAT_002baa88 int
// GLOBAL DAT_002baa8c float
// GLOBAL DAT_002baa90 float
// GLOBAL DAT_002baa94 float

float func_002BA9A0(int param_1,float fparam_0)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_68 ((float *)(albw_frame + 0x8))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define fStack_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(float *)(albw_frame + 0x40))
  #define fStack_2c (*(float *)(albw_frame + 0x44))
  #define local_28 (*(float *)(albw_frame + 0x48))
  func_0011558C(afStack_68,(float *)(*(int *)(param_1 + 0x8d4) + 0x80));
  pfVar1 = (float *)func_00520FC0();
  local_38 = *pfVar1;
  fStack_34 = pfVar1[1];
  local_30 = pfVar1[2];
  func_00115CA8(&local_38,afStack_68,&local_38);
  pfVar1 = (float *)(param_1 + 0xa2c);
  iVar2 = DAT_002baa84;
  if (local_38 < DAT_002baa80) {
    iVar2 = DAT_002baa88;
  }
  fVar4 = DAT_002baa80;
  func_004D80A4(&fStack_2c,iVar2 + *(int *)(param_1 + 1000),DAT_002baa8c);
  local_28 = fVar4;
  func_00115C54(pfVar1,pfVar1,&fStack_2c);
  fVar4 = DAT_002baa90;
  if (0x3f800000 <
      (int)ALBW_AS_U32(SQRT(*pfVar1 * *pfVar1 + *(float *)(param_1 + 0xa30) * *(float *)(param_1 + 0xa30) +
                *(float *)(param_1 + 0xa34) * *(float *)(param_1 + 0xa34)))) {
    func_00115DC8(pfVar1);
  }
  fVar5 = fparam_0 * DAT_002baa94;
  fVar3 = func_002B6294(param_1);
  fVar3 = fVar3 * fparam_0;
  if (*(char *)(param_1 + 0xb3f) != '\0') {
    fVar3 = fVar4;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x8e0) + 0x14) + 0x10) = fVar3;
  return fVar5;
}

