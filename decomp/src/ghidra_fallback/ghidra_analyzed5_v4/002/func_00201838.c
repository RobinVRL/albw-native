#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern longlong func_001104E4(int param_1,int param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00276890(int param_1,int param_2,undefined2 param_3);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0037A730(int param_1,int param_2);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00547884(uint *param_1,uint *param_2,uint param_3);
extern int func_00547994(uint *param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A43C(int param_1);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int *DAT_00201cf4;
extern uint *DAT_00201cf8;
extern uint *DAT_00201cfc;
extern int *DAT_00201d00;
extern int *DAT_00201d04;
extern int *DAT_00201d08;
extern undefined4 DAT_00201d0c;
extern undefined4 DAT_00201d10;
extern undefined4 DAT_00201d14;
extern int *DAT_00201d18;
extern uint *DAT_00201d1c;
extern undefined4 *DAT_00201d20;
extern undefined4 *DAT_00201d24;
extern char s_SE_Bari_DIVIDE_00201d3c[];
extern char s_SE_Gigabari_DIVIDE_00201d28[];

// USA 00201838 <- EU 00201838 (Ghidra, non-matching)
// GLOBAL DAT_00201cf4 int *
// GLOBAL DAT_00201cf8 uint *
// GLOBAL DAT_00201cfc uint *
// GLOBAL DAT_00201d00 int *
// GLOBAL DAT_00201d04 int *
// GLOBAL DAT_00201d08 int *
// GLOBAL DAT_00201d0c undefined4
// GLOBAL DAT_00201d10 undefined4
// GLOBAL DAT_00201d14 undefined4
// GLOBAL DAT_00201d18 int *
// GLOBAL DAT_00201d1c uint *
// GLOBAL DAT_00201d20 undefined4 *
// GLOBAL DAT_00201d24 undefined4 *
// GLOBAL s_SE_Bari_DIVIDE_00201d3c string
// GLOBAL s_SE_Gigabari_DIVIDE_00201d28 string

undefined4 func_00201838(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  float in_s0;
  undefined8 uVar10;
  longlong lVar11;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define uStack_300 (*(uint *)(albw_frame + 0x0))
  #define local_2fc (*(int *)(albw_frame + 0x4))
  #define local_2f8 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_2f4 (*(char * *)(albw_frame + 0xc))
  #define local_2f0 (*(char * *)(albw_frame + 0x10))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2e0 (*(float *)(albw_frame + 0x20))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2d8 (*(float *)(albw_frame + 0x28))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2b4 (*(int *)(albw_frame + 0x4c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x2c0))
  #define local_34 (*(int *)(albw_frame + 0x2cc))
  uVar4 = func_0058A43C((int)param_1);
  piVar1 = DAT_00201cf4;
  if (((((uVar4 != 0) && (iVar5 = func_00588BE4((int)param_1), iVar5 != *piVar1)) ||
       (uVar4 = func_00588BE4((int)param_1), puVar2 = DAT_00201cf8, uVar4 == *DAT_00201cf8)) ||
      (uVar4 = func_00588BE4((int)param_1), uVar4 == *DAT_00201cfc)) ||
     (((iVar5 = func_00588BE4((int)param_1), piVar3 = DAT_00201d00, iVar5 == *DAT_00201d00 ||
       (iVar5 = func_00588BE4((int)param_1), iVar5 == *DAT_00201d04)) &&
      ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0)))) {
    if (param_1[0x14] == 0) {
      param_1[0x167] = param_1[0x167] | 0x1000;
      return 0;
    }
    iVar5 = func_0052FBA0(*DAT_00201d08 + 0x3dbbc,param_1[0x14]);
    if ((iVar5 == 0) || (iVar5 = func_00588BE4(iVar5), iVar5 != *piVar1)) {
      uVar4 = param_1[0x167] | 0x1000;
    }
    else {
      uVar4 = param_1[0x167] | 0x2000;
    }
    param_1[0x167] = uVar4;
    return 0;
  }
  uVar4 = 2;
  iVar5 = func_00588BE4((int)param_1);
  piVar1 = DAT_00201d08;
  if (iVar5 == *DAT_00201cf4) {
    uVar4 = 0x10;
  }
  if ((short)param_1[0xb] == 1) {
    iVar5 = 0;
    if (uVar4 != 0) {
      uVar10 = CONCAT44(DAT_00201d10,DAT_00201d0c);
      local_2ec = DAT_00201d14;
      do {
        iVar6 = func_00588BE4((int)param_1);
        if (iVar6 == *piVar3) {
          puVar7 = func_00547994((uint *)(param_1 + 1),*puVar2);
        }
        else {
          puVar7 = func_00547994((uint *)(param_1 + 1),*DAT_00201cfc);
        }
        if (puVar7 != (uint *)0x0) {
          *(undefined2 *)((int)puVar7 + 0x2e) = 1;
          lVar11 = func_001104E4(0x40000000,uVar4);
          puVar7[8] = (int)lVar11 * (iVar5 * 4 + 2) + param_1[0xfa];
          puVar7[1] = param_1[0xf4];
          puVar7[2] = param_1[0xf5];
          puVar7[3] = param_1[0xf6];
          puVar7[0x13] = param_1[0xb3];
          local_2f4 = (char *)uVar10;
          local_2f0 = local_2f4;
          func_00115154((float *)&local_2f0,(float *)&local_2f4,puVar7[8]);
          in_s0 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
          local_2e0 = ALBW_AS_F32(local_2f0) * in_s0;
          in_s0 = ALBW_AS_F32(local_2f4) * in_s0;
          local_2dc = (undefined4)uVar10;
          local_2d8 = in_s0;
          func_00115C70((float *)(puVar7 + 1),(float *)(puVar7 + 1),&local_2e0);
          func_004C4AF4(*piVar1,(int *)puVar7,0);
          puVar7[1] = param_1[2];
          puVar7[2] = param_1[3];
          puVar7[3] = param_1[4];
          func_00115C70((float *)(puVar7 + 1),(float *)(puVar7 + 1),&local_2e0);
          if ((char)param_1[0x17] != '\0') {
            local_2f8 = (undefined4 *)(int)*(short *)((int)param_1 + 0x5e);
            iVar6 = func_00276890(*(int *)(*DAT_00201d18 + 0x38),(int)local_2f8,(short)puVar7[0x15])
            ;
            if ((iVar6 != 0) &&
               (puVar8 = (undefined4 *)func_0052FBDC(*piVar1 + 0x3dbbc,(int)local_2f8,0),
               puVar8 != (undefined4 *)0x0)) {
              local_2f8 = puVar8;
              local_2d4 = puVar8;
              if (((*DAT_00201d1c & 1) == 0) &&
                 (iVar9 = func_00100174((int *)DAT_00201d1c), iVar9 != 0)) {
                *DAT_00201d20 = local_2ec;
              }
              iVar9 = (**(code **)*local_2f8)(local_2f8,DAT_00201d20);
              puVar8 = (undefined4 *)0x0;
              if (iVar9 != 0) {
                puVar8 = local_2d4;
              }
              if (puVar8 != (undefined4 *)0x0) {
                func_0037A730((int)puVar8,iVar6);
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar4);
    }
  }
  else {
    iVar5 = 0;
    if (uVar4 != 0) {
      lVar11 = func_001104E4(0x40000000,uVar4);
      local_34 = (int)lVar11;
      do {
        local_2e0 = 0.0;
        local_2dc = 0;
        local_2e4 = 0;
        local_2b8 = 0;
        local_2b4 = 0;
        local_40 = 0;
        func_002DFF7C(&uStack_300);
        iVar6 = func_00588BE4((int)param_1);
        if (iVar6 == *piVar3) {
          func_00547884((uint *)(param_1 + 1),&uStack_300,*DAT_00201cf8);
        }
        else {
          func_00547884((uint *)(param_1 + 1),&uStack_300,*DAT_00201cfc);
        }
        local_2fc = param_1[0xf4];
        local_2f8 = (undefined4 *)param_1[0xf5];
        local_2f4 = (char *)param_1[0xf6];
        local_2d4 = (undefined4 *)CONCAT22(1,(undefined2)local_2d4);
        local_2e0 = ALBW_AS_F32((local_34 * (iVar5 * 4 + 2) + param_1[0xfa]));
        local_2b4 = param_1[0xb3];
        func_004C4AF4(*piVar1,(int *)&uStack_300,0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar4);
    }
  }
  iVar5 = func_00588BE4((int)param_1);
  puVar8 = DAT_00201d24;
  if (iVar5 == *DAT_00201cf4) {
    func_0065D120(param_1 + 0x237,8,in_s0);
    local_2f4 = s_SE_Gigabari_DIVIDE_00201d28;
    local_2f8 = puVar8;
    return func_00150A84(param_1,(int *)&local_2f8,0);
  }
  param_1[0x167] = param_1[0x167] | 0x2000;
  local_2f4 = s_SE_Bari_DIVIDE_00201d3c;
  local_2f8 = puVar8;
  return func_00150A84(param_1,(int *)&local_2f8,0);
}

