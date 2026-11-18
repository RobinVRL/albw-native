#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_004219B0(undefined2 *param_1,int param_2);
extern int func_00421A38(int param_1,int param_2);
extern int func_00421ABC(undefined2 *param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00559010(int param_1);
extern int func_0066E1C0(undefined4 *param_1,undefined1 param_2);
extern int DAT_0046e00c;
extern char s_SE_S_POWERUP_CANCEL_0046e010[];
extern char s_SE_S_POWERUP_CHANGE_ITEM_0046e038[];
extern char s_SE_S_POWERUP_DECIDE_0046e024[];

// USA 0046DEE4 <- EU 0046DEBC (Ghidra, non-matching)
// GLOBAL DAT_0046e00c int
// GLOBAL s_SE_S_POWERUP_CANCEL_0046e010 string
// GLOBAL s_SE_S_POWERUP_CHANGE_ITEM_0046e038 string
// GLOBAL s_SE_S_POWERUP_DECIDE_0046e024 string

undefined4 func_0046DEE4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_0046e00c;
  if ((*(ushort *)(*(int *)(param_1 + 0xc4) + 0x16) & 4) == 0) {
    if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 4) == 0) {
      iVar5 = func_00559010(*(int *)(param_1 + 0x9c));
      if (iVar5 == 0) {
        iVar5 = func_00559010(*(int *)(param_1 + 0xa0));
        if (iVar5 == 0) {
          return 0;
        }
        func_004219B0(*(undefined2 **)(param_1 + 0xa8),0);
      }
      else {
        func_00421A38(*(int *)(param_1 + 0xa8),0);
      }
    }
    else {
      iVar5 = func_00421ABC(*(undefined2 **)(param_1 + 0xa8));
      if (iVar5 == 0) goto LAB_0046dff8;
    }
    local_14 = s_SE_S_POWERUP_CHANGE_ITEM_0046e038;
    local_18 = iVar1;
    func_00533078(param_1,&local_18,0);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar4 = *(uint *)(uVar2 + 0x2c);
    bVar7 = -1 < (int)uVar4;
    uVar3 = uVar4;
    if (bVar7) {
      uVar3 = *(uint *)(uVar2 + 0x30);
      uVar2 = uVar3;
    }
    bVar6 = uVar3 == 0;
    if (bVar7 && -1 < (int)uVar2) {
      uVar4 = *(uint *)(param_1 + 0x110);
      bVar6 = uVar4 == uVar2;
    }
    if (!bVar6 && ((bVar7 && -1 < (int)uVar2) && (int)uVar2 <= (int)uVar4)) {
      iVar5 = param_1 + 200;
      if (uVar2 < 9) {
        iVar5 = iVar5 + uVar2 * 8;
      }
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar5 + 4);
      local_14 = s_SE_S_POWERUP_DECIDE_0046e024;
      local_18 = iVar1;
      func_00533078(param_1,&local_18,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x15c) = 0x2d;
      local_14 = s_SE_S_POWERUP_CANCEL_0046e010;
      local_18 = iVar1;
      func_00533078(param_1,&local_18,0);
    }
    func_0012C718(param_1);
  }
LAB_0046dff8:
  return func_0066E1C0((undefined4 *)(param_1 + 0x74),1);
}

