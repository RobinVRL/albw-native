#include "ghidra_types.h"

extern int func_0014AE1C(int param_1,int param_2);
extern int func_001B6C04(int param_1);
extern int func_002313DC(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004B948C(int param_1,int param_2);
extern int func_0058D808(int param_1);
extern int func_0058DB74(int param_1);
extern int func_0066C88C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00441c98;
extern int *DAT_00441c9c;
extern int *DAT_00441ca0;
extern float DAT_00441ca4;

// USA 00441BA8 <- EU 00441B88 (Ghidra, non-matching)
// GLOBAL DAT_00441c98 int *
// GLOBAL DAT_00441c9c int *
// GLOBAL DAT_00441ca0 int *
// GLOBAL DAT_00441ca4 float

undefined4 func_00441BA8(int param_1)

{
  float fparam_0;
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  piVar2 = DAT_00441c98;
  iVar1 = func_0058DB74(*DAT_00441c98);
  if ((iVar1 == 0) && (iVar1 = func_0058D808(*piVar2), iVar1 != 0)) {
    func_0014AE1C(*DAT_00441c9c,1);
  }
  *(undefined1 *)(*DAT_00441ca0 + 0x79) = 1;
  func_001B6C04(param_1);
  uVar5 = 0;
  do {
    piVar2 = (int *)(param_1 + 0xbc);
    if (uVar5 < 2) {
      piVar2 = piVar2 + uVar5;
    }
    func_004B948C(param_1,*piVar2);
    puVar3 = (uint *)(param_1 + 0xbc);
    if (uVar5 < 2) {
      puVar3 = puVar3 + uVar5;
    }
    uVar4 = *puVar3;
    bVar6 = *(char *)(uVar4 + 0xd) == '\0';
    if (bVar6) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if (bVar6 && uVar4 == 0) {
      piVar2 = (int *)(param_1 + 0xbc);
      if (uVar5 < 2) {
        piVar2 = piVar2 + uVar5;
      }
      *(undefined1 *)(*piVar2 + 0xe) = 1;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x76) = 2;
  fparam_0 = DAT_00441ca4;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x82) = 4;
  *(undefined2 *)(param_1 + 0x80) = 0;
  func_002313DC(param_1 + 0x80);
  return func_0066C88C((undefined4 *)(param_1 + 0x98),0);
}

