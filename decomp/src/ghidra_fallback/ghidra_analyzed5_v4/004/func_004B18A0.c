#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691E50(int *param_1,int *param_2);
extern undefined4 DAT_004b1a28;
extern undefined4 DAT_004b1a2c;
extern undefined4 DAT_004b1a30;
extern undefined4 DAT_004b1a34;
extern float DAT_004b1a38;
extern undefined4 *DAT_004b1a3c;
extern undefined4 DAT_004b1a40;

// USA 004B18A0 <- EU 004B1878 (Ghidra, non-matching)
// GLOBAL DAT_004b1a28 undefined4
// GLOBAL DAT_004b1a2c undefined4
// GLOBAL DAT_004b1a30 undefined4
// GLOBAL DAT_004b1a34 undefined4
// GLOBAL DAT_004b1a38 float
// GLOBAL DAT_004b1a3c undefined4 *
// GLOBAL DAT_004b1a40 undefined4

void func_004B18A0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define iStack_70 (*(int *)(albw_frame + 0x10))
  #define local_6c (*(char * *)(albw_frame + 0x14))
  #define auStack_64 ((undefined1 *)(albw_frame + 0x1c))
  #define aiStack_44 ((int *)(albw_frame + 0x3c))
  #define auStack_38 ((undefined1 *)(albw_frame + 0x48))
  puVar1 = func_00689A2C(aiStack_44,auStack_38,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b1a2c;
  func_00688CA0(param_3,aiStack_44);
  uVar2 = func_00691E50((int *)(param_2 + 0x270),aiStack_44);
  if (-1 < (int)uVar2) {
    uVar4 = 0;
    puVar1 = func_00689A2C(&iStack_70,auStack_64,0x20);
    local_7c = DAT_004b1a38;
    *(undefined1 *)puVar1[1] = 0;
    *puVar1 = DAT_004b1a34;
    local_78 = local_7c;
    local_74 = local_7c;
    func_00688CA0(param_3,&iStack_70);
    if (*local_6c != '\0') {
      func_00687AF0(&local_7c,&iStack_70);
      func_00688CA0(param_3,&iStack_70);
      if (*local_6c != '\0') {
        func_00687AF0(&local_78,&iStack_70);
        func_00688CA0(param_3,&iStack_70);
        if (*local_6c != '\0') {
          func_00687AF0(&local_74,&iStack_70);
          uVar4 = 1;
        }
      }
    }
    puVar1 = DAT_004b1a3c;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = func_0010983C(*DAT_004b1a3c,*(int *)(param_1 + 0x20));
    }
    puVar3 = (undefined4 *)func_0010BAB4(0x20);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *(undefined4 *)(param_2 + 0x19c34);
      puVar3[2] = 0x15;
      *puVar3 = DAT_004b1a40;
      puVar3[3] = ALBW_AS_U32(local_7c);
      puVar3[4] = ALBW_AS_U32(local_78);
      puVar3[5] = ALBW_AS_U32(local_74);
      puVar3[6] = uVar2;
      *(undefined1 *)(puVar3 + 7) = uVar4;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar3);
    if (iVar5 != 1) {
      func_0010983C(*puVar1,iVar5);
    }
  }
  return;
}

