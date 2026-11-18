#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0065BE00(undefined4 *param_1,undefined1 param_2);
extern float DAT_001c6278;
extern float DAT_001c627c;
extern int DAT_001c6280;
extern float DAT_001c6284;
extern int DAT_001c6288;
extern float DAT_001c628c;
extern int DAT_001c6290;
extern float DAT_001c6294;
extern int *DAT_001c6298;
extern int DAT_001c62b0;
extern char s_SE_OBJ_PRE_RECOVER_001c629c[];

// USA 001C60D0 <- EU 001C60D0 (Ghidra, non-matching)
// GLOBAL DAT_001c6278 float
// GLOBAL DAT_001c627c float
// GLOBAL DAT_001c6280 int
// GLOBAL DAT_001c6284 float
// GLOBAL DAT_001c6288 int
// GLOBAL DAT_001c628c float
// GLOBAL DAT_001c6290 int
// GLOBAL DAT_001c6294 float
// GLOBAL DAT_001c6298 int *
// GLOBAL DAT_001c62b0 int
// GLOBAL s_SE_OBJ_PRE_RECOVER_001c629c string

undefined4 func_001C60D0(int param_1,undefined4 param_2,uint param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar1 = *(uint *)(param_1 + 0x4b4);
  if (uVar1 != 0) {
    param_3 = *(uint *)(param_1 + 0x4b0);
  }
  fVar3 = DAT_001c6278;
  if ((uVar1 != 0 && param_3 != 0) && (fVar3 = DAT_001c627c, param_3 < uVar1)) {
    fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * *(float *)(param_1 + 0x4b8);
  }
  fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)ALBW_AS_U32(fVar3) < DAT_001c6280) {
    iVar4 = (int)((DAT_001c6284 - fVar3) * fVar5);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar3 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = *(float *)(param_1 + 0x4c0);
    *(float *)(param_1 + 0x4c0) = fVar5 + (DAT_001c627c - fVar5) * (DAT_001c627c / fVar3);
  }
  else if (DAT_001c6288 < (int)ALBW_AS_U32(fVar3)) {
    iVar4 = (int)((DAT_001c627c - fVar3) * fVar5);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = *(float *)(param_1 + 0x4c0);
    *(float *)(param_1 + 0x4c0) = fVar3 + (DAT_001c6278 - fVar3) * (DAT_001c627c / fVar5);
  }
  else {
    *(float *)(param_1 + 0x4c0) = DAT_001c627c;
  }
  uVar1 = *(uint *)(param_1 + 0x4bc);
  pfVar2 = (float *)(DAT_001c6290 + (uVar1 >> 0x18) * 0x10);
  fVar3 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (*pfVar2 + pfVar2[1] * fVar3 * DAT_001c628c) * DAT_001c6294 * *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4ac) = fVar3;
  *(float *)(param_1 + 0x4a4) = fVar3;
  *(uint *)(param_1 + 0x4bc) = uVar1 + *DAT_001c6298;
  if (*(uint *)(param_1 + 0x4b0) < *(uint *)(param_1 + 0x4b4)) {
    *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) + 1;
  }
  else {
    func_0065BE00((undefined4 *)(param_1 + 0x414),0);
  }
  local_14 = s_SE_OBJ_PRE_RECOVER_001c629c;
  local_18 = DAT_001c62b0;
  return func_001507D8(param_1,&local_18,0);
}

