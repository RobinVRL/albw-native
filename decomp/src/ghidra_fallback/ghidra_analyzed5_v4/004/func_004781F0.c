#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BEE00(int param_1);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_0044F498(int param_1,undefined1 param_2,undefined4 *param_3);
extern int func_00478CB8(int param_1,uint param_2,int param_3,int param_4);
extern int func_0051B670(int param_1);
extern int func_0051BF44(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00579CEC(int param_1);
extern int func_0058E0D4(int param_1);
extern int func_0066BE5C(undefined4 *param_1,char param_2);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern undefined DAT_00478470;
extern int DAT_00478484;
extern undefined4 DAT_00478488;
extern int *DAT_0047848c;
extern char s___SE_S_ITEM_HOLD_00478472[];
extern char s_cf_00478472[];
extern undefined4 _DAT_00478470;

// USA 004781F0 <- EU 004781C8 (Ghidra, non-matching)
// GLOBAL DAT_00478470 undefined
// GLOBAL DAT_00478484 int
// GLOBAL DAT_00478488 undefined4
// GLOBAL DAT_0047848c int *
// GLOBAL s_cf_00478472 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_004781F0(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_r3;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  uVar3 = (uint)*(char *)(param_1 + 0x30a);
  fVar8 = ALBW_AS_F32(_DAT_00478470);
  if (uVar3 == 0x14) {
    cVar1 = *(char *)(*(int *)(param_1 + 500) + 0x3c);
    if (('\a' < cVar1) && (cVar1 != '\n')) {
      func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\n');
    }
    iVar6 = *(int *)(param_1 + 500);
    iVar7 = *(int *)(param_1 + 0x200);
    cVar1 = *(char *)(iVar6 + 0xe4);
    func_0031B6A0(iVar7 + 0x44,(int)cVar1,0);
    *(char *)(iVar7 + 0xb4) = cVar1;
    iVar6 = *(int *)(**(int **)(iVar6 + 0x1c) + 0x10);
    *(float *)(iVar7 + 0xac) = *(float *)(iVar6 + 0x54) - fVar8;
    uVar4 = *(undefined4 *)(iVar6 + 100);
  }
  else {
    if (uVar3 == 0x15) {
      cVar1 = *(char *)(*(int *)(param_1 + 0x1f8) + 0x3c);
      if (('\a' < cVar1) && (cVar1 != '\n')) {
        func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\n');
      }
      iVar6 = *(int *)(param_1 + 0x1f8);
      iVar7 = *(int *)(param_1 + 0x200);
      cVar1 = *(char *)(iVar6 + 0xe4);
      func_0031B6A0(iVar7 + 0x44,(int)cVar1,0);
      *(char *)(iVar7 + 0xb4) = cVar1;
      iVar6 = *(int *)(**(int **)(iVar6 + 0x1c) + 0x10);
      *(float *)(iVar7 + 0xac) = *(float *)(iVar6 + 0x54) - fVar8;
      *(undefined4 *)(iVar7 + 0xb0) = *(undefined4 *)(iVar6 + 100);
      goto LAB_00478338;
    }
    piVar5 = (int *)(param_1 + 0x168);
    if (uVar3 < 0x14) {
      piVar5 = piVar5 + uVar3;
    }
    iVar6 = *piVar5;
    func_0066BE5C((undefined4 *)(iVar6 + 0x38),'\x02');
    func_00231340((short *)(iVar6 + 0xd4));
    piVar5 = (int *)(param_1 + 0x168);
    iVar7 = *(int *)(param_1 + 0x200);
    if ((uint)(int)*(char *)(param_1 + 0x30a) < 0x14) {
      piVar5 = piVar5 + *(char *)(param_1 + 0x30a);
    }
    iVar6 = *piVar5;
    cVar1 = *(char *)(iVar6 + 0xe0);
    func_0031B6A0(iVar7 + 0x44,(int)cVar1,0);
    *(char *)(iVar7 + 0xb4) = cVar1;
    iVar6 = *(int *)(**(int **)(iVar6 + 0x1c) + 0x10);
    *(undefined4 *)(iVar7 + 0xac) = *(undefined4 *)(iVar6 + 0x54);
    uVar4 = *(undefined4 *)(iVar6 + 100);
  }
  *(undefined4 *)(iVar7 + 0xb0) = uVar4;
LAB_00478338:
  func_0066BF2C((undefined4 *)(iVar7 + 0x20),'\x01');
  local_24 = s___SE_S_ITEM_HOLD_00478472 + 2;
  local_28 = DAT_00478484;
  func_00533078(*(undefined4 *)(param_1 + 0x200),&local_28,param_1 + 0x2a0);
  uVar9 = CONCAT44(DAT_00478488,fVar8);
  *(undefined4 *)(param_1 + 0x29c) = DAT_00478488;
  func_00478CB8(param_1,0xffffffff,0,in_r3);
  *(undefined1 *)(param_1 + 0x308) = 0xff;
  func_002BEE00(*(int *)(param_1 + 0x1fc));
  piVar5 = DAT_0047848c;
  cVar1 = *(char *)(*(int *)(param_1 + 0x200) + 0xb4);
  *(undefined1 *)(param_1 + 0x114) = 1;
  *(char *)(param_1 + 0x115) = cVar1;
  *(undefined1 *)(param_1 + 0x116) = 0;
  sVar2 = func_0058E0D4(*piVar5);
  if (sVar2 == 0) {
    func_0051BF44(*piVar5,(int)cVar1,0,in_r3);
  }
  else {
    func_0051B670(*piVar5);
  }
  iVar6 = func_00579CEC(param_1);
  if (iVar6 != 0) {
    iVar6 = *(int *)(**(int **)(*(int *)(param_1 + 0x1f8) + 0x1c) + 0x10);
    local_38 = *(float *)(iVar6 + 0x54) - ALBW_AS_F32(uVar9);
    local_34 = *(undefined4 *)(iVar6 + 100);
    func_0044F498(*(int *)(param_1 + 0x214),4,&local_38);
    fVar8 = ALBW_AS_F32(((ulonglong)uVar9 >> 0x20));
    func_0012C790(*(int *)(param_1 + 0x1fc));
    if ((*(ushort *)(param_1 + 0x1c4) & 0xff) == 0) {
      *(undefined2 *)(param_1 + 0x1c4) = 2;
      func_002317C0((undefined2 *)(param_1 + 0x1c4),fVar8);
    }
  }
  return;
}

