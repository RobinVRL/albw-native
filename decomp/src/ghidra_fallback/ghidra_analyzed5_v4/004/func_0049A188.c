#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_001096AC(int param_1,undefined4 param_2);
extern int func_0048E8AC(undefined4 *param_1);
extern int func_00490A18(int param_1,int param_2);
extern undefined4 DAT_0049a560;
extern char s_cf_0049a564[];
extern char s_cf_0049a574[];
extern char s_cf_0049a584[];
extern char s_cf_0049a594[];
extern char s_cf_0049a5a8[];
extern char s_cf_0049a5bc[];
extern char s_cf_0049a5d0[];
extern char s_cf_0049a5e8[];
extern char s_cf_0049a5fc[];
extern char s_cf_0049a610[];
extern char s_cf_0049a624[];
extern char s_sead__AppCalc_0049a584[];
extern char s_sead__BtmAppDrawFinal_0049a624[];
extern char s_sead__BtmAppDraw_0049a610[];
extern char s_sead__BtmRootDraw_0049a5e8[];
extern char s_sead__BtmSysDraw_0049a5fc[];
extern char s_sead__RootCalc_0049a564[];
extern char s_sead__SysCalc_0049a574[];
extern char s_sead__TopAppDrawFinal_0049a5d0[];
extern char s_sead__TopAppDraw_0049a5bc[];
extern char s_sead__TopRootDraw_0049a594[];
extern char s_sead__TopSysDraw_0049a5a8[];

// USA 0049A188 <- EU 0049A160 (Ghidra, non-matching)
// GLOBAL DAT_0049a560 undefined4
// GLOBAL s_cf_0049a584 string
// GLOBAL s_cf_0049a624 string
// GLOBAL s_cf_0049a610 string
// GLOBAL s_cf_0049a5e8 string
// GLOBAL s_cf_0049a5fc string
// GLOBAL s_cf_0049a564 string
// GLOBAL s_cf_0049a574 string
// GLOBAL s_cf_0049a5d0 string
// GLOBAL s_cf_0049a5bc string
// GLOBAL s_cf_0049a594 string
// GLOBAL s_cf_0049a5a8 string

int func_0049A188(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  
  puVar1 = func_0048E8AC(param_1);
  *puVar1 = DAT_0049a560;
  pvVar2 = func_001096AC((int)(puVar1 + 8),puVar1 + 1);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x1c);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x6c);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0xbc);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x10c);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x15c);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x1ac);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x1fc);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x24c);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x29c);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x2ec);
  *(undefined1 *)((int)pvVar2 + 0x50) = 1;
  *(undefined1 *)((int)pvVar2 + 0x51) = 0;
  *(char **)((int)pvVar2 + -0x2f8) = s_sead__RootCalc_0049a564;
  *(char **)((int)pvVar2 + -0x2a8) = s_sead__SysCalc_0049a574;
  *(char **)((int)pvVar2 + -600) = s_sead__AppCalc_0049a584;
  *(char **)((int)pvVar2 + -0x208) = s_sead__TopRootDraw_0049a594;
  *(char **)((int)pvVar2 + -0x1b8) = s_sead__TopSysDraw_0049a5a8;
  *(char **)((int)pvVar2 + -0x168) = s_sead__TopAppDraw_0049a5bc;
  *(char **)((int)pvVar2 + -0x118) = s_sead__TopAppDrawFinal_0049a5d0;
  *(char **)((int)pvVar2 + -200) = s_sead__BtmRootDraw_0049a5e8;
  *(char **)((int)pvVar2 + -0x78) = s_sead__BtmSysDraw_0049a5fc;
  *(char **)((int)pvVar2 + -0x28) = s_sead__BtmAppDraw_0049a610;
  *(char **)((int)pvVar2 + 0x28) = s_sead__BtmAppDrawFinal_0049a624;
  func_00490A18((int)pvVar2 + -800,(int)pvVar2 + -0x2d0);
  func_00490A18((int)pvVar2 + -800,(int)pvVar2 + -0x280);
  func_00490A18((int)pvVar2 + -0x230,(int)pvVar2 + -400);
  func_00490A18((int)pvVar2 + -0x230,(int)pvVar2 + -0x140);
  func_00490A18((int)pvVar2 + -0x230,(int)pvVar2 + -0x1e0);
  func_00490A18((int)pvVar2 + -0xf0,(int)pvVar2 + -0x50);
  func_00490A18((int)pvVar2 + -0xf0,(int)pvVar2);
  func_00490A18((int)pvVar2 + -0xf0,(int)pvVar2 + -0xa0);
  iVar3 = (int)pvVar2 + -0x2d0;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x288);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0x28c) = 0;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -0x280;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x238);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0x23c) = 0;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -0x1e0;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x198);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0x19c) = 0;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -400;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x148);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0x14c) = 0;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -0x140;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0xf8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0xfc) = 0;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -0xa0;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x58);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0x5c) = 0;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -0x50;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0xc) = 0;
  func_00109698(iVar3);
  func_0010961C((int)pvVar2);
  puVar1 = *(undefined4 **)((int)pvVar2 + 0x48);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,pvVar2,0);
  }
  *(undefined4 *)((int)pvVar2 + 0x44) = 0;
  func_00109698((int)pvVar2);
  iVar3 = (int)pvVar2 + -800;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x2d8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,3);
  }
  *(undefined4 *)((int)pvVar2 + -0x2dc) = 3;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -0x230;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x1e8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,3);
  }
  *(undefined4 *)((int)pvVar2 + -0x1ec) = 3;
  func_00109698(iVar3);
  iVar3 = (int)pvVar2 + -0xf0;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0xa8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,3);
  }
  *(undefined4 *)((int)pvVar2 + -0xac) = 3;
  func_00109698(iVar3);
  return (int)pvVar2 + -0x340;
}

