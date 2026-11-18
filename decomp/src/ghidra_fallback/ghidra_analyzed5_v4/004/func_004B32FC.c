#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b33f0;
extern undefined4 DAT_004b33f4;
extern undefined4 *DAT_004b33f8;
extern undefined4 DAT_004b33fc;

// USA 004B32FC <- EU 004B32D4 (Ghidra, non-matching)
// GLOBAL DAT_004b33f0 undefined4
// GLOBAL DAT_004b33f4 undefined4
// GLOBAL DAT_004b33f8 undefined4 *
// GLOBAL DAT_004b33fc undefined4

void func_004B32FC(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define aiStack_4c ((int *)(albw_frame + 0x14))
  #define auStack_40 ((undefined1 *)(albw_frame + 0x20))
  puVar1 = func_00689A2C(aiStack_4c,auStack_40,0x20);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b33f4;
  func_00688CA0(param_3,aiStack_4c);
  func_00687AF0(&local_58,aiStack_4c);
  func_00688CA0(param_3,aiStack_4c);
  func_00687AF0(&fStack_54,aiStack_4c);
  func_00688CA0(param_3,aiStack_4c);
  func_00687AF0(&fStack_50,aiStack_4c);
  puVar1 = DAT_004b33f8;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b33f8,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x2e;
    *puVar2 = DAT_004b33fc;
    puVar2[3] = ALBW_AS_U32(local_58);
    puVar2[4] = ALBW_AS_U32(fStack_54);
    puVar2[5] = ALBW_AS_U32(fStack_50);
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

