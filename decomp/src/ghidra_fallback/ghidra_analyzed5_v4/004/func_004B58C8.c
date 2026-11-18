#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00687850(uint *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b5a44;
extern undefined4 DAT_004b5a48;
extern undefined4 *DAT_004b5a4c;
extern undefined4 DAT_004b5a50;

// USA 004B58C8 <- EU 004B58A0 (Ghidra, non-matching)
// GLOBAL DAT_004b5a44 undefined4
// GLOBAL DAT_004b5a48 undefined4
// GLOBAL DAT_004b5a4c undefined4 *
// GLOBAL DAT_004b5a50 undefined4

void func_004B58C8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define aiStack_48 ((int *)(albw_frame + 0x8))
  #define auStack_3c ((undefined1 *)(albw_frame + 0x14))
  #define local_2c (*(uint *)(albw_frame + 0x24))
  #define local_28 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(uint *)(albw_frame + 0x2c))
  #define local_20 ((int *)(albw_frame + 0x30))
  puVar1 = func_00689A2C(aiStack_48,auStack_3c,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b5a48;
  func_00688CA0(param_3,aiStack_48);
  func_006875AC(local_20,aiStack_48,-1);
  func_00688CA0(param_3,aiStack_48);
  func_00687850(&local_2c,aiStack_48,-1);
  func_00688CA0(param_3,aiStack_48);
  func_00687850(&local_28,aiStack_48,-1);
  func_00688CA0(param_3,aiStack_48);
  func_00687850(&local_24,aiStack_48,-1);
  puVar1 = DAT_004b5a4c;
  iVar3 = 1;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar3 = func_0010983C(*DAT_004b5a4c,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x32;
    *puVar2 = DAT_004b5a50;
    puVar2[3] = local_20[0];
    puVar2[4] = local_2c << 0x18 | (local_28 & 0xff) << 0x10 | (local_24 & 0xff) << 8 | 0xff;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

