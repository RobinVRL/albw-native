#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001CFB38(int param_1,undefined4 param_2);
extern int func_001D0150(int *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_001D1598(int param_1);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052107C(int param_1);
extern float func_00521298(int param_1);
extern int func_0065C598(undefined4 *param_1,undefined1 param_2);
extern int DAT_001d0fd0;
extern float DAT_001d0fd4;
extern int *DAT_001d0fd8;
extern float DAT_001d0fdc;
extern float DAT_001d0fe0;
extern float DAT_001d0fe4;
extern float DAT_001d0fe8;
extern int DAT_001d0fec;
extern float DAT_001d0ff0;
extern int DAT_001d0ff4;
extern undefined DAT_001d1010;
extern int DAT_001d1030;
extern int *DAT_001d1034;
extern float DAT_001d1038;
extern float DAT_001d103c;
extern undefined4 DAT_001d1040;
extern char s_SE_Kokko_V_MOVE_ANGLY_001d0ff8[];
extern char s__fff_SE_Kokko_V_MOVE_ANGLY_L_001d1013[];
extern undefined4 _DAT_001d1010;

// USA 001D0C54 <- EU 001D0C54 (Ghidra, non-matching)
// GLOBAL DAT_001d0fd0 int
// GLOBAL DAT_001d0fd4 float
// GLOBAL DAT_001d0fd8 int *
// GLOBAL DAT_001d0fdc float
// GLOBAL DAT_001d0fe0 float
// GLOBAL DAT_001d0fe4 float
// GLOBAL DAT_001d0fe8 float
// GLOBAL DAT_001d0fec int
// GLOBAL DAT_001d0ff0 float
// GLOBAL DAT_001d0ff4 int
// GLOBAL DAT_001d1010 undefined
// GLOBAL DAT_001d1030 int
// GLOBAL DAT_001d1034 int *
// GLOBAL DAT_001d1038 float
// GLOBAL DAT_001d103c float
// GLOBAL DAT_001d1040 undefined4
// GLOBAL s_SE_Kokko_V_MOVE_ANGLY_001d0ff8 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001D0C54(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  func_001D1598((int)param_1);
  piVar1 = DAT_001d0fd8;
  param_1[0x171] = DAT_001d0fd0;
  fVar5 = DAT_001d0fe8;
  fVar7 = DAT_001d0fdc;
  if (*(byte *)((int)param_1 + 0x5d7) == 0) {
    fVar7 = DAT_001d0fd4;
    fVar5 = DAT_001d0fdc;
    if ((char)param_1[0x177] == '\0') {
      fVar6 = func_00521298(param_1);
      bVar2 = (int)ALBW_AS_U32(fVar6) < DAT_001d1030;
      *(bool *)(param_1 + 0x177) = bVar2;
      if (bVar2) goto LAB_001d0ea8;
      if ((uint)param_1[0x168] <= (uint)param_1[0x167]) {
LAB_001d0e94:
        *(undefined1 *)(param_1 + 0x177) = 1;
        goto LAB_001d0ea8;
      }
      param_1[0x167] = param_1[0x167] + 1;
      bVar2 = func_0052107C((int)param_1);
      if (bVar2) goto LAB_001d0e94;
      if ((char)param_1[0x177] != '\0') goto LAB_001d0ea8;
    }
    else {
LAB_001d0ea8:
      func_0051D2F4(param_1 + 0x16d,0x20000000,DAT_001d1034[-1],*DAT_001d1034,DAT_001d1038);
    }
    func_004D8240((float *)(param_1 + 0xf7),param_1[0x16d],param_1[0xfa],ALBW_AS_F32(param_1[0x171]));
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    if (((char)param_1[0x177] != '\0') &&
       (ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[0x165]) + DAT_001d103c)) {
      func_001CFB38((int)param_1,DAT_001d1040);
      if ((uint)param_1[0x167] < (uint)param_1[0x168]) {
        param_1[0x167] = param_1[0x167] + 1;
        bVar2 = func_0052107C((int)param_1);
        if ((!bVar2) &&
           (iVar3 = func_00520FC0(), *(float *)(iVar3 + 4) + fVar5 <= ALBW_AS_F32(param_1[0xf5])))
        goto LAB_001d0f88;
      }
      param_1[0xf8] = (int)ALBW_AS_U32(fVar7);
      func_0065C598(param_1 + 0x13f,8);
    }
LAB_001d0f88:
    if ((uint)param_1[0x167] < (uint)param_1[0x168]) {
      param_1[0x167] = param_1[0x167] + 1;
      return 0;
    }
    iVar3 = func_0051E6D0(*piVar1,(float *)(param_1 + 0xf4),fVar5);
    if (iVar3 != 0) {
      return 0;
    }
    goto LAB_001d0fc0;
  }
  fVar6 = (float)VectorSignedToFloat(*(byte *)((int)param_1 + 0x5d7) - 1,
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (fVar6 < DAT_001d0fd4) {
    fVar6 = DAT_001d0fd4;
  }
  uVar4 = VectorFloatToUnsigned(fVar6,3);
  uVar4 = uVar4 & 0xff;
  fVar6 = DAT_001d0fe0;
  if ((uVar4 == 1) || (fVar6 = DAT_001d0fe4, uVar4 == 2)) {
    fVar5 = fVar6;
    param_1[0x171] = (int)ALBW_AS_U32(fVar5);
LAB_001d0ce0:
    if (*(char *)((int)param_1 + 0x5df) == '\x03') {
      param_1[0x171] = (int)ALBW_AS_U32((fVar5 * DAT_001d0ff0));
    }
  }
  else {
    if (uVar4 != 3) {
      param_1[0x171] = (int)ALBW_AS_U32(DAT_001d0fe8);
      goto LAB_001d0ce0;
    }
    if (*(char *)((int)param_1 + 0x5df) == '\x04') {
      iVar3 = *(int *)(DAT_001d0fec + (uint)*(byte *)(param_1 + 0x176) * 0x14 + 0x10);
LAB_001d0d34:
      param_1[0x171] = iVar3;
    }
    else {
      iVar3 = DAT_001d0fec + (uint)*(byte *)(param_1 + 0x176) * 0x14;
      if (*(char *)((int)param_1 + 0x5df) == '\x03') {
        iVar3 = *(int *)(iVar3 + 0xc);
        goto LAB_001d0d34;
      }
      param_1[0x171] = *(int *)(iVar3 + 8);
    }
  }
  func_004D8240((float *)(param_1 + 0xf7),param_1[0x16d],param_1[0xfa],ALBW_AS_F32(param_1[0x171]));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  iVar3 = func_0051E6D0(*piVar1,(float *)(param_1 + 0xf4),fVar7);
  local_30 = DAT_001d0ff4;
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x177) = 1;
    if (*(char *)((int)param_1 + 0x5df) == '\x03') {
      local_2c = s__fff_SE_Kokko_V_MOVE_ANGLY_L_001d1013 + 5;
      func_001507D8((int)param_1,&local_30,0);
    }
    else {
      local_2c = s_SE_Kokko_V_MOVE_ANGLY_001d0ff8;
      func_001507D8((int)param_1,&local_30,0);
    }
    return func_001D0150(param_1,7,ALBW_AS_F32((*(undefined4 *)((char *)&s__fff_SE_Kokko_V_MOVE_ANGLY_L_001d1013 + 1))),ALBW_AS_F32(_DAT_001d1010));
  }
  if (((uint)param_1[0x167] < (uint)param_1[0x168]) &&
     (param_1[0x167] = param_1[0x167] + 1, (char)param_1[0x177] == '\0')) {
    return 0;
  }
LAB_001d0fc0:
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  return 0;
}

