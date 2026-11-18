#include "ghidra_types.h"

extern int func_00112388(void);
extern int func_00112394(int param_1,int param_2);
extern int func_00112448(int param_1,int *param_2);
extern int func_001124C8(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5, undefined4 param_6,int param_7);
extern int func_00112D2C(int param_1,int param_2,int param_3);
extern uint DAT_00112244;
extern undefined4 DAT_00112248;

// USA 00111F1C <- EU 00111F1C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 uint
// GLOBAL DAT_00112244 uint
// GLOBAL DAT_00112248 undefined4

undefined4
func_00111F1C(int param_1,int *param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
             uint param_7)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + param_5 * 4);
  if ((iVar1 != 0) && (param_4 < *(int *)(*(int *)(iVar1 + 0xc) + 8))) {
    puVar2 = (uint *)func_00112388();
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_5 * 4) + 0x18) +
                    param_4 * 0x3c + 8);
    if ((iVar1 <= *(int *)(param_1 + 0x328)) &&
       (iVar3 = func_00112448(param_1,param_2), uVar4 = DAT_00112244, iVar3 != 0)) {
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      uVar12 = param_3[3];
      uVar13 = param_3[4];
      uVar14 = param_3[5];
      uVar15 = param_3[6];
      uVar16 = param_3[7];
      lVar17 = (ulonglong)DAT_00112244 << 0x20;
      *(undefined4 *)(iVar3 + 0x19c) = *param_3;
      *(undefined4 *)(iVar3 + 0x1a0) = uVar10;
      *(undefined4 *)(iVar3 + 0x1a4) = uVar11;
      *(undefined4 *)(iVar3 + 0x1a8) = uVar12;
      *(undefined4 *)(iVar3 + 0x1ac) = uVar13;
      *(undefined4 *)(iVar3 + 0x1b0) = uVar14;
      *(undefined4 *)(iVar3 + 0x1b4) = uVar15;
      *(undefined4 *)(iVar3 + 0x1b8) = uVar16;
      uVar10 = param_3[9];
      uVar11 = param_3[10];
      uVar12 = param_3[0xb];
      *(undefined4 *)(iVar3 + 0x1bc) = param_3[8];
      *(undefined4 *)(iVar3 + 0x1c0) = uVar10;
      *(undefined4 *)(iVar3 + 0x1c4) = uVar11;
      *(undefined4 *)(iVar3 + 0x1c8) = uVar12;
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      uVar12 = param_3[3];
      uVar13 = param_3[4];
      uVar14 = param_3[5];
      uVar15 = param_3[6];
      uVar16 = param_3[7];
      *(undefined4 *)(iVar3 + 0x1cc) = *param_3;
      *(undefined4 *)(iVar3 + 0x1d0) = uVar10;
      *(undefined4 *)(iVar3 + 0x1d4) = uVar11;
      *(undefined4 *)(iVar3 + 0x1d8) = uVar12;
      *(undefined4 *)(iVar3 + 0x1dc) = uVar13;
      *(undefined4 *)(iVar3 + 0x1e0) = uVar14;
      *(undefined4 *)(iVar3 + 0x1e4) = uVar15;
      *(undefined4 *)(iVar3 + 0x1e8) = uVar16;
      uVar10 = DAT_00112248;
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      *(undefined4 *)(iVar3 + 0x1ec) = param_3[8];
      *(undefined4 *)(iVar3 + 0x1f0) = uVar11;
      *(undefined4 *)(iVar3 + 500) = uVar12;
      *(undefined4 *)(iVar3 + 0x1f8) = uVar13;
      iVar8 = 0;
      *(uint *)(iVar3 + 0x1fc) = uVar4;
      *(uint *)(iVar3 + 0x200) = uVar4;
      *(uint *)(iVar3 + 0x204) = uVar4;
      *(uint *)(iVar3 + 0x220) = uVar4;
      *(uint *)(iVar3 + 0x224) = uVar4;
      *(uint *)(iVar3 + 0x228) = uVar4;
      *(uint *)(iVar3 + 0x210) = uVar4;
      *(uint *)(iVar3 + 0x214) = uVar4;
      *(uint *)(iVar3 + 0x218) = uVar4;
      *(uint *)(iVar3 + 0x21c) = uVar4;
      *(undefined4 *)(iVar3 + 0x260) = 0;
      *(uint *)(iVar3 + 0x20c) = uVar4;
      *(uint *)(iVar3 + 0x208) = uVar4;
      *(uint *)(iVar3 + 0x238) = uVar4;
      *(uint *)(iVar3 + 0x234) = uVar4;
      *(uint *)(iVar3 + 0x230) = uVar4;
      *(uint *)(iVar3 + 0x22c) = uVar4;
      *(uint *)(iVar3 + 0x244) = uVar4;
      *(uint *)(iVar3 + 0x240) = uVar4;
      *(uint *)(iVar3 + 0x23c) = uVar4;
      *(undefined4 *)(iVar3 + 0x250) = uVar10;
      *(undefined4 *)(iVar3 + 0x24c) = uVar10;
      *(undefined4 *)(iVar3 + 0x248) = uVar10;
      *(undefined1 *)(iVar3 + 0x281) = 0;
      *(undefined1 *)(iVar3 + 0x280) = 0;
      *(undefined1 *)(iVar3 + 0x282) = 0;
      *(undefined1 *)(iVar3 + 0x283) = 0;
      *(undefined1 *)(iVar3 + 0x284) = 0;
      *(undefined4 *)(iVar3 + 0x270) = 0;
      *(undefined1 *)(iVar3 + 0x285) = 0x80;
      *(undefined4 *)(iVar3 + 0x264) = uVar10;
      *(undefined4 *)(iVar3 + 0x268) = uVar10;
      *(undefined4 *)(iVar3 + 0x26c) = uVar10;
      uVar4 = 0;
      do {
        iVar9 = iVar8 + 1;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(iVar3 + iVar8 * 4 + 0x10) = 0;
        iVar8 = iVar8 + 2;
        *(undefined4 *)(iVar3 + iVar9 * 4 + 0x10) = 0;
      } while (uVar4 < 0x10);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x490);
      *(int *)(iVar3 + 400) = param_5;
      *(int *)(iVar3 + 0x194) = param_4;
      *(undefined4 *)(iVar3 + 0x278) = 0;
      *(undefined4 *)(iVar3 + 0x27c) = 0;
      *(int *)(iVar3 + 0x198) = param_6;
      func_00112D2C(param_1,iVar3,param_6);
      uVar4 = *puVar2;
      *puVar2 = puVar2[1];
      uVar4 = uVar4 ^ uVar4 << 0xb;
      puVar2[1] = puVar2[2];
      uVar5 = puVar2[3];
      puVar2[2] = uVar5;
      uVar4 = uVar5 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar4 >> 8;
      puVar2[3] = uVar4;
      uVar5 = iVar1 - 1;
      param_2[1] = *(int *)(param_1 + 0x490);
      if (-1 < (int)uVar5) {
        do {
          uVar10 = (undefined4)((ulonglong)lVar17 >> 0x20);
          if ((param_7 & 1 << (uVar5 & 0xff)) != 0) {
            puVar6 = (undefined4 *)func_00112394(param_1,param_6);
            if (puVar6 == (undefined4 *)0x0) break;
            iVar9 = *(int *)(iVar3 + 4);
            lVar17 = CONCAT44(uVar10,uVar4);
            iVar1 = iVar3 + uVar5 * 0x14;
            iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_5 * 4) +
                                              0x18) + param_4 * 0x3c + 4) + uVar5 * 8 + 4);
            *(int *)(iVar3 + 4) = iVar9 + 1;
            *(undefined4 **)(iVar3 + iVar9 * 4 + 0x10) = puVar6;
            puVar6[7] = iVar1 + 0x50;
            puVar6[6] = iVar3;
            *(undefined4 **)(iVar1 + 0x60) = puVar6;
            puVar7 = (undefined4 *)puVar6[7];
            *puVar7 = uVar10;
            puVar7[1] = uVar10;
            puVar7[2] = uVar10;
            puVar7[3] = 0x3f;
            puVar6[5] = param_6;
            func_001124C8(param_1,puVar6,iVar8,param_5,param_4,uVar4,0);
            if (*(int *)(puVar6[0x36] + 0x31c) == 0x7fffffff) {
              *(undefined1 *)(iVar3 + 0x284) = 1;
            }
          }
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
      }
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + 4);
      *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
      *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
      return 1;
    }
  }
  return 0;
}

