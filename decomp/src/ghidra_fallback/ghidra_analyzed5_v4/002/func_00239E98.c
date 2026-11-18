#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00172210(int param_1);
extern int func_0019B04C(uint param_1);
extern int func_0023C994(void);
extern int func_0023CC54(void);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_005841D8(int param_1,undefined4 param_2);
extern uint *DAT_0023a1d8;
extern int *DAT_0023a1dc;
extern int DAT_0023a1e0;
extern uint *DAT_0023a1e4;
extern undefined4 *DAT_0023a1e8;
extern undefined4 DAT_0023a1ec;
extern float *DAT_0023a1f0;
extern float *DAT_0023a1f4;
extern int *DAT_0023a200;
extern char s_Angry_0023a1f8[];

// USA 00239E98 <- EU 00239E98 (Ghidra, non-matching)
// GLOBAL DAT_0023a1d8 uint *
// GLOBAL DAT_0023a1dc int *
// GLOBAL DAT_0023a1e0 int
// GLOBAL DAT_0023a1e4 uint *
// GLOBAL DAT_0023a1e8 undefined4 *
// GLOBAL DAT_0023a1ec undefined4
// GLOBAL DAT_0023a1f0 float *
// GLOBAL DAT_0023a1f4 float *
// GLOBAL DAT_0023a200 int *
// GLOBAL s_Angry_0023a1f8 string

undefined4 func_00239E98(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2f0 (*(int *)(albw_frame + 0x0))
  #define local_2ec (*(float *)(albw_frame + 0x4))
  #define uStack_2e8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2a8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x2c0))
  #define local_2c (*(float *)(albw_frame + 0x2c4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x2c8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2cc))
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined1 *)(param_1 + 0x46c) = param_2;
  piVar5 = DAT_0023a1dc;
  puVar3 = DAT_0023a1d8;
  switch(*(undefined1 *)(param_1 + 0x46c)) {
  case 0:
    iVar4 = func_005841D8(*DAT_0023a1dc,*DAT_0023a1d8);
    if (iVar4 < 1) {
LAB_00239fac:
      local_2d0 = 0;
      local_2cc = 0;
      local_2d4 = 0;
      local_2a8 = 0;
      local_2a4 = 0;
      local_30 = 0;
      func_002DFF7C(&local_2f0);
      local_2f0 = func_0019B04C(*puVar3);
      func_00115C54(&local_2c,(float *)(param_1 + 0x3d0),DAT_0023a1f0);
      local_2ec = local_2c;
      uStack_2e8 = uStack_28;
      uStack_2e4 = uStack_24;
      local_2d0 = *(undefined4 *)(param_1 + 1000);
      local_2a4 = *(undefined4 *)(param_1 + 0x2cc);
      local_2c6 = 0;
      func_004C43E0(*piVar5,&local_2f0);
      if (iVar4 < 1) {
LAB_0023a028:
        local_2d0 = 0;
        local_2cc = 0;
        local_2d4 = 0;
        local_2a8 = 0;
        local_2a4 = 0;
        local_30 = 0;
        func_002DFF7C(&local_2f0);
        local_2f0 = func_0019B04C(*puVar3);
        func_00115C54(&local_2c,(float *)(param_1 + 0x3d0),DAT_0023a1f4);
        local_2ec = local_2c;
        uStack_2e8 = uStack_28;
        uStack_2e4 = uStack_24;
        local_2d0 = *(undefined4 *)(param_1 + 1000);
        local_2a4 = *(undefined4 *)(param_1 + 0x2cc);
        local_2c6 = 1;
        func_004C43E0(*piVar5,&local_2f0);
      }
    }
    else if (iVar4 == 1) {
      puVar1 = (undefined4 *)func_005841A8(*piVar5,*puVar3,*(int **)(DAT_0023a1e0 + *piVar5));
      puVar1 = (undefined4 *)*puVar1;
      if (((*DAT_0023a1e4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0023a1e4), iVar2 != 0)) {
        *DAT_0023a1e8 = DAT_0023a1ec;
      }
      if ((puVar1 == (undefined4 *)0x0) ||
         (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0023a1e8), iVar2 == 0)) {
        puVar1 = (undefined4 *)0x0;
      }
      if (puVar1 != (undefined4 *)0x0) {
        if (*(short *)((int)puVar1 + 0x2e) != 0) goto LAB_00239fac;
        goto LAB_0023a028;
      }
    }
    func_0023CC54();
    func_0023C994();
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
    *(undefined1 *)(param_1 + 0x484) = 0;
    *(undefined1 *)(param_1 + 0x485) = 0;
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x484) = 0;
    piVar5 = (int *)(param_1 + 0x490);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar5 = 0;
      *(undefined4 *)(param_1 + 0x494) = 0;
    }
    else {
      iVar4 = *piVar5;
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 0x494))) {
        func_00110848(iVar4);
      }
      func_004A1B9C(&local_2f0,*(int *)(param_1 + 0x344),(uint *)s_Angry_0023a1f8);
      *piVar5 = local_2f0;
      *(float *)(param_1 + 0x494) = local_2ec;
    }
    *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
    if (*(int *)(param_1 + 0x410) != 0) {
      puVar3 = (uint *)func_002C11E8(&local_2f0,2,10,0);
      func_0016898C(*(int *)(param_1 + 0x410),puVar3);
    }
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    return 0;
  case 4:
    *(undefined1 *)(param_1 + 0x484) = 0;
    *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
    if (*(int *)(param_1 + 0x410) != 0) {
      puVar3 = (uint *)func_002C11E8(&local_2f0,1,10,0);
      return func_0016898C(*(int *)(param_1 + 0x410),puVar3);
    }
    break;
  case 7:
    return func_00172210(*DAT_0023a200);
  case 8:
    *(undefined1 *)(param_1 + 0x4bc) = 1;
    *(undefined1 *)(param_1 + 0x4bd) = 1;
    return 0;
  }
  return 0;
}

