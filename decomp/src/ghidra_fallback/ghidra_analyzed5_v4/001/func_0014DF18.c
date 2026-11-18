#include "ghidra_types.h"

extern int func_002C2D00(int *param_1);
extern int func_0054DD3C(int param_1,uint param_2);
extern int func_0054DD54(int param_1,uint param_2);
extern undefined4 DAT_0014e01c;
extern int DAT_0014e020;

// USA 0014DF18 <- EU 0014DF18 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:1 undefined1
// GLOBAL DAT_0014e01c undefined4
// GLOBAL DAT_0014e020 int

int * func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5,
                   undefined1 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x1d))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined1 *)(albw_frame + 0x38))
  #define local_17 (*(undefined1 *)(albw_frame + 0x39))
  iVar1 = *(int *)(param_1 + 0x1c8 + param_3 * 4);
  if (param_4 < *(uint *)(iVar1 + 200)) {
    local_40 = *(undefined4 *)(*(int *)(iVar1 + 0xd0) + param_4 * 4);
  }
  else {
    local_40 = 0;
  }
  local_50 = DAT_0014e020;
  uStack_4c = DAT_0014e01c;
  iStack_48 = DAT_0014e020;
  local_44 = DAT_0014e01c;
  local_18 = 1;
  local_20 = 0;
  local_3c = 0;
  local_1c = 0;
  local_2c = 0;
  local_24 = 0;
  local_30 = 0;
  local_28 = 0;
  local_33 = param_5;
  local_17 = 0xc4;
  local_34 = param_6;
  local_38 = param_2;
  piVar2 = func_002C2D00(&local_50);
  if (param_1 != 0) {
    uVar4 = 0;
    do {
      iVar1 = func_0054DD54(param_1 + 0x18,uVar4);
      if (iVar1 != 0) {
        uVar3 = func_0054DD3C(param_1 + 0x18,uVar4);
        bVar5 = *(char *)(uVar3 + 2) != '\0';
        if (bVar5) {
          uVar3 = (uint)*(byte *)(uVar3 + 3);
        }
        if (bVar5 && uVar3 != 0) {
          piVar2[0x59] = piVar2[0x59] | 0x100000;
          return piVar2;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
  }
  return piVar2;
}

