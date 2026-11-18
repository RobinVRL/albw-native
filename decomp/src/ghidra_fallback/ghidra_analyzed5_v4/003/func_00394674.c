#include "ghidra_types.h"

extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_001510A4();
extern int func_00255484(int param_1,int param_2,undefined4 param_3);
extern int func_002E1B70(int *param_1);
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int DAT_00394758;
extern int *DAT_0039475c;
extern int *DAT_00394760;
extern int DAT_00394764;
extern int DAT_00394768;
extern int DAT_0039476c;

// USA 00394674 <- EU 00394650 (Ghidra, non-matching)
// GLOBAL DAT_00394758 int
// GLOBAL DAT_0039475c int *
// GLOBAL DAT_00394760 int *
// GLOBAL DAT_00394764 int
// GLOBAL DAT_00394768 int
// GLOBAL DAT_0039476c int

undefined4 func_00394674(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = DAT_00394758 + 0x9c;
  *param_1 = DAT_00394758;
  piVar1 = DAT_0039475c;
  param_1[200] = iVar3;
  if (*(int *)(*piVar1 + 0x18) != 0) {
    func_001212EC(*(int *)(*piVar1 + 0x18),param_1 + 0x2c4,0,0);
  }
  piVar1 = DAT_00394760;
  func_00255484(*DAT_00394760,0,param_1[0x2d1]);
  func_00255484(*piVar1,1,param_1[0x2d2]);
  func_00255484(*piVar1,0x24,2);
  func_00255484(*piVar1,0x1f,param_1[0x2d3]);
  puVar2 = func_0036746C(param_1 + 0x2e0);
  func_002E1B70(puVar2 + -0x1c);
  iVar3 = DAT_00394764;
  puVar2[-0x218] = DAT_00394764 + 0x98;
  puVar2[-0x2e0] = iVar3;
  puVar2 = func_0035D6D0(puVar2 + -0x2f);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar3 = DAT_00394768;
  puVar2[-0x130] = DAT_00394768 + 0x98;
  puVar2[-0x1f8] = iVar3;
  puVar2 = func_0035D6D0(puVar2 + -0x21);
  puVar2 = func_00503368(puVar2 + -0xb9);
  iVar3 = DAT_0039476c;
  puVar2[-0x56] = DAT_0039476c + 0x5c;
  puVar2[-0x11e] = iVar3;
  puVar2 = func_004EE540(puVar2 + -0x1a);
  return func_001510A4(puVar2 + -0x104);
}

