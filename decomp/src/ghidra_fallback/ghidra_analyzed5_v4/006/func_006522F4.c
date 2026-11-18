#include "ghidra_types.h"

extern int func_00100790(int *param_1);
extern int func_001007A2(byte *param_1,int param_2,undefined4 param_3);
extern int func_001007C0(short *param_1,byte *param_2,int param_3,undefined4 param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C7D28(int param_1,byte *param_2,int param_3);
extern int func_003C89CC(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003C8A48(short *param_1);
extern int func_003C8BD8(int *param_1);
extern int func_003C9BCC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C9DCC(uint *param_1,int *param_2,int param_3,uint param_4,int param_5);
extern int *DAT_006525e8;
extern uint DAT_006525ec;
extern int DAT_006525f0;
extern int DAT_006525f4;
extern int *DAT_006525f8;

// USA 006522F4 <- EU 006522CC (Ghidra, non-matching)
// GLOBAL DAT_006525e8 int *
// GLOBAL DAT_006525ec uint
// GLOBAL DAT_006525f0 int
// GLOBAL DAT_006525f4 int
// GLOBAL DAT_006525f8 int *

undefined4 func_006522F4(int param_1,int *param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x270]; /* entry_sp - 0x270 .. entry_sp + 0x0 */
#define stack0xfffffd90 (*(undefined4 *)(albw_frame + 0x0))
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar6;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  int *piVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  byte *pbVar12;
  undefined8 uVar13;
  #define aiStack_26c ((int *)(albw_frame + 0x4))
  #define local_54 (*(int *)(albw_frame + 0x21c))
  #define local_50 ((int *)(albw_frame + 0x220))
  #define piStack_2c (*(int * *)(albw_frame + 0x244))
  #define local_28 (*(int *)(albw_frame + 0x248))
  psVar9 = (short *)&stack0xfffffd90;
  psVar10 = (short *)&stack0xfffffd90;
  psVar11 = (short *)&stack0xfffffd90;
  local_54 = *DAT_006525e8;
  local_50[8] = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  uVar13 = (**(code **)(*param_2 + 8))(param_2);
  pbVar12 = (byte *)param_2[1];
  func_003C9BCC((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),param_3);
  uVar4 = DAT_006525ec;
  local_50[6] = 0;
  local_50[7] = 0;
  func_00100790(local_50 + 6);
  iVar8 = DAT_006525f0;
  while ((iVar2 = func_001007A2(pbVar12,iVar8,local_50 + 6), uVar6 = extraout_r1, iVar2 != 0 &&
         (iVar3 = func_001007C0(psVar9,pbVar12,iVar2,local_50 + 6), uVar6 = extraout_r1_00,
         iVar3 != 0))) {
    psVar9 = psVar9 + 1;
    pbVar12 = pbVar12 + iVar2;
  }
  *psVar9 = 0;
  uVar4 = func_003C89CC((short *)&stack0xfffffd90,uVar6,uVar4,0);
  if (((int)uVar4 < 0) &&
     (((uVar1 = (uVar4 & 0x3fc00) >> 10, uVar1 != 0x11 || ((uVar4 & 0x3ff) < 100)) ||
      (0xb3 < (uVar4 & 0x3ff))))) {
    if (((uVar1 == 0x11) && (DAT_006525f4 <= (int)(uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 400)) {
      *(undefined4 *)(local_50[8] + 0xb0) = 1;
      *(undefined4 *)(local_54 + 0x9c0) = 5;
      return 0;
    }
    if (((uVar1 == 0x11) && (uVar4 = uVar4 & 0x3ff, 0xb3 < uVar4)) && (uVar4 < 200)) {
      uVar13 = (**(code **)(*param_2 + 8))(param_2);
      pbVar12 = (byte *)param_2[1];
      func_003C9BCC((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar4);
      local_50[6] = 0;
      local_50[7] = 0;
      func_00100790(local_50 + 6);
      while( true ) {
        piVar7 = local_50 + 6;
        piVar5 = (int *)func_001007A2(pbVar12,iVar8,piVar7);
        if ((piVar5 == (int *)0x0) ||
           (piVar7 = piVar5, iVar2 = func_001007C0(psVar10,pbVar12,(int)piVar5,local_50 + 6),
           iVar2 == 0)) break;
        psVar10 = psVar10 + 1;
        pbVar12 = pbVar12 + (int)piVar5;
      }
      *psVar10 = 0;
      iVar2 = func_003C8A48((short *)&stack0xfffffd90);
      if (-1 < iVar2) {
        uVar13 = (**(code **)(*param_2 + 8))(param_2);
        pbVar12 = (byte *)param_2[1];
        func_003C9BCC((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),piVar7);
        uVar4 = DAT_006525ec;
        local_50[6] = 0;
        local_50[7] = 0;
        func_00100790(local_50 + 6);
        while ((iVar2 = func_001007A2(pbVar12,iVar8,local_50 + 6), uVar6 = extraout_r1_01,
               iVar2 != 0 &&
               (iVar3 = func_001007C0(psVar11,pbVar12,iVar2,local_50 + 6), uVar6 = extraout_r1_02,
               iVar3 != 0))) {
          psVar11 = psVar11 + 1;
          pbVar12 = pbVar12 + iVar2;
        }
        *psVar11 = 0;
        func_003C89CC((short *)&stack0xfffffd90,uVar6,uVar4,0);
      }
    }
  }
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[0] = *DAT_006525f8;
  *(int *)((int)local_50 + *(int *)(local_50[0] + -0x30)) = DAT_006525f8[3];
  (**(code **)(*param_2 + 8))(param_2);
  iVar8 = 1;
  iVar2 = func_003C7D28((int)local_50,(byte *)param_2[1],1);
  uVar6 = extraout_r1_03;
  if (-1 < iVar2) {
    aiStack_26c[0] = 0;
    iVar8 = local_28;
    func_003C9DCC((uint *)(local_50 + 1),aiStack_26c,local_28,DAT_006525ec,1);
    uVar6 = extraout_r1_04;
  }
  if ((local_50[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((local_50[1] & 1U) != 0) {
      func_0010C1B8(local_50[1],uVar6,iVar8);
    }
    func_003C8BD8((int *)(local_50[1] & 0xfffffffe));
    local_50[1] = 0;
    uVar6 = extraout_r1_05;
  }
  if ((local_50[1] & 0xfffffffeU) == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  if ((local_50[1] & 1U) != 0) {
    func_0010C1B8(local_50[1],uVar6,iVar8);
  }
  return func_003C8BD8((int *)(local_50[1] & 0xfffffffe));
}

