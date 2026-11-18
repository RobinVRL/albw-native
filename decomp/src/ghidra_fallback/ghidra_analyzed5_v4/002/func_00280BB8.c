#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int DAT_00280d4c;
extern undefined4 DAT_00280d50;
extern undefined4 DAT_00280d54;

// USA 00280BB8 <- EU 00280BE0 (Ghidra, non-matching)
// GLOBAL DAT_00280d4c int
// GLOBAL DAT_00280d50 undefined4
// GLOBAL DAT_00280d54 undefined4

undefined4 func_00280BB8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20]; /* entry_sp - 0x20 .. entry_sp + 0x0 */
#define stack0xffffffe8 (*(undefined4 *)(albw_frame + 0x8))
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x42c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x42c)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x418) + 1;
  *(int *)(param_1 + 0x418) = iVar2;
  if (*(int *)(param_1 + 0x428) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x428),1,fparam_0);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  iVar2 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  iVar2 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x460);
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  iVar2 = *(int *)(param_1 + 0x410);
  uVar4 = *(undefined4 *)(param_1 + 0x3d4);
  uVar5 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 8) = uVar4;
  *(undefined4 *)(iVar2 + 0xc) = uVar5;
  func_004356B4(*(int **)(param_1 + 0x410));
  func_001512B4(*(int *)(param_1 + 0x414),(float *)(param_1 + 0x3d0));
  if (*(char *)(DAT_00280d4c + param_1) == '\x02' || *(char *)(DAT_00280d4c + param_1) == '\x03') {
    func_0014EEB8(param_1,(undefined4 *)&stack0xffffffe8,DAT_00280d54,
                  *(float *)(*(int *)(param_1 + 0x410) + 0x58));
  }
  return func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x410),param_1 + 0x474,0x1000,0,0);
}

