#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002906A4(int param_1,int param_2,undefined4 param_3,int param_4,float fparam_0);
extern int func_002AB1CC(uint param_1,int param_2,uint param_3);
extern int func_0037BD10(int *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_004F9FC4(int param_1,int param_2);
extern int func_00662638(undefined4 *param_1,undefined1 param_2);
extern int func_0066277C(undefined4 *param_1,int param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002b45b8;
extern float DAT_002b45bc;
extern int DAT_002b45c0;
extern int DAT_002b45c4;
extern int *DAT_002b45c8;
extern undefined DAT_002b45cc;
extern int DAT_002b460c;
extern char s_SE_PL_Sword_HIT_EN_BOUNCE_002b45f0[];
extern char s__SE_Salamander_FireExtinction_002b45cf[];
extern undefined4 _DAT_002b45cc;

// USA 002B4350 <- EU 002B432C (Ghidra, non-matching)
// GLOBAL DAT_002b45b8 float
// GLOBAL DAT_002b45bc float
// GLOBAL DAT_002b45c0 int
// GLOBAL DAT_002b45c4 int
// GLOBAL DAT_002b45c8 int *
// GLOBAL DAT_002b45cc undefined
// GLOBAL DAT_002b460c int
// GLOBAL s_SE_PL_Sword_HIT_EN_BOUNCE_002b45f0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint func_002B4350(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  piVar1 = DAT_002b45c8;
  iVar3 = DAT_002b45c4;
  cVar2 = *(char *)(param_3 + 0x24);
  if (param_2 == 3) {
    return 0;
  }
  if ((cVar2 == '\x05' || cVar2 == '\b') && (*(char *)(param_1[0x108] + 0x23) == '\x01')) {
    if (*DAT_002b45c8 == 0) {
      return 0;
    }
    iVar3 = func_0068C690((float *)(param_1[0x10f] + 8));
    func_002906A4(*piVar1,0,iVar3,-(uint)*(ushort *)(param_1[0x108] + 0x30),ALBW_AS_F32(_DAT_002b45cc));
    return 0;
  }
  if (cVar2 != '\v') {
    if ((cVar2 == '\x02') && (*(char *)(param_1[0x108] + 0x23) == '\x01')) {
      if ((char)param_1[0x23c] == '\0') {
        local_3c = s__SE_Salamander_FireExtinction_002b45cf + 1;
        local_40 = DAT_002b45c4;
        iVar3 = DAT_002b45c0;
        fVar5 = DAT_002b45b8;
        fVar6 = DAT_002b45bc;
        func_00150A84(param_1,&local_40,0);
        func_0037BD10(param_1 + 0x22f,8,fVar6,fVar5);
        param_1[0x254] = 5;
        param_1[0x255] = iVar3;
        param_1[0x253] = 0;
      }
      *(undefined1 *)((int)param_1 + 0x985) = 0;
    }
    else {
      if (*(char *)(param_1[0x108] + 0x23) == '\x01') {
        param_1[0x260] = 0x18;
        func_004F9FC4((int)param_1,param_1[0x10f]);
        local_3c = s_SE_PL_Sword_HIT_EN_BOUNCE_002b45f0;
        local_40 = iVar3;
        func_00150A84(param_1,&local_40,0);
        return 0;
      }
      if ((*(char *)(param_3 + 0x25) == '\x01') && (cVar2 != '\x0f')) {
        if ((char)param_1[0x23c] != '\x02') {
          return 0;
        }
        func_00662638(param_1 + 0x23b,5);
        return 0;
      }
    }
    if (((char)param_1[0x23c] == '\x03') && (0 < *(short *)(DAT_002b460c + (int)param_1))) {
      return 0;
    }
    uVar4 = func_002AB1CC(param_2 & 0xff,-1,1);
    param_1[0x168] = param_1[0x168] | 0x80;
    return uVar4;
  }
  cVar2 = (char)param_1[0x23c];
  iVar3 = DAT_002b45c0;
  fVar5 = DAT_002b45b8;
  fVar6 = DAT_002b45bc;
  if (cVar2 == '\0') {
    local_3c = s__SE_Salamander_FireExtinction_002b45cf + 1;
    local_40 = DAT_002b45c4;
    func_00150A84(param_1,&local_40,0);
    cVar2 = (char)param_1[0x23c];
    if (cVar2 == '\0') goto LAB_002b4434;
  }
  if (cVar2 != '\x02') {
    return 0;
  }
LAB_002b4434:
  func_0037BD10(param_1 + 0x22f,8,fVar6,fVar5);
  func_0066277C(param_1 + 0x23b,1);
  param_1[0x254] = 5;
  param_1[0x255] = iVar3;
  param_1[0x253] = 0;
  return 0;
}

