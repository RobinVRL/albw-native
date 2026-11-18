#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687850(uint *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b297c;
extern undefined4 DAT_004b2980;
extern undefined4 *DAT_004b2984;
extern undefined4 DAT_004b2988;

// USA 004B28BC <- EU 004B2894 (Ghidra, non-matching)
// GLOBAL DAT_004b297c undefined4
// GLOBAL DAT_004b2980 undefined4
// GLOBAL DAT_004b2984 undefined4 *
// GLOBAL DAT_004b2988 undefined4

void func_004B28BC(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define aiStack_30 ((int *)(albw_frame + 0x0))
  #define auStack_24 ((undefined1 *)(albw_frame + 0xc))
  #define local_18 (*(uint *)(albw_frame + 0x18))
  puVar1 = func_00689A2C(aiStack_30,auStack_24,10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b2980;
  func_00688CA0(param_3,aiStack_30);
  func_00687850(&local_18,aiStack_30,-1);
  puVar1 = DAT_004b2984;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b2984,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x29;
    *puVar2 = DAT_004b2988;
    puVar2[3] = local_18;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

