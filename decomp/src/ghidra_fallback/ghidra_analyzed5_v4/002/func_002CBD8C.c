#include "ghidra_types.h"

extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004BC8D8(int param_1);
extern int func_004BDB20(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00584B94(int param_1,int param_2);
extern int *piRam002cbf64;
extern undefined4 DAT_002cbf54;
extern int DAT_002cbf58;
extern int *DAT_002cbf5c;
extern int DAT_002cbf60;
extern undefined4 DAT_0034ca74;
extern undefined4 DAT_0034ca78;

// USA 002CBD8C <- EU 002CBD68 (Ghidra, non-matching)
// GLOBAL DAT_002cbf54 undefined4
// GLOBAL DAT_002cbf58 int
// GLOBAL DAT_002cbf5c int *
// GLOBAL DAT_002cbf60 int
// GLOBAL DAT_0034ca74 undefined4
// GLOBAL DAT_0034ca78 undefined4
// GLOBAL UNK_002cbf64 int *

void func_002CBD8C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  #define aiStack_34 ((int *)(albw_frame + 0xc))
  *(undefined4 *)(param_1 + 0x3ac) = DAT_002cbf54;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  pcVar8 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar5 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar5 >> 1)));
  }
  (*pcVar8)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar5 >> 1));
  iVar6 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar6;
  if (*(int *)(param_1 + 0x970) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fparam_0);
  }
  piVar1 = DAT_002cbf5c;
  if (*(char *)(param_1 + 0x9b1) == '\0') {
    bVar4 = func_00584B94(*DAT_002cbf5c,DAT_002cbf58);
    if (((bVar4) && (bVar4 = func_00584B94(*piVar1,0x284), bVar4)) &&
       (bVar4 = func_00584B94(*piVar1,DAT_002cbf60), bVar4)) {
      *(undefined1 *)(param_1 + 0x9b1) = 1;
      *(undefined1 *)(param_1 + 0x9d0) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x9b4) + 0x44) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x9b8) + 0x44) = 1;
      func_004BDB20(param_1);
      *(undefined4 *)(param_1 + 0x984) = 9;
    }
  }
  func_001151D8(afStack_40,(undefined4 *)(*(int *)(param_1 + 0x7a0) + 0x104));
  if (*(int *)(param_1 + 0x9b4) != 0) {
    func_00435ED0(*(int *)(*(int *)(param_1 + 0x9b4) + 0x14),afStack_40);
    func_0043625C(*(int **)(*(int *)(param_1 + 0x9b4) + 0x14),(undefined4 *)(param_1 + 0x3d0));
    func_004ED9C8(*(int *)(param_1 + 0x9b4));
  }
  if (*(int *)(param_1 + 0x9b8) != 0) {
    func_00435ED0(*(int *)(*(int *)(param_1 + 0x9b8) + 0x14),afStack_40);
    func_0043625C(*(int **)(*(int *)(param_1 + 0x9b8) + 0x14),(undefined4 *)(param_1 + 0x3d0));
    func_004ED9C8(*(int *)(param_1 + 0x9b8));
  }
  func_004BC8D8(param_1);
  piVar1 = piRam002cbf64;
  if (**(int **)(param_1 + 0x9bc) != 0) {
    if (*piRam002cbf64 != 0) {
      func_00520F54(param_1,afStack_40,*(undefined4 *)(*piRam002cbf64 + 0x1c));
      aiStack_34[0] = 0;
      func_003413DC(*piVar1,afStack_40,aiStack_34);
    }
  }
  uVar2 = DAT_0034ca74;
  puVar7 = *(undefined4 **)(param_1 + 0x9bc);
  puVar7[1] = 0;
  puVar7[2] = uVar2;
  puVar7[3] = uVar2;
  puVar7[4] = uVar2;
  puVar7[5] = uVar2;
  puVar7[6] = uVar2;
  puVar7[7] = uVar2;
  *(undefined1 *)(puVar7 + 8) = 0;
  *(undefined1 *)((int)puVar7 + 0x21) = 0x1f;
  *(undefined1 *)((int)puVar7 + 0x22) = 0xff;
  *(undefined1 *)((int)puVar7 + 0x23) = 0;
  puVar7[9] = uVar2;
  puVar7[10] = uVar2;
  puVar7[0xb] = uVar2;
  uVar3 = DAT_0034ca78;
  *(undefined2 *)(puVar7 + 0xc) = 0;
  *(undefined2 *)((int)puVar7 + 0x32) = 0xffff;
  puVar7[0xd] = uVar3;
  *puVar7 = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = uVar2;
  puVar7[0x10] = uVar2;
  puVar7[0x11] = uVar2;
  return;
}

