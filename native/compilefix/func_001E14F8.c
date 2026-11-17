/* USA 001E14F8 <- EU 001E14F8 (stage-2 Ghidra text) with the sixth argument of 0048FAF8 restored: the ARM
 * stores [sp] = 1, [sp + 4] = [r8 + 8] (strd r0, r1 at EU 001E16E8; r8 = param_2) before the call
 * (BOOT_LOG 129 class; the matched-era nonmatching text has it as *(param_2 + 8)). */
#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0025C060(undefined4 *param_1);
extern int func_00489F28(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
extern int func_0048A08C(int *param_1,int param_2);
extern int func_0048A1AC(int param_1,int param_2,uint param_3);
extern int func_0048FAF8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
extern int func_004929F0(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00492D20(undefined4 *param_1,undefined4 param_2);
extern int func_00492D50(int param_1);
extern int func_00492D74(int param_1);
extern int func_004A1520();
extern int func_0058FA5C();
extern undefined4 DAT_001e1744;
extern int DAT_001e1748;
extern int DAT_001e174c;

// USA 001E14F8 <- EU 001E14F8 (Ghidra, non-matching)
// GLOBAL DAT_001e1744 undefined4
// GLOBAL DAT_001e1748 int
// GLOBAL DAT_001e174c int

undefined4 * func_001E14F8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((undefined4 *)(albw_frame + 0x0))
  #define local_7c (*(int * *)(albw_frame + 0x14))
  #define local_54 (*(uint *)(albw_frame + 0x3c))
  #define local_4c (*(int *)(albw_frame + 0x44))
  #define local_40 (*(byte * *)(albw_frame + 0x50))
  #define auStack_3c ((undefined4 *)(albw_frame + 0x54))
  #define local_34 (*(int *)(albw_frame + 0x5c))
  puVar2 = func_0010CE7C(local_90);
  uVar1 = DAT_001e1744;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *puVar2 = uVar1;
  puVar2[0xe] = 0;
  iVar3 = func_00489F28(*(int **)(DAT_001e1748 + param_1),(int)local_90,param_2,0,0);
  if (iVar3 == 0) {
    local_90[0] = uVar1;
    if (local_7c != (int *)0x0) {
      func_0048A08C(local_7c,(int)local_90);
    }
    func_004A1520(local_90);
    return (undefined4 *)0x0;
  }
  local_40 = (byte *)func_0010CEE0(0x25800,*(int **)(param_2 + 8),0xffffff80);
  piVar7 = *(int **)(param_2 + 0xc);
  puVar2 = (undefined4 *)0x0;
  uVar4 = func_0048A1AC((int)local_90,(int)local_40,0x25800);
  iVar3 = func_00492D50((int)local_40);
  func_00492D74((int)local_40);
  if (*(char *)(param_1 + 0x1ff0) == '\0') {
    local_54 = iVar3 + 0x7fU & 0xffffff80;
    local_4c = func_0010CEE0(local_54,piVar7,0x80);
    func_00492D20(auStack_3c,local_4c);
    uVar5 = uVar4;
    local_34 = iVar3;
    while (uVar5 != 0) {
      if (*(char *)(param_1 + 0x1ff0) != '\0') {
        fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)ALBW_AS_U32((fVar9 / fVar8)) < DAT_001e174c) break;
      }
      uVar5 = func_004929F0(auStack_3c,local_40,uVar5);
      if (uVar5 == 0) {
        puVar6 = (undefined4 *)func_0010CF28(0x138,*(int **)(param_2 + 8),4);
        puVar2 = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          puVar2 = func_0025C060(puVar6);
        }
        func_0048FAF8(puVar2 + 4,local_4c,iVar3,local_54,1,*(int *)(param_2 + 8));
        goto LAB_001e16fc;
      }
      if ((int)uVar5 < 0) break;
      if (*(char *)(param_1 + 0x1ff0) != '\0') {
        fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)ALBW_AS_U32((fVar9 / fVar8)) < DAT_001e174c) break;
      }
      uVar5 = func_0048A1AC((int)local_90,(int)local_40,0x25800);
      uVar4 = uVar4 + uVar5;
    }
    func_0058FA5C(local_4c);
  }
LAB_001e16fc:
  func_0058FA5C((int)local_40);
  *(undefined1 *)(param_1 + 0x1ff0) = 0;
  local_90[0] = uVar1;
  if (local_7c != (int *)0x0) {
    func_0048A08C(local_7c,(int)local_90);
  }
  func_004A1520(local_90);
  return puVar2;
}

