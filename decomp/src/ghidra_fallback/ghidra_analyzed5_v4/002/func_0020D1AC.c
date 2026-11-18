#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern float func_0058AC38(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float fRam0020d38c;
extern int iRam0020d388;
extern undefined4 uRam0020d380;
extern undefined4 uRam0020d384;

// USA 0020D1AC <- EU 0020D1AC (Ghidra, non-matching)
// GLOBAL UNK_0020d380 undefined4
// GLOBAL UNK_0020d384 uint
// GLOBAL UNK_0020d388 int
// GLOBAL UNK_0020d38c float

void func_0020D1AC(int param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  func_004FABDC(param_1,0x13,6,0);
  uVar8 = uRam0020d380;
  *(undefined4 *)(param_1 + 0xc34) = uRam0020d380;
  *(undefined4 *)(param_1 + 0xc98) = uVar8;
  pfVar5 = (float *)(param_1 + 0xc24);
  *(undefined1 *)(param_1 + 0xc20) = 0;
  pfVar2 = (float *)func_00520FC0();
  *pfVar5 = *pfVar2;
  *(float *)(param_1 + 0xc28) = pfVar2[1];
  *(float *)(param_1 + 0xc2c) = pfVar2[2];
  func_00115C70(&fStack_44,pfVar5,(float *)(param_1 + 0x3d0));
  fStack_38 = fStack_44;
  uStack_30 = uStack_3c;
  uStack_34 = uVar8;
  func_00115DC8(&fStack_38);
  iVar3 = func_0068C690(&fStack_38);
  uVar1 = uRam0020d384;
  iStack_2c = *(int *)(param_1 + 1000) - iVar3;
  uVar4 = func_0058E2B8(&iStack_2c);
  if (uVar4 < uVar1) {
    fVar6 = func_0058AC38(param_1);
    fVar7 = (float)VectorSignedToFloat(iVar3 - *(int *)(param_1 + 1000),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(int *)(param_1 + 0xc30) = (int)(fVar7 / fVar6);
  }
  else if (iVar3 - *(int *)(param_1 + 1000) < 1) {
    fVar6 = func_0058AC38(param_1);
    fVar7 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    *(int *)(param_1 + 0xc30) = (int)-(fVar7 / fVar6);
  }
  else {
    fVar6 = func_0058AC38(param_1);
    fVar7 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    *(int *)(param_1 + 0xc30) = (int)(fVar7 / fVar6);
  }
  *(undefined4 *)(param_1 + 0x3e4) = uVar8;
  *(undefined4 *)(param_1 + 0x3dc) = uVar8;
  fVar7 = *(float *)(param_1 + 0x9b4) - *pfVar5;
  fVar6 = *(float *)(param_1 + 0x9bc) - *(float *)(param_1 + 0xc2c);
  if (iRam0020d388 < (int)ALBW_AS_U32(SQRT(fVar7 * fVar7 + fVar6 * fVar6))) {
    func_00115D70(&fStack_28,&fStack_38,fRam0020d38c);
    fStack_48 = fStack_28;
    fStack_44 = fStack_24;
    uStack_40 = uStack_20;
    fVar6 = func_0058AC38(param_1);
    func_00115D88(&fStack_28,&fStack_48,fVar6);
    *(float *)(param_1 + 0x3dc) = fStack_28;
    *(undefined4 *)(param_1 + 0x3e4) = uStack_20;
  }
  return;
}

