#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006580E4(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined DAT_00159360;
extern int DAT_00159374;
extern char s_CSE_EN_APPEAR_00159363[];
extern undefined4 _DAT_00159360;

// USA 001591E4 <- EU 001591E8 (Ghidra, non-matching)
// GLOBAL DAT_00159360 undefined
// GLOBAL DAT_00159374 int
// GLOBAL s_CSE_EN_APPEAR_00159363 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_001591E4(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  iVar3 = _DAT_00159360;
  if (*(short *)((int)param_1 + 0x36) == 0) {
    if ((uint)param_1[0x239] < (uint)param_1[0x23a]) {
      return;
    }
    pfVar2 = (float *)func_00520FC0();
    fVar4 = (ALBW_AS_F32(param_1[0xf4]) - *pfVar2) * (ALBW_AS_F32(param_1[0xf4]) - *pfVar2) +
            (ALBW_AS_F32(param_1[0xf6]) - pfVar2[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar2[2]);
  }
  else {
    bVar1 = func_00588BF0((int)param_1,0);
    if (!bVar1) {
      return;
    }
    pfVar2 = (float *)func_00520FC0();
    fVar4 = (ALBW_AS_F32(param_1[0xf4]) - *pfVar2) * (ALBW_AS_F32(param_1[0xf4]) - *pfVar2) +
            (ALBW_AS_F32(param_1[0xf6]) - pfVar2[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar2[2]);
  }
  if ((int)ALBW_AS_U32(fVar4) < iVar3) {
    param_1[0x167] = param_1[0x167] | 1;
    func_004FCD5C((int)(param_1 + 0x16a),1);
    param_1[0x167] = param_1[0x167] | 2;
    func_004FCDF4((int)(param_1 + 0x16a),1);
    param_1[0xf4] = param_1[2];
    param_1[0xf5] = param_1[3];
    param_1[0xf6] = param_1[4];
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_18,pfVar2,(float *)(param_1 + 0xf4));
    local_30 = local_18;
    uStack_2c = uStack_14;
    uStack_28 = uStack_10;
    iVar3 = func_0068C690(&local_30);
    param_1[0xfa] = iVar3;
    param_1[0x167] = param_1[0x167] | 0x84;
    func_006580E4(param_1 + 0x22f,1);
    local_1c = s_CSE_EN_APPEAR_00159363 + 1;
    local_20 = DAT_00159374;
    func_00150A84(param_1,&local_20,0);
  }
  return;
}

