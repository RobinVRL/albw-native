#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b5d30;
extern undefined4 DAT_004b5d34;
extern undefined4 DAT_004b5d38;
extern undefined4 DAT_004b5d3c;
extern undefined4 *DAT_004b5d40;
extern undefined4 DAT_004b5d44;

// USA 004B5BF4 <- EU 004B5BCC (Ghidra, non-matching)
// GLOBAL DAT_004b5d30 undefined4
// GLOBAL DAT_004b5d34 undefined4
// GLOBAL DAT_004b5d38 undefined4
// GLOBAL DAT_004b5d3c undefined4
// GLOBAL DAT_004b5d40 undefined4 *
// GLOBAL DAT_004b5d44 undefined4

void func_004B5BF4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define iStack_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(char * *)(albw_frame + 0xc))
  #define auStack_6c ((undefined1 *)(albw_frame + 0x14))
  #define aiStack_5c ((int *)(albw_frame + 0x24))
  #define auStack_50 ((undefined1 *)(albw_frame + 0x30))
  #define local_30 ((int *)(albw_frame + 0x50))
  puVar3 = func_00689A2C(aiStack_5c,auStack_50,0x20);
  uVar2 = DAT_004b5d34;
  uVar1 = DAT_004b5d30;
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = uVar2;
  func_00688CA0(param_3,aiStack_5c);
  puVar3 = func_00689A2C(&iStack_78,auStack_6c,0x10);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = DAT_004b5d3c;
  local_30[0] = 1;
  func_00688CA0(param_3,&iStack_78);
  if (*local_74 != '\0') {
    func_006875AC(local_30,&iStack_78,-1);
  }
  puVar3 = DAT_004b5d40;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = func_0010983C(*DAT_004b5d40,*(int *)(param_1 + 0x20));
  }
  puVar4 = (undefined4 *)func_0010BAB4(0x3c);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar4[2] = 0x30;
    *puVar4 = DAT_004b5d44;
    iVar7 = local_30[0];
    puVar4 = func_00689A2C(puVar4 + 3,puVar4 + 6,0x20);
    *puVar4 = uVar1;
    func_00689894((int)puVar4,aiStack_5c,0xffffffff);
    *puVar4 = uVar2;
    puVar5 = puVar4 + -3;
    puVar4[0xb] = iVar7;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar5);
  if (iVar6 != 1) {
    func_0010983C(*puVar3,iVar6);
  }
  return;
}

