#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b7564;
extern undefined4 DAT_004b7568;
extern undefined4 *DAT_004b756c;
extern undefined4 DAT_004b7570;

// USA 004B7460 <- EU 004B7438 (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 undefined4
// GLOBAL DAT_004b7564 undefined4
// GLOBAL DAT_004b7568 undefined4
// GLOBAL DAT_004b756c undefined4 *
// GLOBAL DAT_004b7570 undefined4

void func_004B7460(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define fStack_5c (*(float *)(albw_frame + 0x4))
  #define fStack_58 (*(float *)(albw_frame + 0x8))
  #define aiStack_54 ((int *)(albw_frame + 0xc))
  #define auStack_48 ((undefined1 *)(albw_frame + 0x18))
  puVar1 = func_00689A2C(aiStack_54,auStack_48,0x20);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b7568;
  func_00688CA0(param_3,aiStack_54);
  func_00687AF0(&local_60,aiStack_54);
  func_00688CA0(param_3,aiStack_54);
  func_00687AF0(&fStack_5c,aiStack_54);
  func_00688CA0(param_3,aiStack_54);
  func_00687AF0(&fStack_58,aiStack_54);
  puVar1 = DAT_004b756c;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b756c,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x23;
    *puVar2 = DAT_004b7570;
    puVar2[3] = ALBW_AS_U32(local_60);
    puVar2[4] = ALBW_AS_U32(fStack_5c);
    puVar2[5] = ALBW_AS_U32(fStack_58);
    puVar2[6] = param_4;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

