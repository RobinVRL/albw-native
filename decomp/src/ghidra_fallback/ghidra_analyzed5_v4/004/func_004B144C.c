#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b1548;
extern undefined4 DAT_004b154c;
extern undefined4 *DAT_004b1550;
extern undefined4 DAT_004b1554;

// USA 004B144C <- EU 004B1424 (Ghidra, non-matching)
// GLOBAL DAT_004b1548 undefined4
// GLOBAL DAT_004b154c undefined4
// GLOBAL DAT_004b1550 undefined4 *
// GLOBAL DAT_004b1554 undefined4

void func_004B144C(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_40 ((int *)(albw_frame + 0x0))
  #define auStack_34 ((undefined1 *)(albw_frame + 0xc))
  puVar1 = func_00689A2C(aiStack_40,auStack_34,0x20);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b154c;
  func_00688CA0(param_3,aiStack_40);
  func_006875AC((int *)(param_1 + 0x23e8),aiStack_40,-1);
  func_00688CA0(param_3,aiStack_40);
  func_006875AC((int *)(param_1 + 0x23ec),aiStack_40,-1);
  func_00688CA0(param_3,aiStack_40);
  func_006875AC((int *)(param_1 + 0x23f0),aiStack_40,-1);
  puVar1 = DAT_004b1550;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b1550,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x35;
    *puVar2 = DAT_004b1554;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

