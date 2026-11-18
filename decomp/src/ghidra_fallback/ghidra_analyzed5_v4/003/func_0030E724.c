#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_002E1B70(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern uint DAT_0030e9c0;
extern int *DAT_0030e9e0;
extern float DAT_0030e9e4;
extern float DAT_0030e9e8;
extern undefined4 DAT_0030e9ec;
extern char s_Remedy_0030e9c4[];
extern char s_SE_FairyBig_CURE_0030e9cc[];
extern char s_SE_FairyBig_DISAPPEAR_0030e9f0[];

// USA 0030E724 <- EU 0030E700 (Ghidra, non-matching)
// GLOBAL DAT_0030e9c0 uint
// GLOBAL DAT_0030e9e0 int *
// GLOBAL DAT_0030e9e4 float
// GLOBAL DAT_0030e9e8 float
// GLOBAL DAT_0030e9ec undefined4
// GLOBAL s_Remedy_0030e9c4 string
// GLOBAL s_SE_FairyBig_CURE_0030e9cc string
// GLOBAL s_SE_FairyBig_DISAPPEAR_0030e9f0 string

void func_0030E724(int *param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(uint *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_88 (*(int * *)(albw_frame + 0x8))
  #define local_84 (*(int *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(undefined1 *)(albw_frame + 0x58))
  #define local_30 (*(uint *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  uVar1 = DAT_0030e9c0;
  if (*(char *)((int)param_1 + 0x9bb) == param_2) {
    return;
  }
  switch(param_2) {
  case 0:
    if ('\0' < *(char *)((int)param_1 + 0x9ba)) {
      piVar6 = param_1 + 0x263;
      if (param_1[0xd1] == 0) {
        *piVar6 = 0;
        param_1[0x264] = 0;
      }
      else {
        iVar3 = *piVar6;
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x264])) {
          func_00110848(iVar3);
        }
        func_004A1B9C((int *)&local_88,param_1[0xd1],(uint *)s_Remedy_0030e9c4);
        *piVar6 = (int)local_88;
        param_1[0x264] = local_84;
      }
      (**(code **)(*param_1 + 0xac))(param_1,2,0xffffffff);
      local_8c = s_SE_FairyBig_CURE_0030e9cc;
      local_90 = uVar1;
      func_00150A84(param_1,(int *)&local_90,0);
      *(undefined1 *)((int)param_1 + 0x9be) = 0;
      iVar3 = (**(code **)(param_1[0x11e] + 0x40))(param_1 + 0x11e);
      func_002E1B70((int *)(iVar3 + 0x30));
      *(ushort *)(*DAT_0030e9e0 + 0x33e) = *(ushort *)(*DAT_0030e9e0 + 0x33e) & 0xfefc;
    }
    goto switchD_0030e730_caseD_2;
  case 1:
    if ((char)param_1[0x218] == '\0') {
      local_70 = (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
      local_88 = &local_84;
      local_8c = (char *)0x3;
      local_3c = 0;
      local_38 = 0;
      local_90 = 1;
      local_84 = 1;
      local_70 = local_70 | 0xff;
      local_80 = DAT_0030e9e8;
      fStack_7c = DAT_0030e9e4;
      uStack_78 = DAT_0030e9ec;
      fStack_74 = DAT_0030e9e4;
      fVar7 = DAT_0030e9e8;
      fVar8 = DAT_0030e9e4;
      func_0016898C(param_1[0x1ed],&local_90);
      iVar3 = param_1[0x1ed];
      uVar4 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        do {
          iVar5 = *(int *)(iVar3 + 0x14);
          if (uVar4 < *(uint *)(iVar3 + 0xc)) {
            iVar5 = iVar5 + uVar4 * 0x28;
          }
          if (fVar7 <= fVar8) {
            *(float *)(iVar5 + 0xc) = fVar7;
            *(float *)(iVar5 + 8) = fVar7;
          }
          else {
            *(float *)(iVar5 + 0xc) = *(float *)(iVar5 + 0x14);
            *(float *)(iVar5 + 8) = *(float *)(iVar5 + 0x14);
          }
          *(float *)(iVar5 + 0x10) = fVar8;
          *(undefined4 *)(iVar5 + 0x18) = 0;
          *(undefined1 *)(iVar5 + 0x26) = 1;
          *(undefined1 *)(iVar5 + 0x25) = 1;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < *(int *)(iVar3 + 0xc));
      }
      func_00168E9C((int *)param_1[0x1ed],param_1[0x1e8],(int *)0x0);
      param_1[0x26c] = (int)ALBW_AS_U32(fVar8);
      local_2c = s_SE_FairyBig_DISAPPEAR_0030e9f0;
      local_30 = uVar1;
      func_00150A84(param_1,(int *)&local_30,0);
    }
  default:
    goto switchD_0030e730_caseD_2;
  case 3:
    uVar2 = 4;
    break;
  case 4:
    uVar2 = 0xc;
    break;
  case 5:
    uVar2 = 0x14;
    break;
  case 6:
    uVar2 = 0x20;
    break;
  case 7:
    *(undefined1 *)((int)param_1 + 0x9ba) = 0x50;
    goto switchD_0030e730_caseD_2;
  }
  *(undefined1 *)((int)param_1 + 0x9ba) = uVar2;
switchD_0030e730_caseD_2:
  *(char *)((int)param_1 + 0x9bb) = (char)param_2;
  param_1[0x26d] = 0;
  *(undefined1 *)(param_1 + 0x26f) = 0;
  return;
}

