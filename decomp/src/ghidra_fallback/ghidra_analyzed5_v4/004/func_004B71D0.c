#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687850(uint *param_1,int *param_2,int param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b72ec;
extern undefined4 DAT_004b72f0;
extern undefined4 *DAT_004b72f4;
extern undefined4 DAT_004b72f8;

// USA 004B71D0 <- EU 004B71A8 (Ghidra, non-matching)
// GLOBAL DAT_004b72ec undefined4
// GLOBAL DAT_004b72f0 undefined4
// GLOBAL DAT_004b72f4 undefined4 *
// GLOBAL DAT_004b72f8 undefined4

void func_004B71D0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define iStack_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define auStack_34 ((undefined1 *)(albw_frame + 0x1c))
  #define local_28 (*(uint *)(albw_frame + 0x28))
  #define local_24 ((float *)(albw_frame + 0x2c))
  puVar1 = func_00689A2C(&iStack_40,auStack_34,10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b72f0;
  func_00688CA0(param_3,&iStack_40);
  func_00687850(&local_28,&iStack_40,-1);
  func_00688CA0(param_3,&iStack_40);
  func_00687AF0(local_24,&iStack_40);
  local_44 = 0;
  *local_3c = '\0';
  func_00688CA0(param_3,&iStack_40);
  if (*local_3c != '\0') {
    func_00687850(&local_44,&iStack_40,-1);
  }
  puVar1 = DAT_004b72f4;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b72f4,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x2b;
    *puVar2 = DAT_004b72f8;
    puVar2[3] = local_28;
    puVar2[4] = ALBW_AS_U32(local_24[0]);
    puVar2[5] = local_44;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

