#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b6470;
extern undefined4 DAT_004b6474;
extern int DAT_004b6478;
extern int DAT_004b647c;
extern undefined4 *DAT_004b6480;
extern undefined4 DAT_004b6484;

// USA 004B632C <- EU 004B6304 (Ghidra, non-matching)
// GLOBAL DAT_004b6470 undefined4
// GLOBAL DAT_004b6474 undefined4
// GLOBAL DAT_004b6478 int
// GLOBAL DAT_004b647c int
// GLOBAL DAT_004b6480 undefined4 *
// GLOBAL DAT_004b6484 undefined4

void func_004B632C(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define iStack_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define auStack_44 ((undefined1 *)(albw_frame + 0xc))
  #define local_24 (*(uint *)(albw_frame + 0x2c))
  #define local_20 (*(uint *)(albw_frame + 0x30))
  #define aiStack_1c ((int *)(albw_frame + 0x34))
  puVar1 = func_00689A2C(&iStack_50,auStack_44,0x20);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b6474;
  local_20 = 0xffffffff;
  aiStack_1c[0] = 0;
  local_24 = 0xffffffff;
  func_00688CA0(param_3,&iStack_50);
  func_006875AC((int *)&local_20,&iStack_50,-1);
  if (local_20 < 6) {
    func_00688CA0(param_3,&iStack_50);
    func_006875AC((int *)&local_24,&iStack_50,-1);
    if (local_24 < *(uint *)(DAT_004b647c + *(int *)(DAT_004b6478 + param_1) * 4)) {
      func_00688CA0(param_3,&iStack_50);
      if (*local_4c != '\0') {
        func_006875AC(aiStack_1c,&iStack_50,-1);
      }
      puVar1 = DAT_004b6480;
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = func_0010983C(*DAT_004b6480,*(int *)(param_1 + 0x20));
      }
      puVar2 = (undefined4 *)func_0010BAB4(0x18);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
        puVar2[2] = 0x22;
        *puVar2 = DAT_004b6484;
        puVar2[3] = local_24;
        puVar2[4] = local_20;
        puVar2[5] = aiStack_1c[0];
      }
      func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
      if (iVar3 != 1) {
        func_0010983C(*puVar1,iVar3);
      }
    }
  }
  return;
}

