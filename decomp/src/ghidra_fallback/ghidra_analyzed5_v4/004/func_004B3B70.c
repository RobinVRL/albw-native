#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b3cf0;
extern undefined4 DAT_004b3cf4;
extern undefined4 DAT_004b3cf8;
extern undefined4 DAT_004b3cfc;
extern float DAT_004b3d00;
extern float DAT_004b3d04;
extern undefined4 *DAT_004b3d08;
extern undefined4 DAT_004b3d0c;

// USA 004B3B70 <- EU 004B3B48 (Ghidra, non-matching)
// GLOBAL DAT_004b3cf0 undefined4
// GLOBAL DAT_004b3cf4 undefined4
// GLOBAL DAT_004b3cf8 undefined4
// GLOBAL DAT_004b3cfc undefined4
// GLOBAL DAT_004b3d00 float
// GLOBAL DAT_004b3d04 float
// GLOBAL DAT_004b3d08 undefined4 *
// GLOBAL DAT_004b3d0c undefined4

void func_004B3B70(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define iStack_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(char * *)(albw_frame + 0xc))
  #define auStack_6c ((undefined1 *)(albw_frame + 0x14))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define aiStack_44 ((int *)(albw_frame + 0x3c))
  #define auStack_38 ((undefined1 *)(albw_frame + 0x48))
  #define local_28 ((int *)(albw_frame + 0x58))
  puVar1 = func_00689A2C(aiStack_44,auStack_38,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b3cf4;
  func_00688CA0(param_3,aiStack_44);
  uVar2 = func_00691D84(param_2,aiStack_44);
  if (-1 < (int)uVar2) {
    puVar1 = func_00689A2C(&iStack_78,auStack_6c,0x20);
    *(undefined1 *)puVar1[1] = 0;
    *puVar1 = DAT_004b3cfc;
    func_00688CA0(param_3,&iStack_78);
    local_4c = DAT_004b3d00;
    if (*local_74 != '\0') {
      func_00687AF0(&local_4c,&iStack_78);
    }
    if (0x3f800000 < (int)ALBW_AS_U32(local_4c)) {
      local_4c = DAT_004b3d04;
    }
    fVar5 = DAT_004b3d04;
    func_00688CA0(param_3,&iStack_78);
    func_00687AF0(&local_48,&iStack_78);
    if (0x3f800000 < (int)ALBW_AS_U32(local_48)) {
      local_48 = fVar5;
    }
    func_00688CA0(param_3,&iStack_78);
    func_006875AC(local_28,&iStack_78,-1);
    puVar1 = DAT_004b3d08;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = func_0010983C(*DAT_004b3d08,*(int *)(param_1 + 0x20));
    }
    puVar3 = (undefined4 *)func_0010BAB4(0x1c);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = param_2[0x670d];
      puVar3[2] = 0x10;
      *puVar3 = DAT_004b3d0c;
      puVar3[3] = uVar2;
      puVar3[4] = ALBW_AS_U32(local_4c);
      puVar3[5] = ALBW_AS_U32(local_48);
      puVar3[6] = local_28[0];
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar3);
    if (iVar4 != 1) {
      func_0010983C(*puVar1,iVar4);
    }
  }
  return;
}

