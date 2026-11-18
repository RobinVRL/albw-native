#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_00178B5C(int param_1);
extern int func_0017A190(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00429FCC(int param_1);
extern int func_005246D8(int param_1);
extern int func_00524708(int param_1);
extern int func_00569310(float *param_1,int param_2);
extern int func_0066CB14(undefined4 *param_1,undefined1 param_2);
extern float DAT_00444a0c;
extern float DAT_00444a10;

// USA 00444888 <- EU 00444868 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00444a0c float
// GLOBAL DAT_00444a10 float

undefined4 func_00444888(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_24 (*(float *)(albw_frame + 0xc))
  if (*(short *)(param_1 + 0x4b8) == 0) {
    iVar4 = *(int *)(param_1 + 0x4b4);
    if ((*(char *)(iVar4 + 0x2a) == '\0') ||
       ((*(char *)(iVar4 + 0x28) != '\0' && (*(short *)(iVar4 + 0x36) == 0)))) {
      return func_0066CB14((undefined4 *)(param_1 + 0x74),4);
    }
    func_00178B5C(iVar4);
    piVar6 = (int *)(param_1 + 0xc4);
    bVar2 = *(char *)(param_1 + 0x4ba) + 1;
    *(byte *)(param_1 + 0x4ba) = bVar2;
    if (0xb < bVar2) {
      *(undefined1 *)(param_1 + 0x4ba) = 0;
    }
    if (*(byte *)(param_1 + 0x4ba) < 0xc) {
      piVar6 = piVar6 + (uint)*(byte *)(param_1 + 0x4ba) * 0x15;
    }
    cVar1 = *(char *)((int)piVar6 + 0xd);
    bVar8 = cVar1 == '\0';
    if (bVar8) {
      cVar1 = *(char *)((int)piVar6 + 0xe);
    }
    if (!bVar8 || cVar1 != '\0') {
      func_0012C790((int)piVar6);
      func_001B6B38(piVar6,extraout_r1,param_3,param_4);
    }
    iVar4 = *(int *)(param_1 + 0x4b4);
    piVar7 = (int *)piVar6[0xf];
    uVar5 = func_00524708(iVar4);
    *(undefined2 *)(iVar4 + 0x32) = 0;
    *(undefined1 *)(iVar4 + 0x3d) = 0;
    (**(code **)(*piVar7 + 0x60))(piVar7,*(undefined4 *)(iVar4 + 8),0,uVar5);
    func_00569310(&fStack_30,piVar6[0xf]);
    local_24 = local_24 - local_2c;
    if (local_24 <= DAT_00444a0c) {
      local_24 = -local_24;
    }
    piVar6[0x12] = (int)ALBW_AS_U32((local_24 * DAT_00444a10));
    piVar6[0x11] = piVar6[0xf];
    func_00167E04(piVar6[7],piVar6[0xe],0);
    func_00167E04(piVar6[7],piVar6[0xf],1);
    func_00167E04(piVar6[7],piVar6[0x10],0);
    *(undefined1 *)((int)piVar6 + 0xe) = 1;
    func_0017A190(*(int *)(param_1 + 0x4b4));
    iVar4 = func_005246D8(*(int *)(param_1 + 0x4b4));
    if (iVar4 != 0) {
      func_00429FCC(*(int *)(param_1 + 0x4b4));
    }
    sVar3 = 0x28;
  }
  else {
    sVar3 = *(short *)(param_1 + 0x4b8) + -1;
  }
  *(short *)(param_1 + 0x4b8) = sVar3;
  return 0;
}

