#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b7428;
extern undefined4 DAT_004b742c;
extern undefined4 *DAT_004b7430;
extern undefined4 DAT_004b7434;

// USA 004B7324 <- EU 004B72FC (Ghidra, non-matching)
// GLOBAL DAT_004b7428 undefined4
// GLOBAL DAT_004b742c undefined4
// GLOBAL DAT_004b7430 undefined4 *
// GLOBAL DAT_004b7434 undefined4

void func_004B7324(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define aiStack_50 ((int *)(albw_frame + 0x0))
  #define auStack_44 ((undefined1 *)(albw_frame + 0xc))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define fStack_20 (*(float *)(albw_frame + 0x30))
  #define local_1c ((int *)(albw_frame + 0x34))
  puVar1 = func_00689A2C(aiStack_50,auStack_44,0x20);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b742c;
  local_1c[0] = -1;
  func_00688CA0(param_3,aiStack_50);
  func_006875AC(local_1c,aiStack_50,-1);
  func_00688CA0(param_3,aiStack_50);
  func_00687AF0(&local_24,aiStack_50);
  func_00688CA0(param_3,aiStack_50);
  func_00687AF0(&fStack_20,aiStack_50);
  puVar1 = DAT_004b7430;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b7430,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x26;
    *puVar2 = DAT_004b7434;
    puVar2[3] = local_1c[0];
    puVar2[4] = ALBW_AS_U32(local_24);
    puVar2[5] = ALBW_AS_U32(fStack_20);
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

