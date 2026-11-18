#include "ghidra_types.h"

extern int func_00166620(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004CDF88(int param_1,int param_2,int param_3);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0046bb88;
extern float DAT_0046bb8c;
extern int DAT_0046bb90;
extern int *DAT_0046bb94;
extern int *DAT_0046bb98;
extern int *DAT_0046bb9c;

// GLOBAL DAT_0046bb88 int *
// GLOBAL DAT_0046bb8c float
// GLOBAL DAT_0046bb90 int
// GLOBAL DAT_0046bb94 int *
// GLOBAL DAT_0046bb98 int *
// GLOBAL DAT_0046bb9c int *
// USA 0046BABC <- EU 0046BABC (Ghidra, function missing from the decomp table)

void func_0046BABC(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  piVar1 = DAT_0046bb88;
  func_00166620(*DAT_0046bb88,0);
  func_00166C00(*piVar1,1);
  *(undefined2 *)(param_1 + 0x74) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x74),DAT_0046bb8c);
  piVar1 = DAT_0046bb94;
  iVar2 = DAT_0046bb90;
  bVar3 = func_00584B94(*DAT_0046bb94,(uint)*(ushort *)(DAT_0046bb90 + 2));
  if ((bVar3) &&
     (iVar4 = func_004CDF88(*piVar1,(uint)*(ushort *)(iVar2 + 4),(uint)*(ushort *)(iVar2 + 6)),
     iVar4 != 1)) {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x10;
  }
  if (((*(char *)(*DAT_0046bb98 + 0x18) == '\x01') &&
      (*(int *)(*DAT_0046bb98 + 0x1c) == *(int *)(iVar2 + 0xc))) &&
     (bVar3 = func_005822A0(*DAT_0046bb9c,*(uint *)(iVar2 + 0x10),0), bVar3)) {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x20;
  }
  return;
}

