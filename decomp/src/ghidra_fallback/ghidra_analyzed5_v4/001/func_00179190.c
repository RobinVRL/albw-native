#include "ghidra_types.h"

extern int func_00178AE8(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_00179430;
extern int *DAT_00179434;
extern int DAT_00179438;
extern char s_System_00179454[];
extern char s_sys_unit_minute_plural_001794c4[];
extern char s_sys_unit_minute_singular_001794a8[];
extern char s_sys_unit_rupee_plural_0017945c[];
extern char s_sys_unit_rupee_singular_0017943c[];
extern char s_sys_unit_second_plural_00179490[];
extern char s_sys_unit_second_singular_00179474[];

// USA 00179190 <- EU 00179190 (Ghidra, non-matching)
// GLOBAL DAT_00179430 int *
// GLOBAL DAT_00179434 int *
// GLOBAL DAT_00179438 int
// GLOBAL s_System_00179454 string
// GLOBAL s_sys_unit_minute_plural_001794c4 string
// GLOBAL s_sys_unit_minute_singular_001794a8 string
// GLOBAL s_sys_unit_rupee_plural_0017945c string
// GLOBAL s_sys_unit_rupee_singular_0017943c string
// GLOBAL s_sys_unit_second_plural_00179490 string
// GLOBAL s_sys_unit_second_singular_00179474 string

/* WARNING: Type propagation algorithm not settling */

uint * func_00179190(int param_1,uint *param_2,int param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(uint * *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define pcStack_14 (*(char * *)(albw_frame + 0x1c))
  if (param_3 == 0) {
    return param_2;
  }
  local_28 = 0;
  uStack_24 = 0xffffffff;
  local_30 = (uint *)0x0;
  local_2c = 0;
  iVar6 = *DAT_00179434;
  iVar5 = *DAT_00179430;
  if (param_3 == 1) {
    uVar2 = *(ushort *)(param_1 + 0x60 + param_4 * 2);
    uVar3 = (short)uVar2 >> 0xf;
    sVar1 = (uVar2 ^ uVar3) - uVar3;
    if (sVar1 == 1) {
switchD_0017921c_caseD_0:
      local_18 = DAT_00179438;
      pcStack_14 = s_sys_unit_rupee_singular_0017943c;
      local_20 = DAT_00179438;
      local_1c = s_System_00179454;
      iVar5 = func_005826A4(iVar6,(int *)&local_30,&local_20,&local_18);
    }
    else {
      if (sVar1 < 2) {
        switch(*(undefined1 *)(iVar5 + 0x2d)) {
        case 0:
        case 3:
          goto switchD_0017921c_caseD_0;
        }
      }
      local_18 = DAT_00179438;
      pcStack_14 = s_sys_unit_rupee_plural_0017945c;
      local_20 = DAT_00179438;
      local_1c = s_System_00179454;
      iVar5 = func_005826A4(iVar6,(int *)&local_30,&local_20,&local_18);
    }
  }
  else if (param_3 == 2) {
    uVar2 = *(ushort *)(param_1 + 0x60 + param_4 * 2);
    uVar3 = (short)uVar2 >> 0xf;
    sVar1 = (uVar2 ^ uVar3) - uVar3;
    if (sVar1 == 1) {
switchD_001792d0_caseD_0:
      local_18 = DAT_00179438;
      pcStack_14 = s_sys_unit_second_singular_00179474;
      local_20 = DAT_00179438;
      local_1c = s_System_00179454;
      iVar5 = func_005826A4(iVar6,(int *)&local_30,&local_20,&local_18);
    }
    else {
      if (sVar1 < 2) {
        switch(*(undefined1 *)(iVar5 + 0x2d)) {
        case 0:
        case 3:
          goto switchD_001792d0_caseD_0;
        }
      }
      local_18 = DAT_00179438;
      pcStack_14 = s_sys_unit_second_plural_00179490;
      local_20 = DAT_00179438;
      local_1c = s_System_00179454;
      iVar5 = func_005826A4(iVar6,(int *)&local_30,&local_20,&local_18);
    }
  }
  else {
    if (param_3 != 3) goto LAB_00179414;
    uVar2 = *(ushort *)(param_1 + 0x60 + param_4 * 2);
    uVar3 = (short)uVar2 >> 0xf;
    sVar1 = (uVar2 ^ uVar3) - uVar3;
    if (sVar1 == 1) {
switchD_00179384_caseD_0:
      local_18 = DAT_00179438;
      pcStack_14 = s_sys_unit_minute_singular_001794a8;
      local_20 = DAT_00179438;
      local_1c = s_System_00179454;
      iVar5 = func_005826A4(iVar6,(int *)&local_30,&local_20,&local_18);
    }
    else {
      if (sVar1 < 2) {
        switch(*(undefined1 *)(iVar5 + 0x2d)) {
        case 0:
        case 3:
          goto switchD_00179384_caseD_0;
        }
      }
      local_18 = DAT_00179438;
      pcStack_14 = s_sys_unit_minute_plural_001794c4;
      local_20 = DAT_00179438;
      local_1c = s_System_00179454;
      iVar5 = func_005826A4(iVar6,(int *)&local_30,&local_20,&local_18);
    }
  }
  if (iVar5 != 1) {
    return param_2;
  }
LAB_00179414:
  puVar4 = func_00178AE8(param_1,param_2,local_30,local_28);
  return puVar4;
}

