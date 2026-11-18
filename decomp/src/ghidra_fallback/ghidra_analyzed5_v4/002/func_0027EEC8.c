#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002FCC34(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00660F70(undefined4 *param_1,undefined1 param_2);
extern float DAT_0027f108;
extern int DAT_0027f10c;
extern undefined DAT_0027f12c;
extern undefined4 DAT_0027f14c;
extern float DAT_0027f150;
extern undefined4 DAT_0027f170;
extern char s_BSE_SwitchWatter_SHINE_Lv1_0027f12f[];
extern char s_SE_SwitchWatter_SHINE_Lv0_0027f110[];
extern char s_SE_SwitchWatter_SHINE_Lv2_0027f154[];
extern undefined4 _DAT_0027f12c;

// USA 0027EEC8 <- EU 0027EEF0 (Ghidra, non-matching)
// GLOBAL DAT_0027f108 float
// GLOBAL DAT_0027f10c int
// GLOBAL DAT_0027f12c undefined
// GLOBAL DAT_0027f14c undefined4
// GLOBAL DAT_0027f150 float
// GLOBAL DAT_0027f170 undefined4
// GLOBAL s_BSE_SwitchWatter_SHINE_Lv1_0027f12f string
// GLOBAL s_SE_SwitchWatter_SHINE_Lv0_0027f110 string
// GLOBAL s_SE_SwitchWatter_SHINE_Lv2_0027f154 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0027EEC8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = DAT_0027f10c;
  if (param_1[0x12f] == 0x4b) {
    if (*(char *)((int)param_1 + 0x4f5) != '\0') {
      return;
    }
    iVar1 = param_1[0x13b];
    if (*(char *)((int)param_1 + 0x4f6) == '\0') {
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1[0x12e] + 0x14);
        if (*(float *)(iVar1 + 8) != DAT_0027f108) {
          *(float *)(iVar1 + 8) = DAT_0027f108;
          *(undefined1 *)(iVar1 + 0x26) = 1;
        }
        local_18 = iVar2;
        local_14 = s_SE_SwitchWatter_SHINE_Lv0_0027f110;
        func_00150A84(param_1,&local_18,0);
      }
      else if (iVar1 == 1) {
        iVar1 = *(int *)(param_1[0x12e] + 0x14);
        if (*(float *)(iVar1 + 8) != ALBW_AS_F32(_DAT_0027f12c)) {
          *(float *)(iVar1 + 8) = ALBW_AS_F32(_DAT_0027f12c);
          *(undefined1 *)(iVar1 + 0x26) = 1;
        }
        local_18 = iVar2;
        local_14 = s_BSE_SwitchWatter_SHINE_Lv1_0027f12f + 1;
        func_00150A84(param_1,&local_18,0);
      }
      iVar2 = *(int *)(param_1[0x12e] + 0x14);
      uVar3 = DAT_0027f14c;
    }
    else {
      if (iVar1 == 1) {
        iVar1 = *(int *)(param_1[0x12e] + 0x14);
        if (*(float *)(iVar1 + 8) != DAT_0027f150) {
          *(float *)(iVar1 + 8) = DAT_0027f150;
          *(undefined1 *)(iVar1 + 0x26) = 1;
        }
        local_18 = iVar2;
        local_14 = s_BSE_SwitchWatter_SHINE_Lv1_0027f12f + 1;
        func_00150A84(param_1,&local_18,0);
      }
      else if (iVar1 == 2) {
        iVar1 = *(int *)(param_1[0x12e] + 0x14);
        if (*(float *)(iVar1 + 8) != DAT_0027f108) {
          *(float *)(iVar1 + 8) = DAT_0027f108;
          *(undefined1 *)(iVar1 + 0x26) = 1;
        }
        local_18 = iVar2;
        local_14 = s_SE_SwitchWatter_SHINE_Lv2_0027f154;
        func_00150A84(param_1,&local_18,0);
      }
      iVar2 = *(int *)(param_1[0x12e] + 0x14);
      uVar3 = DAT_0027f170;
    }
    *(undefined4 *)(iVar2 + 0x10) = uVar3;
  }
  if (0x77 < param_1[0x12f]) {
    func_002FCC34(param_1[0x145]);
    if (((*(char *)((int)param_1 + 0x4f5) == '\0') && (*(short *)((int)param_1 + 0x36) != 0)) &&
       ((short)param_1[0xe] != 0)) {
      func_00588C14((int)param_1,(uint)(*(char *)((int)param_1 + 0x4f6) == '\0'),1);
    }
    func_00660F70(param_1 + 0x12f,2);
  }
  return;
}

