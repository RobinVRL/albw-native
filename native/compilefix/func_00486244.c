/* USA 00486244 <- EU 0048621C (stage-2 Ghidra text) with dropped indirect-call arguments restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129): vtable +0x60 (text pane: set string) takes (pane, chars, 0, length):
 * the ARM passes r3 = (u16 at string +0x20) >> 1, which Ghidra computed into a variable on the line
 * before and then left out of the call. EU 0048630C. */
#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_0031BC9C(int param_1);
extern int func_004860F8(int param_1,int *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_0048648c;
extern int DAT_00486490;
extern int DAT_00486494;
extern int *DAT_004864a4;
extern char s_cf_00486498[];
extern char s_cf_004864a8[];
extern char s_is_instruction__s_004864a8[];
extern char s_is_name__s_00486498[];

// USA 00486244 <- EU 0048621C (Ghidra, non-matching)
// GLOBAL DAT_0048648c undefined4
// GLOBAL DAT_00486490 int
// GLOBAL DAT_00486494 int
// GLOBAL DAT_004864a4 int *
// GLOBAL s_cf_004864a8 string
// GLOBAL s_cf_00486498 string

void func_00486244(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_r3;
  undefined4 *puVar10;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_3d (*(undefined1 *)(albw_frame + 0x53))
  #define local_38 ((int *)(albw_frame + 0x58))
  #define local_24 (*(undefined4 *)(albw_frame + 0x6c))
  piVar8 = &local_88;
  func_0031B6A0(param_1 + 0x74,(int)*(char *)(param_1 + 0xe1),0);
  uVar4 = func_0031BC9C((int)*(char *)(param_1 + 0xe1));
  iVar7 = DAT_00486494;
  uVar2 = DAT_0048648c;
  if (uVar4 < 0x20) {
    local_38[3] = 0xffffffff;
    local_84 = local_7c;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    uStack_80 = 0x40;
    uStack_3d = 0;
    local_7c[0] = 0;
    local_88 = DAT_00486490;
    func_004994B0((int)&local_88,s_is_name__s_00486498,*(uint *)(DAT_00486494 + uVar4 * 4),in_r3);
    func_004860F8(param_1,&local_88);
    piVar3 = DAT_004864a4;
    puVar10 = (undefined4 *)(iVar7 + -0x18);
    local_24 = *puVar10;
    local_38[4] = uVar2;
    iVar5 = func_005826A4(*DAT_004864a4,local_38,local_38 + 4,&local_88);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xd8);
      if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x44) & 1) != 0)) {
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
      }
    }
    else {
      func_001788DC(*(int *)(param_1 + 0xd0),local_38);
      iVar5 = *(int *)(param_1 + 0xd0);
      piVar6 = *(int **)(param_1 + 0xd8);
      *(undefined2 *)(iVar5 + 0x32) = 0;
      *(undefined1 *)(iVar5 + 0x3d) = 0;
      piVar8 = (int *)(uint)(*(ushort *)(*(int *)(param_1 + 0xd0) + 0x20) >> 1);
      (**(code **)(*piVar6 + 0x60))(piVar6,*(undefined4 *)(*(int *)(param_1 + 0xd0) + 8),0,(uint)(uintptr_t)piVar8);
      iVar5 = *(int *)(param_1 + 0xd8);
      iVar9 = *(int *)(param_1 + 0x1c);
      if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x44) & 1) == 0)) {
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
        *(byte *)(iVar9 + 0x70) = *(byte *)(iVar9 + 0x70) | 2;
      }
    }
    func_004994B0((int)&local_88,s_is_instruction__s_004864a8,*(uint *)(iVar7 + uVar4 * 4),piVar8);
    func_004860F8(param_1,&local_88);
    local_24 = *puVar10;
    local_38[4] = uVar2;
    iVar7 = func_005826A4(*piVar3,local_38,local_38 + 4,&local_88);
    if (iVar7 != 0) {
      func_001788DC(*(int *)(param_1 + 0xd4),local_38);
      iVar7 = *(int *)(param_1 + 0xd4);
      piVar8 = *(int **)(param_1 + 0xdc);
      *(undefined2 *)(iVar7 + 0x32) = 0;
      *(undefined1 *)(iVar7 + 0x3d) = 0;
      (**(code **)(*piVar8 + 0x60))
                (piVar8,*(undefined4 *)(*(int *)(param_1 + 0xd4) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0xd4) + 0x20) >> 1);
      iVar7 = *(int *)(param_1 + 0xdc);
      iVar5 = *(int *)(param_1 + 0x1c);
      if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x44) & 1) == 0)) {
        *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe | 1;
        *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
      }
      goto LAB_0048647c;
    }
    iVar7 = *(int *)(param_1 + 0xdc);
    if (iVar7 == 0) goto LAB_0048647c;
    bVar1 = *(byte *)(iVar7 + 0x44);
  }
  else {
    iVar7 = *(int *)(param_1 + 0xd8);
    if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x44) & 1) != 0)) {
      *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
    }
    iVar7 = *(int *)(param_1 + 0xdc);
    if (iVar7 == 0) goto LAB_0048647c;
    bVar1 = *(byte *)(iVar7 + 0x44);
  }
  if ((bVar1 & 1) != 0) {
    *(byte *)(iVar7 + 0x44) = bVar1 & 0xfe;
  }
LAB_0048647c:
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_1 + 0xe1);
  return;
}

