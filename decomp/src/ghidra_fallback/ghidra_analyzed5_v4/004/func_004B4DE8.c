#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b4ea4;
extern undefined4 DAT_004b4ea8;
extern undefined4 *DAT_004b4eac;
extern undefined4 DAT_004b4eb0;

// USA 004B4DE8 <- EU 004B4DC0 (Ghidra, non-matching)
// GLOBAL DAT_004b4ea4 undefined4
// GLOBAL DAT_004b4ea8 undefined4
// GLOBAL DAT_004b4eac undefined4 *
// GLOBAL DAT_004b4eb0 undefined4

void func_004B4DE8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_38 ((int *)(albw_frame + 0x8))
  #define auStack_2c ((undefined1 *)(albw_frame + 0x14))
  #define local_1c ((float *)(albw_frame + 0x24))
  puVar1 = func_00689A2C(aiStack_38,auStack_2c,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b4ea8;
  func_00688CA0(param_3,aiStack_38);
  func_00687AF0(local_1c,aiStack_38);
  puVar1 = DAT_004b4eac;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b4eac,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 7;
    *puVar2 = DAT_004b4eb0;
    puVar2[3] = ALBW_AS_U32(local_1c[0]);
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

