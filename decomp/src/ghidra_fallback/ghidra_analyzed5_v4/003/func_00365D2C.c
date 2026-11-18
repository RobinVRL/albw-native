#include "ghidra_types.h"

extern int func_001DCF28(int param_1,undefined1 param_2);
extern int func_001DE2B0(int param_1,int param_2);
extern int func_001DE330(int param_1,int param_2);
extern int func_0028C388(int param_1);
extern int func_00291CB4(int param_1,undefined1 param_2);
extern int func_002D16C0(int param_1);
extern int func_002D5D3C(void *param_1);
extern undefined4 DAT_00365e10;
extern undefined4 DAT_00365e14;
extern undefined4 DAT_00365e18;

// USA 00365D2C <- EU 00365D08 (Ghidra, non-matching)
// GLOBAL DAT_00365e10 undefined4
// GLOBAL DAT_00365e14 undefined4
// GLOBAL DAT_00365e18 undefined4

undefined4 func_00365D2C(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  
  *param_1 = DAT_00365e14;
  uVar8 = DAT_00365e10;
  if (*(char *)(param_1[0xb] + 200) == '\0') {
    func_001DE330(param_1[10],0);
    func_001DE330(param_1[10],1);
    if (*(char *)(param_1[0xb] + 0xb0) == '\0') {
      func_001DE2B0(param_1[10],0);
    }
    func_001DCF28(param_1[10],0);
    if (*(short *)(param_1[0xb] + 0x42) == 0x21) {
      func_0028C388(param_1[0x13]);
    }
    uVar2 = (uint)*(ushort *)(param_1[0xb] + 0x42);
    bVar6 = uVar2 == 0x22;
    if (bVar6) {
      uVar2 = param_1[0x13];
    }
    if (bVar6) {
      *(undefined4 *)(uVar2 + 0xfc) = uVar8;
    }
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x25);
  bVar6 = uVar2 == 0;
  if (bVar6) {
    uVar2 = param_1[0x24];
  }
  bVar7 = bVar6 && uVar2 == 0;
  if (bVar6 && uVar2 == 0) {
    bVar7 = *(char *)(param_1 + 0x26) == '\0';
  }
  if (bVar7) {
    if (*(short *)(param_1[0xb] + 0x42) == 0x21) {
      uVar5 = 0x14;
    }
    else {
      uVar5 = 0;
    }
    func_00291CB4(param_1[0xb],uVar5);
  }
  uVar1 = DAT_00365e18;
  *(undefined4 *)(param_1[0x13] + 0x100) = uVar8;
  iVar3 = param_1[0x14];
  *(undefined1 *)(iVar3 + 0x167) = 0;
  *(undefined4 *)(iVar3 + 0x17c) = uVar1;
  *(undefined4 *)(iVar3 + 0x180) = uVar8;
  *(undefined1 *)(param_1[10] + 0x6bc) = 1;
  pvVar4 = func_002D16C0((int)(param_1 + 0x1c));
  func_002D5D3C((int)pvVar4 + -0x70);
  return (undefined4)param_1;
}

