// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00156024(int *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00556B3C(int param_1);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_00155b70;
extern float DAT_00155b74;
extern int *DAT_00155b8c;
extern int DAT_00155b90;
extern float DAT_00155b94;
extern float DAT_00155b98;
extern float DAT_00155b9c;
extern float DAT_00155ba0;
extern float DAT_00155ba4;
extern float DAT_00155ba8;
extern int *DAT_00155bac;
extern int DAT_00155bc8;
extern int DAT_00155bcc;
extern char s_SE_Crowly_ATTACK_FLY_00155bb0[];
extern char s_SE_Crowly_HOVERING_00155b78[];

// USA 0015593C <- EU 00155940 (Ghidra, non-matching)
// GLOBAL DAT_00155b70 int
// GLOBAL DAT_00155b74 float
// GLOBAL DAT_00155b8c int *
// GLOBAL DAT_00155b90 int
// GLOBAL DAT_00155b94 float
// GLOBAL DAT_00155b98 float
// GLOBAL DAT_00155b9c float
// GLOBAL DAT_00155ba0 float
// GLOBAL DAT_00155ba4 float
// GLOBAL DAT_00155ba8 float
// GLOBAL DAT_00155bac int *
// GLOBAL DAT_00155bc8 int
// GLOBAL DAT_00155bcc int
// GLOBAL s_SE_Crowly_ATTACK_FLY_00155bb0 string
// GLOBAL s_SE_Crowly_HOVERING_00155b78 string

undefined4 func_0015593C(int *param_1)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  if (param_1[0x247] == 0) {
    local_28 = DAT_00155b70;
    local_24 = s_SE_Crowly_ATTACK_FLY_00155bb0;
    fVar8 = DAT_00155b74;
    func_001507D8((int)param_1,&local_28,0);
    iVar4 = DAT_00155bc8;
    if ((uint)param_1[0x238] < (uint)param_1[0x239]) {
      param_1[0x238] = param_1[0x238] + 1;
    }
    else {
      param_1[0x247] = param_1[0x247] + 1;
      param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
      param_1[0x244] = iVar4;
      func_004FABDC((int)param_1,1,0xffffffff,0);
      param_1[0x22f] = 0;
    }
  }
  else if (param_1[0x247] == 1) {
    local_28 = DAT_00155b70;
    local_24 = s_SE_Crowly_HOVERING_00155b78;
    fVar7 = DAT_00155b74;
    func_001507D8((int)param_1,&local_28,0);
    pfVar5 = (float *)(param_1 + 0x23e);
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(pfVar5,pfVar3,(float *)(param_1 + 0xf4));
    param_1[0x23f] = (int)ALBW_AS_U32(fVar7);
    func_00115DC8(pfVar5);
    iVar4 = func_0068C690(pfVar5);
    func_0051D2F4(param_1 + 0xfa,iVar4,DAT_00155b90,*DAT_00155b8c,DAT_00155b94);
    fVar8 = DAT_00155ba0;
    fVar6 = (float)VectorSignedToFloat(param_1[0x22f],(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(*(int *)(param_1[0x104] + 0x14) + 0x10) =
         (DAT_00155b98 * (fVar6 - fVar7)) / DAT_00155b9c + DAT_00155b98;
    if (ALBW_AS_F32(param_1[0xf5]) < ALBW_AS_F32(param_1[0x246]) + fVar8) {
      param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) + ALBW_AS_F32(param_1[0x244]) * DAT_00155ba4));
    }
    piVar1 = DAT_00155bac;
    fVar8 = DAT_00155ba8;
    param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_00155ba8));
    param_1[0xf9] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf9]) * fVar8));
    bVar2 = func_00556B3C(*piVar1);
    if (!bVar2) {
      if ((uint)param_1[0x22f] < 0x78) {
        return 0;
      }
      pfVar3 = (float *)func_00520FC0();
      if ((int)ALBW_AS_U32(((*pfVar3 - ALBW_AS_F32(param_1[2])) * (*pfVar3 - ALBW_AS_F32(param_1[2])) +
               (pfVar3[2] - ALBW_AS_F32(param_1[4])) * (pfVar3[2] - ALBW_AS_F32(param_1[4])))) < DAT_00155bcc) {
        return func_00156024(param_1);
      }
    }
    return func_00657E5C(param_1 + 0x22f,3);
  }
  return 0;
}

