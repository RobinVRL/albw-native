#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00370608(int param_1,uint *param_2);
extern int func_003706B0(int param_1,uint *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_003c03cc;
extern int DAT_003c03d0;
extern int *DAT_003c03d4;
extern undefined4 DAT_003c03d8;
extern int *DAT_003c03dc;
extern int DAT_003c03e0;

// USA 003C02E0 <- EU 003C02BC (Ghidra, non-matching)
// GLOBAL DAT_003c03cc int *
// GLOBAL DAT_003c03d0 int
// GLOBAL DAT_003c03d4 int *
// GLOBAL DAT_003c03d8 undefined4
// GLOBAL DAT_003c03dc int *
// GLOBAL DAT_003c03e0 int

undefined4 func_003C02E0(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_3d (*(undefined1 *)(albw_frame + 0x33))
  #define local_30 (*(uint * *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x4c))
  piVar2 = DAT_003c03d4;
  piVar1 = DAT_003c03cc;
  puVar5 = (uint *)0x0;
  puVar6 = (uint *)0x0;
  if (*DAT_003c03cc != 0) {
    local_28 = 0;
    uStack_24 = 0xffffffff;
    local_64 = local_5c;
    local_30 = (uint *)0x0;
    local_2c = 0;
    uStack_60 = 0x20;
    uStack_3d = 0;
    local_5c[0] = 0;
    local_68 = DAT_003c03d0;
    (**(code **)(*DAT_003c03d4 + 8))(DAT_003c03d4);
    func_004994B0((int)&local_68,DAT_003c03d8,piVar2[1],param_2);
    iVar3 = func_005826A4(*piVar1,(int *)&local_30,piVar2 + -2,&local_68);
    if (iVar3 != 0) {
      puVar5 = local_30;
    }
    iVar3 = func_005826A4(*piVar1,(int *)&local_30,DAT_003c03dc + -4,DAT_003c03dc);
    if (iVar3 != 0) {
      puVar6 = local_30;
    }
  }
  uVar7 = func_0010E3C4(param_1,(uint *)(DAT_003c03e0 + param_2 * 0x40),0x40);
  uVar4 = (undefined4)uVar7;
  if (puVar5 != (uint *)0x0) {
    uVar4 = func_003706B0((int)param_1,puVar5);
  }
  if (puVar6 != (uint *)0x0) {
    uVar4 = func_00370608((int)param_1,puVar6);
    return uVar4;
  }
  return uVar4;
}

