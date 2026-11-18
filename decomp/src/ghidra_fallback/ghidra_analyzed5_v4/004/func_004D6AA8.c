#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_004E0490(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, int param_5);
extern int func_00547B6C(uint *param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584368(int param_1);
extern int *DAT_004d6d30;
extern uint *DAT_004d6d34;
extern undefined4 *DAT_004d6d38;
extern undefined4 DAT_004d6d48;
extern undefined4 DAT_004d6e30;
extern undefined4 DAT_004d6e34;
extern int *DAT_004d6e38;
extern undefined4 DAT_004d6e3c;
extern int *DAT_004d6e40;
extern char s_locator10_004d6dac[];
extern char s_locator11_004d6db8[];
extern char s_locator12_004d6dc4[];
extern char s_locator13_004d6dd0[];
extern char s_locator14_004d6ddc[];
extern char s_locator15_004d6de8[];
extern char s_locator16_004d6df4[];
extern char s_locator17_004d6e00[];
extern char s_locator18_004d6e0c[];
extern char s_locator19_004d6e18[];
extern char s_locator1_004d6d3c[];
extern char s_locator20_004d6e24[];
extern char s_locator2_004d6d4c[];
extern char s_locator3_004d6d58[];
extern char s_locator4_004d6d64[];
extern char s_locator5_004d6d70[];
extern char s_locator6_004d6d7c[];
extern char s_locator7_004d6d88[];
extern char s_locator8_004d6d94[];
extern char s_locator9_004d6da0[];

// USA 004D6AA8 <- EU 004D6A80 (Ghidra, non-matching)
// GLOBAL DAT_004d6d30 int *
// GLOBAL DAT_004d6d34 uint *
// GLOBAL DAT_004d6d38 undefined4 *
// GLOBAL DAT_004d6d48 undefined4
// GLOBAL DAT_004d6e30 undefined4
// GLOBAL DAT_004d6e34 undefined4
// GLOBAL DAT_004d6e38 int *
// GLOBAL DAT_004d6e3c undefined4
// GLOBAL DAT_004d6e40 int *
// GLOBAL s_locator10_004d6dac string
// GLOBAL s_locator11_004d6db8 string
// GLOBAL s_locator12_004d6dc4 string
// GLOBAL s_locator13_004d6dd0 string
// GLOBAL s_locator14_004d6ddc string
// GLOBAL s_locator15_004d6de8 string
// GLOBAL s_locator16_004d6df4 string
// GLOBAL s_locator17_004d6e00 string
// GLOBAL s_locator18_004d6e0c string
// GLOBAL s_locator19_004d6e18 string
// GLOBAL s_locator1_004d6d3c string
// GLOBAL s_locator20_004d6e24 string
// GLOBAL s_locator2_004d6d4c string
// GLOBAL s_locator3_004d6d58 string
// GLOBAL s_locator4_004d6d64 string
// GLOBAL s_locator5_004d6d70 string
// GLOBAL s_locator6_004d6d7c string
// GLOBAL s_locator7_004d6d88 string
// GLOBAL s_locator8_004d6d94 string
// GLOBAL s_locator9_004d6da0 string

void func_004D6AA8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int unaff_r10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  if (*(char *)(param_1 + 0x639) != '\0') {
    bVar3 = func_00547B6C((uint *)(*(int *)(*DAT_004d6d30 + 0x3dbe4) + 0x24),0);
    puVar1 = DAT_004d6d38;
    if (bVar3) {
      *(undefined1 *)(param_1 + 0x638) = 1;
    }
    else {
      if (((*DAT_004d6d34 & 1) == 0) &&
         (iVar4 = func_00100174((int *)DAT_004d6d34), uVar2 = DAT_004d6d48, iVar4 != 0)) {
        *puVar1 = DAT_004d6d48;
        puVar1[1] = s_locator1_004d6d3c;
        puVar1[2] = uVar2;
        puVar1[3] = s_locator2_004d6d4c;
        puVar1[4] = uVar2;
        puVar1[5] = s_locator3_004d6d58;
        puVar1[6] = uVar2;
        puVar1[7] = s_locator4_004d6d64;
        puVar1[8] = uVar2;
        puVar1[9] = s_locator5_004d6d70;
        puVar1[10] = uVar2;
        puVar1[0xb] = s_locator6_004d6d7c;
        puVar1[0xc] = uVar2;
        puVar1[0xd] = s_locator7_004d6d88;
        puVar1[0xe] = uVar2;
        puVar1[0xf] = s_locator8_004d6d94;
        puVar1[0x10] = uVar2;
        puVar1[0x11] = s_locator9_004d6da0;
        puVar1[0x12] = uVar2;
        puVar1[0x13] = s_locator10_004d6dac;
        puVar1[0x14] = uVar2;
        puVar1[0x15] = s_locator11_004d6db8;
        puVar1[0x16] = uVar2;
        puVar1[0x17] = s_locator12_004d6dc4;
        puVar1[0x18] = uVar2;
        puVar1[0x19] = s_locator13_004d6dd0;
        puVar1[0x1a] = uVar2;
        puVar1[0x1b] = s_locator14_004d6ddc;
        puVar1[0x1c] = uVar2;
        puVar1[0x1d] = s_locator15_004d6de8;
        puVar1[0x1e] = uVar2;
        puVar1[0x1f] = s_locator16_004d6df4;
        puVar1[0x20] = uVar2;
        puVar1[0x21] = s_locator17_004d6e00;
        puVar1[0x22] = uVar2;
        puVar1[0x23] = s_locator18_004d6e0c;
        puVar1[0x24] = uVar2;
        puVar1[0x25] = s_locator19_004d6e18;
        puVar1[0x26] = uVar2;
        puVar1[0x27] = s_locator20_004d6e24;
      }
      if (*DAT_004d6e38 == 0) {
        iVar4 = 3;
      }
      else {
        iVar4 = func_00584368(*DAT_004d6e38);
        if (0x14 < iVar4) {
          iVar4 = 0x14;
        }
      }
      iVar5 = *(int *)(param_1 + 0x620);
      local_40 = 0;
      iVar6 = *(int *)(param_1 + 0x61c);
      local_34 = DAT_004d6e3c;
      local_30 = DAT_004d6e3c;
      local_2c = DAT_004d6e3c;
      sVar10 = -1;
      if (iVar6 != 0) {
        do {
          iVar11 = 0;
          sVar10 = sVar10 + 1;
          if (0 < iVar4) {
            unaff_r10 = (int)sVar10;
          }
          iVar13 = *(int *)(iVar5 + local_40 * 0x38 + 4);
          if (0 < iVar4) {
            do {
              uVar7 = func_00564A78(iVar13,DAT_004d6d38 + iVar11 * 2);
              iVar12 = 0;
              iVar8 = *(int *)(*(int *)(iVar13 + 0x24) + 0x14) + uVar7 * 0x30;
              local_34 = *(undefined4 *)(iVar8 + 0xc);
              local_30 = *(undefined4 *)(iVar8 + 0x1c);
              local_2c = *(undefined4 *)(iVar8 + 0x2c);
              if (((uint *)(*DAT_004d6e40 + 0x660) != (uint *)0x0) &&
                 (uVar9 = func_00111A64((uint *)(*DAT_004d6e40 + 0x660)),
                 (uint)((ulonglong)uVar9 * 100 >> 0x20) < 2)) {
                iVar12 = 1;
              }
              local_28 = *(undefined4 *)(param_1 + 0x2cc);
              func_004E0490(&local_34,&local_28,unaff_r10,(int)(short)uVar7,iVar12);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
          }
          local_40 = local_40 + 1;
        } while (local_40 != iVar6);
      }
    }
  }
  return;
}

