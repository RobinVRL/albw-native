#include "ghidra_types.h"

extern int func_001064D0(int param_1);
extern int func_001064F8(undefined4 *param_1);
extern int func_00106714(undefined4 *param_1);
extern int func_00106FC4(undefined4 *param_1);
extern int func_00107018(undefined4 *param_1);
extern int func_001078C0(undefined4 *param_1);
extern int func_00107AE0(int param_1);
extern int func_00107AF8(int *param_1);
extern int func_00107C90(int param_1);
extern int func_00107CFC(int *param_1);
extern int func_00107D38(int param_1);
extern int func_00107E6C(int *param_1);
extern int func_001095EC(undefined4 *param_1);
extern int func_00109730(int param_1,int param_2);
extern int func_00109758(undefined4 *param_1);
extern int func_00109790(int param_1,int param_2);
extern int func_001097A4(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined4 DAT_0010600c;
extern undefined4 *DAT_0010602c;
extern char s_cf_00106010[];
extern char s_rom__World_Sound_Jack_bcsar_00106010[];

// USA 00105DBC <- EU 00105DBC (Ghidra, non-matching)
// GLOBAL DAT_0010600c undefined4
// GLOBAL DAT_0010602c undefined4 *
// GLOBAL s_cf_00106010 string

int func_00105DBC(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = (int *)func_0010BAB4(0x8c);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = func_00107CFC(piVar1);
  }
  *(int **)(param_1 + 0x20) = piVar2;
  iVar3 = func_0010BAB4(0x1a8);
  piVar2 = (int *)0x0;
  if (iVar3 != 0) {
    piVar2 = func_00107C90(iVar3);
  }
  *(int **)(param_1 + 0x24) = piVar2;
  puVar4 = (undefined4 *)func_0010BAB4(0x24);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_00109758(puVar4);
  }
  *(undefined4 **)(param_1 + 0x28) = puVar5;
  puVar5 = (undefined4 *)func_0010BAB4(0x30);
  uVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar6 = func_001097A4(puVar5);
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  puVar4 = (undefined4 *)func_0010BAB4(0x1c);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_001095EC(puVar4);
  }
  *(undefined4 **)(param_1 + 0x30) = puVar5;
  puVar4 = (undefined4 *)func_0010BAB4(0xa4);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_001064F8(puVar4);
  }
  *(undefined4 **)(param_1 + 0x34) = puVar5;
  puVar5 = (undefined4 *)func_0010BAB4(0x94);
  piVar2 = (int *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar2 = func_001078C0(puVar5);
  }
  *(int **)(param_1 + 0x38) = piVar2;
  piVar1 = (int *)func_0010BAB4(0x38);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = func_00107AF8(piVar1);
  }
  *(int **)(param_1 + 0x3c) = piVar2;
  puVar4 = (undefined4 *)func_0010BAB4(0x88);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_00106FC4(puVar4);
  }
  *(undefined4 **)(param_1 + 0x40) = puVar5;
  iVar3 = func_0010BAB4(0x10);
  pvVar7 = (void *)0x0;
  if (iVar3 != 0) {
    pvVar7 = func_00107AE0(iVar3);
  }
  *(void **)(param_1 + 0x44) = pvVar7;
  piVar1 = (int *)func_0010BAB4(0x38);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = func_00107E6C(piVar1);
  }
  *(int **)(param_1 + 0x48) = piVar2;
  puVar5 = (undefined4 *)func_0010BAB4(0x1ac);
  piVar2 = (int *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar2 = func_00107018(puVar5);
  }
  *(int **)(param_1 + 0x4c) = piVar2;
  puVar4 = (undefined4 *)func_0010BAB4(0xdc);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_00106714(puVar4);
  }
  *(undefined4 **)(param_1 + 0x50) = puVar5;
  iVar3 = func_0010BAB4(0x110);
  if (iVar3 == 0) {
    pvVar7 = (void *)0x0;
  }
  else {
    pvVar7 = func_00107D38(iVar3);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(void **)(param_1 + 0x54) = pvVar7;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x74) = 0xffff;
  *(undefined2 *)(param_1 + 0x76) = 0xffff;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc) = *(undefined4 *)(param_1 + 0x24);
  local_14 = s_rom__World_Sound_Jack_bcsar_00106010;
  local_18 = DAT_0010600c;
  func_00109790(*(int *)(param_1 + 0x2c),(int)&local_18);
  func_00109730(*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x30));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = *(undefined4 *)(param_1 + 0x2c);
  func_001064D0(*(int *)(param_1 + 0x34));
  func_00109730(*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x34));
  puVar5 = DAT_0010602c;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *puVar5 = 0xe;
  return param_1;
}

