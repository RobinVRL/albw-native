#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001CFEF4(int param_1,undefined4 param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0068C690(float *param_1);
extern float DAT_001d17a8;
extern float DAT_001d17ac;
extern float DAT_001d17b0;
extern undefined4 *DAT_001d17b4;
extern float DAT_001d17b8;
extern float DAT_001d17bc;
extern int DAT_001d17c0;
extern int DAT_001d17d8;
extern char s_SE_Kokko_DAMAGE_001d17dc[];
extern char s_SE_Kokko_V_ANGLY_001d17c4[];

// USA 001D1604 <- EU 001D1604 (Ghidra, non-matching)
// GLOBAL DAT_001d17a8 float
// GLOBAL DAT_001d17ac float
// GLOBAL DAT_001d17b0 float
// GLOBAL DAT_001d17b4 undefined4 *
// GLOBAL DAT_001d17b8 float
// GLOBAL DAT_001d17bc float
// GLOBAL DAT_001d17c0 int
// GLOBAL DAT_001d17d8 int
// GLOBAL s_SE_Kokko_DAMAGE_001d17dc string
// GLOBAL s_SE_Kokko_V_ANGLY_001d17c4 string

undefined4 func_001D1604(int *param_1)

{
  bool bVar1;
  byte bVar2;
  float *pfVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  int iVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define afStack_28 ((float *)(albw_frame + 0x18))
  local_38 = DAT_001d17a8;
  local_34 = DAT_001d17a8;
  fVar6 = DAT_001d17a8;
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(afStack_28,(float *)(param_1 + 0xf4),pfVar3);
  uVar4 = func_0068C690(afStack_28);
  func_00115154(&local_34,&local_38,uVar4);
  fparam_0 = DAT_001d17b0;
  fVar5 = local_38 * DAT_001d17ac;
  param_1[0xf7] = (int)ALBW_AS_U32((local_34 * DAT_001d17ac));
  param_1[0xf9] = (int)ALBW_AS_U32(fVar5);
  if ((((*(char *)((int)param_1 + 0x5db) != '\0') && (bVar1 = func_00588BF0((int)param_1,0), !bVar1)
       ) && (bVar2 = *(char *)((int)param_1 + 0x5d6) + 1, *(byte *)((int)param_1 + 0x5d6) = bVar2,
            9 < bVar2)) && (*(undefined1 *)((int)param_1 + 0x5d6) = 10, (short)param_1[0x175] == 0))
  {
    *(undefined2 *)(param_1 + 0x175) = 500;
    uVar4 = func_00111A64((uint *)*DAT_001d17b4);
    fVar5 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    iVar7 = VectorFloatToUnsigned(DAT_001d17bc + fVar5 * DAT_001d17b8 * fparam_0 * DAT_001d17bc,3);
    param_1[0x16b] = iVar7;
    if (iVar7 == 0) {
      param_1[0x16c] = (int)ALBW_AS_U32(fVar6);
    }
    else {
      fVar6 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x16c] = (int)ALBW_AS_U32((fparam_0 / fVar6));
    }
    param_1[0x16a] = 0;
    func_00588C14((int)param_1,0,1);
    iVar7 = DAT_001d17c0;
    *(undefined1 *)((int)param_1 + 0x391) = 1;
    param_1[0xeb] = iVar7;
  }
  func_001CFEF4((int)param_1,3,fparam_0);
  iVar7 = DAT_001d17d8;
  local_2c = s_SE_Kokko_V_ANGLY_001d17c4;
  local_30 = DAT_001d17d8;
  func_00150A84(param_1,&local_30,0);
  local_2c = s_SE_Kokko_DAMAGE_001d17dc;
  local_30 = iVar7;
  return func_00150A84(param_1,&local_30,0);
}

