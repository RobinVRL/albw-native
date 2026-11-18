#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0023C710(int param_1,int param_2);
extern int func_0023CB94(int param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_00588F14(int param_1);
extern undefined4 DAT_0023cf74;
extern int *DAT_0023cf78;
extern float *DAT_0023cf7c;
extern int *DAT_0023cf90;
extern float DAT_0023cf94;
extern char s_SE_Pot_BREAK_0023cf80[];

// USA 0023CD54 <- EU 0023CD54 (Ghidra, non-matching)
// GLOBAL DAT_0023cf74 undefined4
// GLOBAL DAT_0023cf78 int *
// GLOBAL DAT_0023cf7c float *
// GLOBAL DAT_0023cf90 int *
// GLOBAL DAT_0023cf94 float
// GLOBAL s_SE_Pot_BREAK_0023cf80 string

undefined4 func_0023CD54(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  float *in_r2;
  float *in_r3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(int * *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(undefined1 *)(albw_frame + 0x28))
  #define pfStack_20 (*(float * *)(albw_frame + 0x30))
  #define pcStack_1c (*(char * *)(albw_frame + 0x34))
  iVar4 = 0;
  if ((char)param_1[0x13f] == '\0') {
    local_48 = 0.0;
    local_40 = 0.0;
    local_38 = DAT_0023cf74;
    local_34 = 0xff;
    uStack_30 = 0;
    local_44 = param_1 + 0x148;
    local_28 = 0;
    local_3c = param_1[0xb3];
    in_r2 = (float *)0x1000;
    local_2c = param_1[0x140];
    uVar1 = func_004A8F40(*DAT_0023cf78,(int *)&local_48,0x1000);
    if (uVar1 != 0) {
      in_r2 = (float *)0x0;
      pfStack_20 = DAT_0023cf7c;
      pcStack_1c = s_SE_Pot_BREAK_0023cf80;
      in_r3 = DAT_0023cf7c;
      func_00150A84(param_1,(int *)&pfStack_20,0);
      (**(code **)(param_1[200] + 0x30))(param_1 + 200);
      func_0023C710((int)param_1,1);
    }
    goto LAB_0023cf34;
  }
  if (((((char)param_1[0x13f] != '\x01') || (iVar2 = param_1[0x151], iVar2 == 0)) ||
      (in_r2 = (float *)param_1[0x152], *(float **)(iVar2 + 0x1c) != in_r2)) ||
     (((*(uint *)(iVar2 + 0x3c) & 4) == 0 && (*(uint *)(iVar2 + 0x3c) & 0x40) == 0 &&
      (((iVar3 = *(int *)(iVar2 + 0x20), iVar3 == 0 ||
        (in_r2 = *(float **)(iVar3 + 0xc), *(float **)(iVar2 + 0x24) != in_r2)) ||
       (*(int *)(iVar3 + 4) < 1)))))) goto LAB_0023cf34;
  in_r2 = (float *)func_00588F14(*DAT_0023cf90);
  func_00115C70(&local_48,(float *)(param_1 + 0xf4),in_r2);
  iVar2 = param_1[0x151];
  fVar5 = SQRT(local_48 * local_48 + ALBW_AS_F32(local_44) * ALBW_AS_F32(local_44) + local_40 * local_40) *
          DAT_0023cf94;
  if ((iVar2 != 0) && (in_r2 = (float *)param_1[0x152], *(float **)(iVar2 + 0x1c) == in_r2)) {
    if ((*(uint *)(iVar2 + 0x3c) & 4) == 0 && (*(uint *)(iVar2 + 0x3c) & 0x40) == 0) {
      iVar3 = *(int *)(iVar2 + 0x20);
      if (iVar3 != 0) {
        in_r2 = *(float **)(iVar2 + 0x24);
        in_r3 = *(float **)(iVar3 + 0xc);
        if (in_r2 == in_r3) {
          if (*(int *)(iVar3 + 4) < 1) goto LAB_0023cf34;
          goto LAB_0023cf24;
        }
      }
    }
    else {
LAB_0023cf24:
      iVar4 = *(int *)(iVar2 + 0x20);
    }
  }
  if (iVar4 != 0) {
    *(float *)(iVar4 + 0x214) = fVar5;
    *(float *)(iVar4 + 0x210) = fVar5;
  }
LAB_0023cf34:
  func_0023CB94((int)param_1);
  if ((int *)param_1[0x13e] == (int *)0x0) {
    return 0;
  }
  func_00169A80((int *)param_1[0x13e],extraout_r1,in_r2,(int *)in_r3);
  return func_00168E9C((int *)param_1[0x13e],param_1[0x13d],(int *)0x0);
}

