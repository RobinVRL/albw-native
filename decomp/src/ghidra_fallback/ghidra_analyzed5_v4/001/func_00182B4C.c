// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001510A4();
extern int func_0035D6D0(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int func_004EE540(undefined4 *param_1);
extern int func_00503368(undefined4 *param_1);
extern int func_00556AF8();
extern int func_00588BE4(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_00182cf8;
extern int *DAT_00182cfc;
extern uint *DAT_00182d00;
extern int *DAT_00182d04;
extern undefined4 DAT_00182d08;
extern undefined4 *DAT_00182d0c;
extern int *DAT_00182d10;
extern int *DAT_00182d14;
extern int DAT_00182d18;
extern int DAT_00182d1c;
extern int DAT_00182d20;

// USA 00182B4C <- EU 00182B4C (Ghidra, non-matching)
// GLOBAL DAT_00182cf8 int
// GLOBAL DAT_00182cfc int *
// GLOBAL DAT_00182d00 uint *
// GLOBAL DAT_00182d04 int *
// GLOBAL DAT_00182d08 undefined4
// GLOBAL DAT_00182d0c undefined4 *
// GLOBAL DAT_00182d10 int *
// GLOBAL DAT_00182d14 int *
// GLOBAL DAT_00182d18 int
// GLOBAL DAT_00182d1c int
// GLOBAL DAT_00182d20 int

undefined4 func_00182B4C(int *param_1)

{
  short sVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar5 = DAT_00182cf8;
  param_1[200] = DAT_00182cf8 + 0xb8;
  *param_1 = iVar5;
  uVar4 = DAT_00182d08;
  piVar3 = DAT_00182d04;
  puVar2 = DAT_00182d00;
  if ((char)param_1[0x2fb] != '\0') {
    puVar9 = *(undefined4 **)(*DAT_00182cfc + 0x3dbc8);
    for (puVar7 = *(undefined4 **)(*DAT_00182cfc + 0x3dbc0); puVar7 != puVar9; puVar7 = puVar7 + 1)
    {
      puVar8 = (undefined4 *)*puVar7;
      if (puVar8 != (undefined4 *)0x0) {
        if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00182d00), iVar5 != 0)) {
          *DAT_00182d0c = uVar4;
        }
        iVar5 = (**(code **)*puVar8)(puVar8,DAT_00182d0c);
        puVar6 = (undefined4 *)0x0;
        if (iVar5 != 0) {
          puVar6 = puVar8;
        }
        if (puVar6 == (undefined4 *)0x0) {
          iVar5 = func_00588BE4((int)puVar8);
          if ((iVar5 == *piVar3) || (iVar5 == *DAT_00182d10)) {
            puVar8[0x103] = 0;
          }
        }
        else {
          puVar6[0x107] = 0;
        }
      }
    }
  }
  iVar5 = func_00556AF8(*DAT_00182d14);
  sVar1 = 0;
  if (iVar5 != 0) {
    sVar1 = (short)param_1[0xe];
  }
  if (iVar5 != 0 && sVar1 != 0) {
    func_00588C14((int)param_1,1,0);
  }
  puVar7 = func_004EE540(param_1 + 0x2cd);
  puVar7 = func_004EE540(puVar7 + -0x19);
  iVar5 = DAT_00182d18;
  puVar7[-0x1ec] = DAT_00182d18 + 0xb8;
  puVar7[-0x2b4] = iVar5;
  func_0036D0E0(puVar7 + -0x9a);
  func_0036D0E0(puVar7 + -0x9b);
  iVar5 = DAT_00182d1c + 0x98;
  puVar7[-0x2b4] = DAT_00182d1c;
  puVar7[-0x1ec] = iVar5;
  puVar7 = func_0035D6D0(puVar7 + -0xdd);
  puVar7 = func_00503368(puVar7 + -0xb9);
  iVar5 = DAT_00182d20;
  puVar7[-0x56] = DAT_00182d20 + 0x5c;
  puVar7[-0x11e] = iVar5;
  puVar7 = func_004EE540(puVar7 + -0x1a);
  return func_001510A4(puVar7 + -0x104);
}

