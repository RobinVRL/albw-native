#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b47b8;
extern undefined4 DAT_004b47bc;
extern undefined4 DAT_004b47c0;
extern undefined4 DAT_004b47c4;
extern float DAT_004b47c8;
extern undefined4 *DAT_004b47cc;
extern undefined4 DAT_004b47d0;

// USA 004B4650 <- EU 004B4628 (Ghidra, non-matching)
// GLOBAL DAT_004b47b8 undefined4
// GLOBAL DAT_004b47bc undefined4
// GLOBAL DAT_004b47c0 undefined4
// GLOBAL DAT_004b47c4 undefined4
// GLOBAL DAT_004b47c8 float
// GLOBAL DAT_004b47cc undefined4 *
// GLOBAL DAT_004b47d0 undefined4

void func_004B4650(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  #define local_44 (*(int *)(albw_frame + 0x2c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define aiStack_3c ((int *)(albw_frame + 0x34))
  #define auStack_30 ((undefined1 *)(albw_frame + 0x40))
  puVar1 = func_00689A2C(aiStack_3c,auStack_30,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b47bc;
  func_00688CA0(param_3,aiStack_3c);
  uVar2 = func_00691D84(param_2,aiStack_3c);
  if (-1 < (int)uVar2) {
    puVar1 = func_00689A2C(aiStack_70,auStack_64,0x20);
    *(undefined1 *)puVar1[1] = 0;
    *puVar1 = DAT_004b47c4;
    func_00688CA0(param_3,aiStack_70);
    func_006875AC(&local_44,aiStack_70,-1);
    fVar5 = (float)VectorSignedToFloat(local_44,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = DAT_004b47c8;
    uVar7 = func_00114608((uint)ALBW_AS_U32((fVar5 * DAT_004b47c8)),extraout_r1);
    local_44 = (int)uVar7;
    func_00688CA0(param_3,aiStack_70);
    func_006875AC(&local_40,aiStack_70,-1);
    fVar5 = (float)VectorSignedToFloat(local_40,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = func_00114608((uint)ALBW_AS_U32((fVar5 * fVar6)),extraout_r1_00);
    puVar1 = DAT_004b47cc;
    local_40 = (int)uVar7;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = func_0010983C(*DAT_004b47cc,*(int *)(param_1 + 0x20));
    }
    puVar3 = (undefined4 *)func_0010BAB4(0x18);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = param_2[0x670d];
      puVar3[2] = 0x21;
      *puVar3 = DAT_004b47d0;
      puVar3[3] = uVar2;
      puVar3[4] = local_44;
      puVar3[5] = local_40;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar3);
    if (iVar4 != 1) {
      func_0010983C(*puVar1,iVar4);
    }
  }
  return;
}

