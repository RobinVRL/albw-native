#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b4fe4;
extern undefined4 DAT_004b4fe8;
extern int DAT_004b4fec;
extern int DAT_004b4ff0;
extern undefined4 *DAT_004b4ff4;
extern undefined4 DAT_004b4ff8;

// USA 004B4EDC <- EU 004B4EB4 (Ghidra, non-matching)
// GLOBAL DAT_004b4fe4 undefined4
// GLOBAL DAT_004b4fe8 undefined4
// GLOBAL DAT_004b4fec int
// GLOBAL DAT_004b4ff0 int
// GLOBAL DAT_004b4ff4 undefined4 *
// GLOBAL DAT_004b4ff8 undefined4

void func_004B4EDC(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define aiStack_48 ((int *)(albw_frame + 0x8))
  #define auStack_3c ((undefined1 *)(albw_frame + 0x14))
  #define local_1c (*(uint *)(albw_frame + 0x34))
  #define iStack_18 (*(int *)(albw_frame + 0x38))
  puVar1 = func_00689A2C(aiStack_48,auStack_3c,0x20);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b4fe8;
  local_1c = 0xffffffff;
  iStack_18 = 0;
  func_00688CA0(param_3,aiStack_48);
  func_006875AC((int *)&local_1c,aiStack_48,-1);
  if (local_1c < *(uint *)(DAT_004b4ff0 + *(int *)(DAT_004b4fec + param_1) * 4)) {
    func_00688CA0(param_3,aiStack_48);
    func_006875AC(&iStack_18,aiStack_48,-1);
    puVar1 = DAT_004b4ff4;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = func_0010983C(*DAT_004b4ff4,*(int *)(param_1 + 0x20));
    }
    puVar2 = (undefined4 *)func_0010BAB4(0x14);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
      puVar2[2] = 0x27;
      *puVar2 = DAT_004b4ff8;
      puVar2[3] = local_1c;
      puVar2[4] = iStack_18;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
    if (iVar3 != 1) {
      func_0010983C(*puVar1,iVar3);
    }
  }
  return;
}

