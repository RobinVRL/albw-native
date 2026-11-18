#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0031C3A4(int param_1);
extern int func_003FF904(int param_1,int param_2);
extern int func_003FFE34(int param_1,int param_2);
extern int func_0043F904(int param_1);
extern int func_004CD6A4(int param_1,int *param_2);
extern int func_00532BA0(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern float DAT_00440324;
extern int *DAT_00440328;
extern undefined4 DAT_0044032c;
extern int DAT_00440330;
extern int *DAT_00440334;

// USA 004401C8 <- EU 004401A8 (Ghidra, non-matching)
// GLOBAL DAT_00440324 float
// GLOBAL DAT_00440328 int *
// GLOBAL DAT_0044032c undefined4
// GLOBAL DAT_00440330 int
// GLOBAL DAT_00440334 int *

void func_004401C8(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x16c) + 0x54) != '\x05') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0xfc);
    fVar4 = DAT_00440324;
    func_003FF904(*(int *)(iVar3 + 0x24),*(int *)(iVar3 + 0x20));
    func_003FFE34(*(int *)(iVar3 + 0x24),*(int *)(iVar3 + 0x20));
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 5;
    *(undefined2 *)(param_1 + 0x134) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x134),fVar4);
    uVar2 = 1;
  }
  else if (cVar1 == '\x01') {
    fVar4 = DAT_00440324;
    iVar3 = func_00532BA0(param_1 + 0x134);
    if (iVar3 == 0) {
      return;
    }
    func_002317C0((undefined2 *)(*(int *)(param_1 + 0x16c) + 0x74),fVar4);
    local_1c = DAT_0044032c;
    local_20 = DAT_00440330;
    func_00587F74(*DAT_00440334,&local_20,0);
    uVar2 = 2;
  }
  else if (cVar1 == '\x02') {
    fVar4 = DAT_00440324;
    iVar3 = func_00532BA0(*(int *)(param_1 + 0x16c) + 0x74);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 5;
    *(undefined2 *)(param_1 + 0x134) = 2;
    func_002317C0((undefined2 *)(param_1 + 0x134),fVar4);
    uVar2 = 3;
  }
  else {
    if (cVar1 != '\x03') {
      return;
    }
    iVar3 = func_00532BA0(param_1 + 0x134);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x16c);
    func_004CD6A4(*DAT_00440328,(int *)(iVar3 + 0x20));
    func_0031C3A4(iVar3);
    func_0043F904(param_1);
    uVar2 = 0xff;
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar2;
  return;
}

