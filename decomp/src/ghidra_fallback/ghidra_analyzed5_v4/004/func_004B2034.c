#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b21b0;
extern undefined4 DAT_004b21b4;
extern undefined4 DAT_004b21b8;
extern undefined4 DAT_004b21bc;
extern undefined4 *DAT_004b21c0;
extern undefined4 DAT_004b21c4;
extern undefined4 DAT_004b21c8;
extern undefined4 DAT_004b21cc;

// USA 004B2034 <- EU 004B200C (Ghidra, non-matching)
// GLOBAL DAT_004b21b0 undefined4
// GLOBAL DAT_004b21b4 undefined4
// GLOBAL DAT_004b21b8 undefined4
// GLOBAL DAT_004b21bc undefined4
// GLOBAL DAT_004b21c0 undefined4 *
// GLOBAL DAT_004b21c4 undefined4
// GLOBAL DAT_004b21c8 undefined4
// GLOBAL DAT_004b21cc undefined4

void func_004B2034(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(int *)(albw_frame + 0x4))
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  #define iStack_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  #define auStack_34 ((undefined1 *)(albw_frame + 0x3c))
  #define local_28 ((int *)(albw_frame + 0x48))
  puVar1 = func_00689A2C(&local_70,auStack_64,0x22);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b21b4;
  func_00688CA0(param_3,&local_70);
  (**(code **)(local_70 + 8))(&local_70);
  iVar2 = 0;
  do {
    if (*(char *)(local_6c + iVar2) == '\0') break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  puVar1 = func_00689A2C(&iStack_40,auStack_34,10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b21bc;
  local_28[0] = 0;
  func_00688CA0(param_3,&iStack_40);
  if (*local_3c != '\0') {
    func_006875AC(local_28,&iStack_40,-1);
  }
  puVar1 = DAT_004b21c0;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*DAT_004b21c0,*(int *)(param_1 + 0x20));
  }
  puVar3 = (undefined4 *)func_0010BAB4(0x3c);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar3[2] = 0x28;
    *puVar3 = DAT_004b21c4;
    iVar5 = local_28[0];
    puVar3 = func_00689A2C(puVar3 + 3,puVar3 + 6,0x20);
    *puVar3 = DAT_004b21c8;
    func_00689894((int)puVar3,&local_70,0xffffffff);
    puVar4 = puVar3 + -3;
    *puVar3 = DAT_004b21cc;
    puVar3[0xb] = iVar5;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar4);
  if (iVar2 != 1) {
    func_0010983C(*puVar1,iVar2);
  }
  return;
}

