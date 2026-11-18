#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110848(int param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0018B718(uint param_1);
extern int func_00290320(int param_1,int param_2);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern void func_004D08B8(int param_1,float fparam_0);
extern int func_004F8DF4(int *param_1,uint param_2);
extern int func_004FA8A0(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051228C(int *param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern float DAT_00329700;
extern int *DAT_00329704;
extern float DAT_00329708;
extern float DAT_0032970c;
extern float DAT_00329710;
extern float DAT_00329714;
extern int DAT_00329718;
extern int DAT_00329734;
extern float DAT_00329738;
extern undefined DAT_0032973c;
extern int *DAT_00329744;
extern float DAT_00329748;
extern float DAT_0032974c;
extern float DAT_00329750;
extern undefined DAT_00329754;
extern uint *DAT_00329760;
extern undefined4 *DAT_00329764;
extern undefined4 DAT_00329768;
extern float DAT_003298b0;
extern uint *DAT_003298b4;
extern undefined4 *DAT_003298b8;
extern int DAT_003298bc;
extern char s_SE_BlackShueyes_MELT_0032971c[];
extern char s__Restore_00329757[];
extern undefined4 _DAT_00329754;

// USA 003292DC <- EU 003292B8 (Ghidra, non-matching)
// GLOBAL DAT_00329700 float
// GLOBAL DAT_00329704 int *
// GLOBAL DAT_00329708 float
// GLOBAL DAT_0032970c float
// GLOBAL DAT_00329710 float
// GLOBAL DAT_00329714 float
// GLOBAL DAT_00329718 int
// GLOBAL DAT_00329734 int
// GLOBAL DAT_00329738 float
// GLOBAL DAT_0032973c undefined
// GLOBAL DAT_00329744 int *
// GLOBAL DAT_00329748 float
// GLOBAL DAT_0032974c float
// GLOBAL DAT_00329750 float
// GLOBAL DAT_00329754 undefined
// GLOBAL DAT_00329760 uint *
// GLOBAL DAT_00329764 undefined4 *
// GLOBAL DAT_00329768 undefined4
// GLOBAL DAT_003298b0 float
// GLOBAL DAT_003298b4 uint *
// GLOBAL DAT_003298b8 undefined4 *
// GLOBAL DAT_003298bc int
// GLOBAL s_SE_BlackShueyes_MELT_0032971c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003292DC(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  if (*(int *)(param_2 + 0x2c) != 0) {
    switch(*(undefined1 *)(*(int *)(param_2 + 0x2c) + 1)) {
    case 1:
    case 0xd:
      cVar1 = (char)param_1[0x2eb];
      if (((cVar1 == '\r' || cVar1 == '\x10') || (cVar1 == '\x11' || cVar1 == '\x12')) ||
         (param_1[0x323] != 0)) {
        return 0;
      }
      fVar11 = DAT_00329700;
      if ((*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x01') &&
         (uVar2 = func_0055696C(*DAT_00329704,8), 2 < uVar2)) {
        fVar11 = DAT_00329708;
      }
      local_38 = DAT_00329718;
      fVar8 = DAT_00329710;
      fVar10 = DAT_0032970c;
      fVar11 = *(float *)(param_1[0x2a2] + 0x74) - fVar11;
      param_1[0x315] = (int)ALBW_AS_U32((((fVar11 - DAT_0032970c) / DAT_00329710) * DAT_00329714));
      local_34 = s_SE_BlackShueyes_MELT_0032971c;
      func_001507D8((int)param_1,&local_38,0);
      if ((int)ALBW_AS_U32(fVar11) < DAT_00329734) {
        if (*(char *)(param_1[0x144] + 4) == '\a') {
          func_004F8DF4(param_1,0);
        }
        fVar11 = DAT_00329738;
        func_00665670(param_1 + 0x2ea,0xd);
      }
      else {
        cVar1 = (char)param_1[0x2eb];
        if (cVar1 != '\x0f') {
          if (*(char *)((int)param_1 + 0xc9b) == '\0') {
            iVar3 = 0xd;
          }
          else {
            iVar3 = 0xe;
          }
          func_004FC07C((int)param_1,iVar3,0x10,0);
          if (cVar1 == '\x05' || cVar1 == '\x06') {
            func_00665670(param_1 + 0x2ea,0xf);
          }
        }
      }
      iVar3 = param_1[0x307];
      if (((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) != param_1[0x308])) ||
         (((*(uint *)(iVar3 + 0x3c) & 4) == 0 && (*(uint *)(iVar3 + 0x3c) & 0x40) == 0 &&
          (((iVar6 = *(int *)(iVar3 + 0x20), iVar6 == 0 ||
            (*(int *)(iVar3 + 0x24) != *(int *)(iVar6 + 0xc))) || (*(int *)(iVar6 + 4) < 1)))))) {
        if (param_1[0xd1] == 0) {
          param_1[0x307] = 0;
          param_1[0x308] = 0;
        }
        else {
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x308])) {
            func_00110848(iVar3);
          }
          func_004A1B9C((int *)&local_48,param_1[0xd1],(uint *)&DAT_0032973c);
          param_1[0x307] = (int)ALBW_AS_U32(local_48);
          param_1[0x308] = (int)ALBW_AS_U32(local_44);
        }
      }
      iVar3 = func_0052FBA0(*DAT_00329744 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      if (iVar3 != 0) {
        local_44 = *(float *)(iVar3 + 0x3d8);
        local_4c = *(float *)(iVar3 + 0x3d0);
        fVar7 = (local_4c - ALBW_AS_F32(param_1[0xf4])) * (local_4c - ALBW_AS_F32(param_1[0xf4])) +
                (local_44 - ALBW_AS_F32(param_1[0xf6])) * (local_44 - ALBW_AS_F32(param_1[0xf6]));
        fVar9 = ((*(float *)(param_1[0x2a2] + 0x74) - fVar10) / fVar8) * ALBW_AS_F32(param_1[0x311]);
        fVar8 = fVar9 * fVar9;
        if (fVar8 <= fVar7) {
          local_48 = ALBW_AS_F32(param_1[0xf5]);
        }
        else {
          if (fVar10 != fVar8) {
            fVar10 = (fVar7 - fVar10) / (fVar8 - fVar10);
          }
          local_48 = ALBW_AS_F32(param_1[0xf5]) + (DAT_00329748 - fVar10) * fVar9 * DAT_0032974c;
        }
        iVar3 = param_1[0x307];
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x308])) {
          func_004A2F38(iVar3,&local_4c);
        }
      }
      func_004D08B8(param_1[0x2a2],fVar11);
      if (param_1[0x2a0] != 0) {
        func_004D08B8(param_1[0x2a0],fVar11);
      }
      *(undefined1 *)((int)param_1 + 0xc95) = 1;
      break;
    case 2:
      fVar11 = *(float *)(param_1[0x2a2] + 0x74) + DAT_00329750;
      if (_DAT_00329754 < (int)ALBW_AS_U32(fVar11)) {
        fVar11 = DAT_00329710;
      }
      if (param_1[0xd1] != 0) {
        func_004A1B9C((int *)&local_48,param_1[0xd1],(uint *)(s__Restore_00329757 + 1));
      }
      func_004D08B8(param_1[0x2a2],fVar11);
      if (param_1[0x2a0] != 0) {
        func_004D08B8(param_1[0x2a0],fVar11);
      }
      piVar4 = (int *)func_0052FBA0(*DAT_00329744 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      if (piVar4 != (int *)0x0) {
        if (((*DAT_00329760 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00329760), iVar3 != 0))
        {
          *DAT_00329764 = DAT_00329768;
        }
        iVar3 = (**(code **)*piVar4)(piVar4,DAT_00329764);
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        if (piVar4 != (int *)0x0) {
          func_0051228C(piVar4,1);
        }
      }
      break;
    case 3:
      puVar5 = (undefined4 *)func_0052FBA0(*DAT_00329744 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      if (puVar5 != (undefined4 *)0x0) {
        if (((*DAT_003298b4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003298b4), iVar3 != 0))
        {
          *DAT_003298b8 = DAT_00329768;
        }
        iVar3 = (**(code **)*puVar5)(puVar5,DAT_003298b8);
        if (iVar3 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar5 != (undefined4 *)0x0) {
          func_0018B718((uint)puVar5);
        }
      }
      break;
    case 5:
    case 0xe:
      func_00290320(*DAT_00329704,-(int)*(short *)param_1[0xe8]);
      break;
    case 8:
      func_00291A38(*DAT_00329704,param_1 + 0xf4,DAT_003298b0);
      break;
    case 9:
      func_004FA8A0(param_2);
      break;
    case 0xb:
      cVar1 = *(char *)(DAT_003298bc + (int)param_1);
      if (cVar1 == '\r' || cVar1 == '\x10') {
        return 0;
      }
      if (cVar1 == '\x11' || cVar1 == '\x12') {
        return 0;
      }
      if (cVar1 == '\x05' || cVar1 == '\x06') {
        func_00665670(param_1 + 0x2ea,0xf);
      }
    }
  }
  return 1;
}

