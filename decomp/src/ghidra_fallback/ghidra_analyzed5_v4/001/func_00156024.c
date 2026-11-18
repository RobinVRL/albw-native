#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern float *DAT_00156220;
extern float DAT_00156224;
extern float DAT_00156228;
extern float DAT_0015622c;
extern float DAT_00156230;
extern float DAT_00156234;
extern undefined4 DAT_00156238;
extern undefined4 DAT_0015623c;
extern int *DAT_00156240;
extern float DAT_00156244;
extern char s_SE_Crowly_V_ATTACK_0015625c[];
extern char s_SE_Kyune_V_ATTACK_00156248[];

// USA 00156024 <- EU 00156028 (Ghidra, non-matching)
// GLOBAL DAT_00156220 float *
// GLOBAL DAT_00156224 float
// GLOBAL DAT_00156228 float
// GLOBAL DAT_0015622c float
// GLOBAL DAT_00156230 float
// GLOBAL DAT_00156234 float
// GLOBAL DAT_00156238 undefined4
// GLOBAL DAT_0015623c undefined4
// GLOBAL DAT_00156240 int *
// GLOBAL DAT_00156244 float
// GLOBAL s_SE_Crowly_V_ATTACK_0015625c string
// GLOBAL s_SE_Kyune_V_ATTACK_00156248 string

undefined4 func_00156024(int *param_1)

{
  byte bVar1;
  float *pfVar2;
  uint unaff_r7;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define fStack_94 (*(float *)(albw_frame + 0x1c))
  #define fStack_90 (*(float *)(albw_frame + 0x20))
  #define local_8c ((uint *)(albw_frame + 0x24))
  #define local_84 (*(undefined4 * *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(uint *)(albw_frame + 0x44))
  #define local_38 (*(undefined4 *)(albw_frame + 0x78))
  #define local_34 (*(undefined1 *)(albw_frame + 0x7c))
  #define local_30 (*(float *)(albw_frame + 0x80))
  #define local_2c (*(char * *)(albw_frame + 0x84))
  #define fStack_28 (*(float *)(albw_frame + 0x88))
  param_1[0x247] = 0;
  pfVar2 = (float *)func_00520FC0();
  func_00115D70(&local_30,DAT_00156220,DAT_00156224);
  local_98 = local_30;
  fStack_94 = ALBW_AS_F32(local_2c);
  fStack_90 = fStack_28;
  func_00115C54(&local_30,pfVar2,&local_98);
  local_a4 = local_30;
  local_a0 = ALBW_AS_F32(local_2c);
  local_9c = fStack_28;
  func_00115C70(&local_a4,&local_a4,(float *)(param_1 + 0xf4));
  fVar8 = local_a0;
  fVar4 = SQRT(local_a4 * local_a4 + local_9c * local_9c) * DAT_00156228;
  iVar6 = (int)fVar4;
  fVar7 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar7 == fVar4) << 0x1e;
  if ((!SUB41(uVar3 >> 0x1e,0)) &&
     (uVar3 = in_fpscr & 0xfffffff | (uint)(DAT_0015622c == fVar4) << 0x1e |
              (uint)(fVar4 <= DAT_0015622c) << 0x1d, bVar1 = (byte)(uVar3 >> 0x18),
     !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
    iVar6 = iVar6 + 1;
  }
  local_a0 = DAT_0015622c;
  fVar7 = DAT_0015622c;
  func_00115DC8(&local_a4);
  fVar4 = DAT_00156230;
  fVar5 = (float)VectorSignedToFloat(iVar6,(byte)(uVar3 >> 0x15) & 3);
  param_1[0xf7] = (int)ALBW_AS_U32((local_a4 * DAT_00156230));
  param_1[0xf9] = (int)ALBW_AS_U32((local_9c * fVar4));
  param_1[0xf8] = (int)ALBW_AS_U32((fVar8 / fVar5));
  local_78 = DAT_00156234;
  param_1[0x239] = iVar6;
  if (iVar6 == 0) {
    param_1[0x23a] = (int)ALBW_AS_U32(fVar7);
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(iVar6,(byte)(uVar3 >> 0x15) & 3);
    param_1[0x23a] = (int)ALBW_AS_U32((local_78 / fVar8));
  }
  param_1[0x238] = 0;
  local_84 = &local_80;
  local_8c[1] = 3;
  local_34 = 1;
  local_8c[0] = 1;
  local_38 = 10;
  local_80 = 2;
  local_74 = DAT_00156238;
  local_6c = unaff_r7 | 0xff;
  local_70 = local_78;
  local_7c = fVar7;
  func_0016898C(param_1[0x104],local_8c);
  *(undefined4 *)(*(int *)(param_1[0x104] + 0x14) + 0x10) = DAT_0015623c;
  iVar6 = func_00588BE4((int)param_1);
  local_30 = DAT_00156244;
  if (iVar6 != *DAT_00156240) {
    local_2c = s_SE_Crowly_V_ATTACK_0015625c;
    return func_00150A84(param_1,(int *)&local_30,0);
  }
  local_2c = s_SE_Kyune_V_ATTACK_00156248;
  return func_00150A84(param_1,(int *)&local_30,0);
}

