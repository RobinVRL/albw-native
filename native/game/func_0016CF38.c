/* USA 0016CF38 (EU 0016CF38): filter/effect resource setup ("Filter" heap, loads the "World"
 * resource and creates its model). Native fix of the generated Ghidra text: the two request
 * structures the EU code builds at sp (0x50 bytes; Ghidra referenced them as "&stack0xffffff78",
 * a zeroed static, and kept only 4 of the fields) are built here from the disassembly; the
 * frame is extended so that sp = albw_frame - 0x38 as on ARM. Rest unchanged.
 * Confidence: high (fields), medium (the stale bytes the second request inherits on ARM from
 * the first: +0x3A.. are left as the first request wrote them, as on ARM). */
#include <stdint.h>
extern char data_006F5988[];
extern char data_006C57E0[];
#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C2D00(int *param_1);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern undefined4 uRam0016d370;
extern int DAT_0016d32c;
extern undefined4 *DAT_0016d330;
extern undefined4 DAT_0016d334;
extern int *DAT_0016d340;
extern uint DAT_0016d344;
extern char s_Environment_PEMorningFog_bch_0016d348[];
extern char s_Filter_0016d324[];
extern char s__scroll_0016d368[];

// USA 0016CF38 <- EU 0016CF38 (Ghidra, non-matching)
// GLOBAL DAT_0016d32c int
// GLOBAL DAT_0016d330 undefined4 *
// GLOBAL DAT_0016d334 undefined4
// GLOBAL DAT_0016d340 int *
// GLOBAL DAT_0016d344 uint
// GLOBAL UNK_0016d370 uint
// GLOBAL s_$scroll_0016d368 string
// GLOBAL s_Environment/PEMorningFog.bch_0016d348 string
// GLOBAL s_Filter_0016d324 string

void func_0016CF38(int *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int unaff_r8;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame_all[0x38 + 0x50];
  unsigned char *const albw_frame = albw_frame_all + 0x38;   /* ARM sp = albw_frame - 0x38 */
  unsigned char *const req = albw_frame - 0x38;
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined1 *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  *(undefined1 *)(param_1 + 0xd) = 0;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 0x10))((int *)param_1[9]);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[9] = 0;
  }
  iVar6 = DAT_0016d32c;
  local_34 = s_Filter_0016d324;
  local_38 = DAT_0016d32c;
  piVar2 = func_0010B954(0,(int)&local_38,param_3,1,0);
  if (piVar2 == (int *)0x0) {
    unaff_r8 = 1;
  }
  param_1[9] = (int)piVar2;
  if (piVar2 != (int *)0x0) {
    unaff_r8 = func_0010983C(*DAT_0016d330,piVar2);
  }
  local_48 = param_2[1];
  local_40 = 0;
  local_3c = 0;
  local_44 = (char *)param_1[9];
  /* EU 0016CF80..0016D050: the resource load request at sp (Ghidra kept only +0x40..+0x4C) */
  *(undefined4 *)(req + 0x00) = (undefined4)(uintptr_t)data_006F5988;   /* SafeString vtable */
  *(undefined4 *)(req + 0x04) = (undefined4)(uintptr_t)data_006C57E0;   /* "" */
  *(undefined4 *)(req + 0x08) = 0;
  *(undefined4 *)(req + 0x0c) = 0;
  *(undefined4 *)(req + 0x10) = 0x20;
  *(undefined4 *)(req + 0x14) = 0;
  *(undefined4 *)(req + 0x18) = 0;
  *(undefined4 *)(req + 0x1c) = 0;
  *(undefined4 *)(req + 0x20) = 0;
  *(undefined4 *)(req + 0x24) = 0;
  *(undefined4 *)(req + 0x28) = 0;
  *(undefined4 *)(req + 0x2c) = (undefined4)(uintptr_t)data_006F5988;
  *(undefined4 *)(req + 0x30) = (undefined4)(uintptr_t)"World";        /* EU 0016D338 */
  req[0x34] = 7; req[0x35] = 0xff; req[0x36] = 0; req[0x37] = 1; req[0x38] = 1;
  *(undefined4 *)(req + 0x3c) = (undefined4)(uintptr_t)data_006F5988;
  puVar3 = func_00504D48(*DAT_0016d340,(int)req);
  param_1[1] = (int)puVar3;
  /* EU 0016D064..0016D0BC: the model create request at sp */
  {
    undefined4 first = 0;
    if (*(int *)((char *)puVar3 + 0xc8) > 0)
      first = **(undefined4 **)((char *)puVar3 + 0xd0);
    *(undefined4 *)(req + 0x00) = (undefined4)(uintptr_t)data_006F5988;
    *(undefined4 *)(req + 0x04) = (undefined4)(uintptr_t)data_006C57E0;
    *(undefined4 *)(req + 0x08) = (undefined4)(uintptr_t)data_006F5988;
    *(undefined4 *)(req + 0x0c) = (undefined4)(uintptr_t)data_006C57E0;
    *(undefined4 *)(req + 0x10) = first;
    *(undefined4 *)(req + 0x14) = 0;
    *(undefined4 *)(req + 0x18) = 0;
    req[0x1c] = 1; req[0x1d] = 1;
    *(undefined4 *)(req + 0x20) = 0; *(undefined4 *)(req + 0x24) = 0; *(undefined4 *)(req + 0x28) = 0;
    *(undefined4 *)(req + 0x2c) = 0; *(undefined4 *)(req + 0x30) = 0; *(undefined4 *)(req + 0x34) = 0;
    req[0x38] = 1; req[0x39] = 0xf0;
  }
  piVar2 = func_002C2D00((int *)req);
  *param_1 = (int)piVar2;
  uVar9 = piVar2[0x59];
  piVar2[0x59] = uVar9 | 1;
  *(uint *)(*param_1 + 0x164) = uVar9 | 0x90001;
  func_004CE68C(*param_1,0,param_1[2]);
  uVar14 = (ulonglong)DAT_0016d344;
  *(uint *)(*param_1 + 0x134) = DAT_0016d344;
  func_004CF478(*param_1,0);
  puVar4 = (uint *)func_00584CA8(*param_1,0,0);
  uVar9 = *puVar4;
  param_1[4] = uVar9;
  param_1[5] = uVar9;
  iVar5 = param_1[2];
  *(undefined1 *)(iVar5 + 0x3d) = 1;
  *(uint *)(iVar5 + 0x39) = uVar9 & 0xffffff;
  local_44 = s_Environment_PEMorningFog_bch_0016d348;
  local_48 = iVar6;
  (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*param_2 + 8))(param_2);
  pcVar13 = (char *)param_2[1];
  (**(code **)(local_48 + 8))(&local_48);
  if (pcVar13 == local_44) {
LAB_0016d374:
    uVar1 = 1;
  }
  else {
    iVar6 = 0;
    do {
      if (*(char *)(param_2[1] + iVar6) != local_44[iVar6]) break;
      if (*(char *)(param_2[1] + iVar6) == '\0') goto LAB_0016d374;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x40001);
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x37) = uVar1;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  if (*(int *)(param_1[1] + 200) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_1[1] + 0xd0);
  }
  iVar6 = *(int *)(*(int *)(iVar6 + 8) + 0x94);
  if ((iVar6 != 0) &&
     (uVar9 = func_00564ABC((short *)(iVar6 + 4),(uint *)s__scroll_0016d368,7),
     uVar9 != uRam0016d370)) {
    *(undefined1 *)((int)param_1 + 0x36) = 1;
    iVar5 = *(int *)(*(int *)(*param_1 + 0x20) + 4);
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar7 = iVar6 + 1;
        puVar10 = (ushort *)(**(int **)(*param_1 + 0x20) + iVar6 * 0x154);
        *puVar10 = *puVar10 | 0x3000;
        iVar6 = iVar7;
      } while (iVar7 < iVar5);
    }
  }
  iVar5 = (int)uVar14;
  iVar6 = *(int *)(param_1[1] + 0xd4);
  if (0 < iVar6) {
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar3 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar3 = func_0016A2FC(puVar8,iVar6,param_2,1);
    }
    uVar9 = 0;
    param_1[3] = (int)puVar3;
    do {
      uVar11 = *(uint *)(param_1[1] + 0xd4);
      uVar12 = uVar11;
      if (uVar9 < uVar11) {
        uVar12 = *(uint *)(param_1[1] + 0xdc);
      }
      if (uVar9 < uVar11) {
        piVar2 = *(int **)(uVar12 + uVar9 * 4);
      }
      else {
        piVar2 = (int *)0x0;
      }
      func_0016A2A4((uint *)param_1[3],uVar9,piVar2);
      iVar5 = (int)uVar14;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
    func_0016A02C(param_1[3],-1,(int *)0xffffffff,*param_1);
  }
  param_1[7] = 0;
  param_1[8] = iVar5;
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  (**(code **)(*(int *)param_1[9] + 0x14))((int *)param_1[9]);
  if (unaff_r8 != 1) {
    func_0010983C(*DAT_0016d330,unaff_r8);
  }
  return;
}

