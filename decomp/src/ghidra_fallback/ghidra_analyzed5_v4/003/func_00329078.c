#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0032A210(int param_1);
extern int func_0032CCC4(int param_1);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491404(float *param_1,float *param_2);
extern int func_004918CC(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00492078(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A44C(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 DAT_003292a0;
extern float DAT_003292a4;
extern float DAT_003292a8;
extern int DAT_003292ac;
extern float DAT_003292b0;
extern int DAT_003292b4;

// USA 00329078 <- EU 00329054 (Ghidra, non-matching)
// GLOBAL DAT_003292a0 undefined4
// GLOBAL DAT_003292a4 float
// GLOBAL DAT_003292a8 float
// GLOBAL DAT_003292ac int
// GLOBAL DAT_003292b0 float
// GLOBAL DAT_003292b4 int

void func_00329078(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define afStack_98 ((float *)(albw_frame + 0x8))
  #define afStack_80 ((float *)(albw_frame + 0x20))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define afStack_44 ((float *)(albw_frame + 0x5c))
  if (((*(char *)(param_1 + 0x650) != '\0') && (iVar7 = *(int *)(param_1 + 0x5a8), iVar7 != 0)) &&
     (iVar1 = func_0058A44C(param_1), iVar1 != 0)) {
    local_50 = DAT_003292a4;
    local_4c = DAT_003292a0;
    local_48 = DAT_003292a0;
    fVar8 = DAT_003292a4;
    func_004D7F70(&local_50,-*(int *)(param_1 + 1000));
    func_0048B5D4(afStack_98,&local_50,*(uint *)(param_1 + 0x500));
    func_00491404(afStack_44,afStack_98);
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    func_00492078((float *)(iVar7 + 0x80),(float *)(iVar7 + 0x80),afStack_44);
    *(undefined1 *)(param_1 + 0xc9c) = 1;
    iVar1 = DAT_003292ac;
    if (*(int *)(param_1 + 0xc80) != 0) {
      iVar6 = *(int *)(param_1 + 0xc80) + -1;
      *(int *)(param_1 + 0xc80) = iVar6;
      iVar2 = 0xf;
      iVar5 = *(int *)(iVar1 + 0x1c);
      if (*(char *)(param_1 + 0xc98) != '\0') {
        iVar5 = *(int *)(iVar1 + 0x20);
        iVar2 = 0x18;
      }
      uVar3 = iVar5 * (iVar2 - iVar6);
      pfVar4 = (float *)(DAT_003292b4 + (uVar3 >> 0x18) * 0x10);
      fVar9 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = *pfVar4 + pfVar4[1] * fVar9 * DAT_003292b0;
      fVar9 = fVar10 * DAT_003292a8;
      fVar10 = (fVar8 - fVar10 * DAT_003292a8) * *(float *)(param_1 + 0xc50);
      *(float *)(param_1 + 0x4e4) = fVar10;
      *(float *)(param_1 + 0x4e8) = (fVar8 + fVar9) * *(float *)(param_1 + 0xc50);
      *(float *)(param_1 + 0x4ec) = fVar10;
    }
    func_004CEAF0(iVar7);
    func_001119F4(afStack_80,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar7 + 0x24) + 0x14) + *(int *)(param_1 + 0xc88) * 0x30));
    fVar8 = fVar8 / *(float *)(param_1 + 0xc50);
    func_004918CC(afStack_80,fVar8,fVar8,fVar8);
    iVar7 = *(int *)(param_1 + 0xa88);
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar7 + 0x80),afStack_80);
    func_004CEAF0(*(int *)(param_1 + 0xa88));
    func_0032A210(param_1);
    func_0032CCC4(param_1 + 0x8c4);
    func_0032CCC4(param_1 + 0x99c);
    uVar11 = func_0058AB74(param_1);
    if ((((int)uVar11 == 0xd) || (uVar11 = func_0058AB74(param_1), (int)uVar11 == 0xe)) &&
       (iVar7 = func_0058A8F0(param_1), iVar7 != 0)) {
      func_004FABDC(param_1,*(undefined4 *)(param_1 + 0xc84),0x10,0);
      *(bool *)(param_1 + 0xc9b) = *(char *)(param_1 + 0xc9b) == '\0';
    }
  }
  return;
}

