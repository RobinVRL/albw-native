// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014F0B0(int param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001DA26C(int param_1);
extern int func_001DA348(int param_1,float *param_2,float *param_3,int param_4);
extern int func_001DA898(uint param_1,int param_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004356B4(int *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_001daed0;
extern uint DAT_001daed4;
extern int *DAT_001daed8;
extern float DAT_001daedc;
extern undefined4 DAT_001daee0;
extern undefined4 DAT_001daee4;
extern undefined4 DAT_001daee8;
extern char s_SE_SwordBeam_MOVE_001daebc[];

// USA 001DAC68 <- EU 001DAC68 (Ghidra, non-matching)
// GLOBAL DAT_001daed0 float
// GLOBAL DAT_001daed4 uint
// GLOBAL DAT_001daed8 int *
// GLOBAL DAT_001daedc float
// GLOBAL DAT_001daee0 undefined4
// GLOBAL DAT_001daee4 undefined4
// GLOBAL DAT_001daee8 undefined4
// GLOBAL s_SE_SwordBeam_MOVE_001daebc string

int * func_001DAC68(int *param_1)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(int * *)(albw_frame + 0x4))
  #define local_48 (*(int * *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x20))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(char * *)(albw_frame + 0x2c))
  fVar2 = DAT_001daed0;
  local_24 = s_SE_SwordBeam_MOVE_001daebc;
  local_28 = DAT_001daed0;
  func_001507D8((int)param_1,(int *)&local_28,0);
  iVar5 = 0;
  if (param_1[0x103] == 0) {
    func_0014F0B0((int)param_1);
    iVar5 = func_001DA898((uint)param_1,1);
  }
  if ((uint)param_1[0x103] < (uint)param_1[0x104]) {
    param_1[0x103] = param_1[0x103] + 1;
    uVar3 = (uint)*(byte *)((int)param_1 + 0x51b);
    if (uVar3 == 0) {
      if ((short)param_1[0xb] < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = (int)(short)param_1[0xb] - 1;
      }
      uVar3 = func_003521F0((int)(param_1 + 0xc9),uVar3 & 0xff);
      *(undefined1 *)((int)param_1 + 0x51b) = 1;
    }
    if (iVar5 == 0) {
      local_40 = DAT_001daed4 | uVar3 & 0xffff0000;
      local_50 = 0.0;
      local_3c = 0xff;
      uStack_38 = 0;
      local_30 = 0;
      local_44 = param_1[0xb3];
      local_48 = param_1 + 0x142;
      local_34 = param_1[0x110];
      local_4c = param_1 + 0x13e;
      piVar6 = param_1 + 0x110;
      func_004A8F40(*DAT_001daed8,(int *)&local_50,(uint)*(ushort *)(param_1 + 0x146));
      func_004D80A4(&local_50,param_1[0xfa],DAT_001daedc);
      local_4c = (int *)DAT_001daee0;
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),&local_50);
      param_1[0x109] = param_1[0xf4];
      param_1[0x10a] = param_1[0xf5];
      param_1[0x10b] = param_1[0xf6];
      param_1[0x10a] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x10a]) + ALBW_AS_F32(param_1[0x10f])));
      func_001DA348((int)param_1,(float *)(param_1 + 0x10c),(float *)(param_1 + 0xf4),0);
      *(undefined4 *)(*piVar6 + 0x58) = DAT_001daee4;
      iVar5 = *piVar6;
      *(int *)(iVar5 + 4) = param_1[0x109];
      *(int *)(iVar5 + 8) = param_1[0x10a];
      *(int *)(iVar5 + 0xc) = param_1[0x10b];
      func_004356B4((int *)*piVar6);
      func_0014F0B0((int)param_1);
      iVar5 = func_001DA898((uint)param_1,0);
      if (iVar5 == 0) {
        uVar4 = func_001DA26C((int)param_1);
        return (int *)uVar4;
      }
      cVar1 = *(char *)((int)param_1 + 0x2d7);
      local_4c = (int *)DAT_001daee8;
    }
    else {
      cVar1 = *(char *)((int)param_1 + 0x2d7);
      local_4c = (int *)DAT_001daee8;
    }
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x2d7);
    local_4c = (int *)DAT_001daee8;
  }
  (void) local_4c;
  if (cVar1 == '\0') {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    local_50 = fVar2;
    param_1 = (int *)func_00150A84(param_1,(int *)&local_50,0);
  }
  return param_1;
}

