#include "ghidra_types.h"

extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_0028F7E4(int param_1);
extern int func_00297298(int param_1,int param_2);
extern int func_003613E4(int param_1,undefined1 param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004DE944(int *param_1);
extern int func_004DEB70(int param_1);
extern int func_004DEE88(int param_1);
extern int func_004DF164(int param_1);
extern int func_004DF62C(int param_1);
extern int func_004DF890(int param_1);
extern int func_004DFB2C(int param_1,int param_2);
extern int *DAT_004de054;
extern int *DAT_004de058;
extern int *DAT_004de05c;
extern int *DAT_004de060;
extern int *DAT_004de064;
extern int *DAT_004de068;

// USA 004DDBD0 <- EU 004DDBA8 (Ghidra, non-matching)
// GLOBAL DAT_004de054 int *
// GLOBAL DAT_004de058 int *
// GLOBAL DAT_004de05c int *
// GLOBAL DAT_004de060 int *
// GLOBAL DAT_004de064 int *
// GLOBAL DAT_004de068 int *

undefined4 func_004DDBD0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  float in_s0;
  
  iVar2 = param_1[0x264];
  if (param_1[0x263] != iVar2) {
    param_1[0x263] = iVar2;
    param_1[0x265] = 0;
  }
  piVar1 = DAT_004de068;
  switch(param_2) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x853) = 7;
    *(undefined1 *)((int)param_1 + 0x855) = 7;
    return 1;
  case 1:
    if (iVar2 == 0) {
      if (param_1[0x265] == 0) {
        func_004DFB2C((int)param_1,1);
        param_1[0x22b] = param_1[0x22b] | 0x1000;
        (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
        func_0036720C((int)(param_1 + 0x267),0x3c,0x3c,0x3c,0,3,1);
        param_1[0x265] = param_1[0x265] + 1;
        func_00297298(*DAT_004de054,0x3c);
        return 0;
      }
      if ((short)param_1[0x26b] != 0) {
        return 0;
      }
      if (*(short *)((int)param_1 + 0x9ae) == 0) {
        return 0;
      }
      func_004AD9E8(*DAT_004de058,3,0,1,in_s0);
      func_003613E4(*DAT_004de05c,0);
    }
    else {
      if (iVar2 == 1) {
        iVar2 = func_004DE944(param_1);
        goto joined_r0x004ddea0;
      }
      if (iVar2 != 2) {
joined_r0x004ddf38:
        if (iVar2 != 3) {
          return 0;
        }
        goto LAB_004ddef8;
      }
      if (param_1[0x265] == 0) {
        func_0036720C((int)(param_1 + 0x267),0x3c,0x82,0x3c,1,3,1);
        param_1[0x265] = param_1[0x265] + 1;
        return 0;
      }
      if ((short)param_1[0x26b] != 0) {
        return 0;
      }
      if (*(short *)((int)param_1 + 0x9ae) == 0) {
        return 0;
      }
      func_004AD9E8(*DAT_004de058,3,0,0,in_s0);
      iVar2 = *(int *)(*DAT_004de060 + 0x18);
      if (iVar2 != 0) {
        func_003613E4(*DAT_004de05c,1);
        func_001212EC(iVar2,param_1 + 0x275,0,0);
        func_004DFB2C((int)param_1,0);
        param_1[0x22b] = param_1[0x22b] & 0xffffefff;
      }
    }
    goto LAB_004ddfc8;
  case 2:
    *(undefined1 *)((int)param_1 + 0x853) = 8;
    *(undefined1 *)((int)param_1 + 0x855) = 8;
    break;
  case 3:
    *(undefined1 *)((int)param_1 + 0x853) = 5;
    *(undefined1 *)((int)param_1 + 0x855) = 6;
    return 1;
  case 4:
    *(undefined1 *)((int)param_1 + 0x853) = 10;
    *(undefined1 *)((int)param_1 + 0x855) = 0xb;
    return 1;
  case 5:
    if (iVar2 == 0) {
      iVar2 = func_004DEB70((int)param_1);
joined_r0x004ddea0:
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_004ddfc8;
    }
    if (iVar2 != 1) {
      return 0;
    }
    goto LAB_004ddef8;
  case 6:
    break;
  case 7:
    iVar2 = func_004DEE88((int)param_1);
    goto joined_r0x004ddef4;
  case 8:
    iVar2 = func_004DF164((int)param_1);
    goto joined_r0x004ddef4;
  case 9:
    iVar2 = func_004DF62C((int)param_1);
joined_r0x004ddef4:
    if (iVar2 == 0) {
      return 0;
    }
LAB_004ddef8:
    param_1[0x264] = 0;
    break;
  case 10:
    iVar2 = func_004DF890((int)param_1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x265] = 0;
    break;
  case 0xb:
    if (iVar2 == 0) {
      func_0036720C((int)(param_1 + 0x267),0x3c,0x3c,0x3c,1,3,1);
      iVar2 = param_1[0x264] + 1;
LAB_004ddf70:
      param_1[0x264] = iVar2;
      return 0;
    }
    if (iVar2 == 1) {
      if ((short)param_1[0x26b] != 0) {
        return 0;
      }
      if (*(short *)((int)param_1 + 0x9ae) == 0) {
        return 0;
      }
      iVar2 = 2;
      goto LAB_004ddf70;
    }
    if (iVar2 != 2) goto joined_r0x004ddf38;
    if (*(int *)(*DAT_004de060 + 0x18) != 0) {
      func_001212EC(*(int *)(*DAT_004de060 + 0x18),param_1 + 0x275,0,0);
    }
LAB_004ddfc8:
    param_1[0x264] = param_1[0x264] + 1;
switchD_004ddbdc_default:
    return 0;
  case 0xc:
    func_0028F7E4(*DAT_004de05c);
    break;
  case 0xd:
    param_1[0x27b] = param_1[0x231];
    param_1[0x27a] = param_1[0x232];
    param_1[0x22b] = param_1[0x22b] | 0x1000;
    param_1[0x231] = *DAT_004de064;
    param_1[0x232] = *piVar1;
    break;
  case 0xe:
    param_1[0x22b] = param_1[0x22b] & 0xffffefff;
    param_1[0x231] = param_1[0x27b];
    param_1[0x232] = param_1[0x27a];
    break;
  default:
    goto switchD_004ddbdc_default;
  }
  return 1;
}

