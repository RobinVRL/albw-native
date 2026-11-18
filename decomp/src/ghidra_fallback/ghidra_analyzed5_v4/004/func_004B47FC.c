#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687850(uint *param_1,int *param_2,int param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b48dc;
extern undefined4 DAT_004b48e0;
extern undefined4 *DAT_004b48e4;
extern undefined4 DAT_004b48e8;

// USA 004B47FC <- EU 004B47D4 (Ghidra, non-matching)
// GLOBAL DAT_004b48dc undefined4
// GLOBAL DAT_004b48e0 undefined4
// GLOBAL DAT_004b48e4 undefined4 *
// GLOBAL DAT_004b48e8 undefined4

void func_004B47FC(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define aiStack_40 ((int *)(albw_frame + 0x10))
  #define auStack_34 ((undefined1 *)(albw_frame + 0x1c))
  #define local_28 ((uint *)(albw_frame + 0x28))
  puVar1 = func_00689A2C(aiStack_40,auStack_34,10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b48e0;
  func_00688CA0(param_3,aiStack_40);
  func_00687AF0(&local_44,aiStack_40);
  func_00688CA0(param_3,aiStack_40);
  func_00687850(local_28,aiStack_40,-1);
  puVar1 = DAT_004b48e4;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b48e4,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x2a;
    *puVar2 = DAT_004b48e8;
    puVar2[3] = ALBW_AS_U32(local_44);
    puVar2[4] = local_28[0];
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

