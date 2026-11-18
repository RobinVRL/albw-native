#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6);
extern int func_00104800(void);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_001081A4(int param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_001026c8;
extern undefined4 DAT_001026cc;
extern int DAT_001026d0;
extern undefined4 *DAT_001026d4;

// USA 001025B0 <- EU 001025B0 (Ghidra, non-matching)
// GLOBAL DAT_001026c8 char *
// GLOBAL DAT_001026cc undefined4
// GLOBAL DAT_001026d0 int
// GLOBAL DAT_001026d4 undefined4 *

undefined4 func_001025B0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 in_r2;
  undefined4 *puVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  pcVar1 = DAT_001026c8;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar5 = DAT_001026cc;
  if (*DAT_001026c8 == '\0') {
    uVar2 = func_00104800();
    bVar7 = DAT_001026d0 == uVar2 * 0x400000;
    if (!bVar7) {
      uVar2 = -((int)uVar2 >> 0x1f);
      bVar7 = uVar2 == 0;
    }
                    /* WARNING: Subroutine does not return */
    if (!bVar7) {
      func_0010C1B8(uVar2,DAT_001026d0,in_r2);
    }
    iVar3 = func_00103CBC(param_2);
    iVar4 = func_00104868(DAT_001026d4,(undefined4 *)param_2,iVar3,0);
                    /* WARNING: Subroutine does not return */
    if (-(iVar4 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar4 >> 0x1f),extraout_r1,iVar3);
    }
    puVar6 = &local_20;
    iVar3 = func_00104710(&local_28,&local_24,puVar6,&local_1c,&local_18,&local_14);
                    /* WARNING: Subroutine does not return */
    if (-(iVar3 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar3 >> 0x1f),extraout_r1_00,puVar6);
    }
    func_001081A4((int)(param_1 + 0xb),local_28,0x2b0,1);
    iVar3 = param_1[0xd];
    param_1[1] = iVar3;
    param_1[8] = iVar3 + 0x158;
    param_1[3] = iVar3 + 0xa8;
    param_1[5] = iVar3 + 0x108;
    param_1[10] = iVar3 + 0x238;
    *param_1 = local_24;
    param_1[2] = local_20;
    param_1[4] = local_1c;
    param_1[7] = local_18;
    param_1[9] = local_14;
    *pcVar1 = '\x01';
    uVar5 = 0;
  }
  return uVar5;
}

