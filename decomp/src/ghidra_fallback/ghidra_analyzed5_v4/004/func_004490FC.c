#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF8D4(int param_1,int param_2);
extern int func_002C00A8(int param_1);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066DDF4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00449368;
extern int DAT_0044936c;
extern char s_SE_S_MAP_ZOOM_IN_00449388[];
extern char s_SE_S_MAP_ZOOM_IN_DECIDE_00449370[];

// USA 004490FC <- EU 004490D4 (Ghidra, non-matching)
// GLOBAL DAT_00449368 float
// GLOBAL DAT_0044936c int
// GLOBAL s_SE_S_MAP_ZOOM_IN_00449388 string
// GLOBAL s_SE_S_MAP_ZOOM_IN_DECIDE_00449370 string

/* WARNING: Removing unreachable block (ram,0x00449108) */
/* WARNING: Removing unreachable block (ram,0x00449120) */

void func_004490FC(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  fVar11 = DAT_00449368;
  uVar12 = (ulonglong)(uint)ALBW_AS_U32(DAT_00449368);
  *(undefined2 *)(param_1 + 200) = 0;
  func_002317C0((undefined2 *)(param_1 + 200),fVar11);
  func_002C00A8(*(int *)(param_1 + 0x14));
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + 4) = 0;
  iVar2 = DAT_0044936c;
  puVar4 = (ushort *)(iVar3 + 0x16);
  uVar9 = 0;
  *puVar4 = *puVar4 & 0xffbf;
  do {
    if (uVar9 < *(uint *)(param_1 + 0x1ac)) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar9 * 4);
    }
    else {
      iVar3 = 0;
    }
    if (*(char *)(iVar3 + 0x6c) != '\0') {
      if (uVar9 < *(uint *)(param_1 + 0x1ac)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar9 * 4);
      }
      else {
        iVar3 = 0;
      }
      iVar5 = (int)*(char *)(iVar3 + 0x6c);
      if (iVar5 != -1) {
        iVar6 = *(int *)(iVar3 + 0x88);
        pcVar8 = *(code **)(iVar6 + iVar5 * 8);
        if ((pcVar8 != (code *)0x0) ||
           ((uVar10 = *(uint *)(iVar6 + iVar5 * 8 + 4), (uVar10 & 1) != 0 && (uVar10 != 0)))) {
          uVar10 = *(uint *)(iVar6 + iVar5 * 8 + 4);
          piVar7 = (int *)(*(int *)(iVar3 + 0x7c) + ((int)uVar10 >> 1));
          if ((uVar10 & 1) != 0) {
            pcVar8 = *(code **)(pcVar8 + *piVar7);
          }
          (*pcVar8)(piVar7,4);
        }
      }
      uVar1 = *(undefined1 *)(iVar3 + 0x6c);
      *(undefined1 *)(iVar3 + 0x6c) = 4;
      *(undefined4 *)(iVar3 + 0x68) = 0;
      *(undefined1 *)(iVar3 + 0x6d) = uVar1;
      if (*(int *)(iVar3 + 0x78) != 0) {
        if (*(uint *)(iVar3 + 0x70) < 5) {
          piVar7 = *(int **)(iVar3 + 0x74);
        }
        else {
          piVar7 = (int *)(*(int *)(iVar3 + 0x74) + 0x90);
        }
        (**(code **)(*piVar7 + 8))(piVar7);
        local_3c = (char *)piVar7[1];
        local_40 = iVar2;
        func_0010BEB4(*(int *)(iVar3 + 0x78),&local_40);
      }
      iVar6 = (int)*(char *)(iVar3 + 0x6c);
      iVar5 = *(int *)(iVar3 + 0x80);
      pcVar8 = *(code **)(iVar5 + iVar6 * 8);
      if ((pcVar8 != (code *)0x0) ||
         ((uVar10 = *(uint *)(iVar5 + iVar6 * 8 + 4), (uVar10 & 1) != 0 && (uVar10 != 0)))) {
        uVar10 = *(uint *)(iVar5 + iVar6 * 8 + 4);
        if ((uVar10 & 1) != 0) {
          pcVar8 = *(code **)(pcVar8 + *(int *)(*(int *)(iVar3 + 0x7c) + ((int)uVar10 >> 1)));
        }
        (*pcVar8)((int)(*(int *)(iVar3 + 0x7c)) + ((int)uVar10 >> 1));
      }
    }
    fVar11 = ALBW_AS_F32(uVar12);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x14);
  func_004727B8(*(int *)(param_1 + 0x20c),0);
  func_0047E8C4(*(int *)(param_1 + 0x210),0,0);
  if (*(char *)(*(int *)(param_1 + 0x214) + 0x54) != '\x03') {
    func_0066DDF4((undefined4 *)(*(int *)(param_1 + 0x214) + 0x50),3);
  }
  if (*(char *)(param_1 + 0x208) != '\0') {
    puVar4 = (ushort *)(*(int *)(param_1 + 0x230) + 0x16);
    *puVar4 = *puVar4 & 0xffbf;
  }
  iVar3 = *(int *)(param_1 + 0x20c);
  if (*(char *)(iVar3 + 0x5d) == '\0') {
    func_002BF8D4(iVar3,1);
    func_002317C0((undefined2 *)(iVar3 + 0x84),fVar11);
  }
  if (*(char *)(param_1 + 0x291) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x20c) + 0x5f) != '\0') {
      local_4c = s_SE_S_MAP_ZOOM_IN_DECIDE_00449370;
      local_50 = iVar2;
      func_00533078(param_1,&local_50,0);
    }
    local_3c = s_SE_S_MAP_ZOOM_IN_00449388;
    local_40 = iVar2;
    func_00533078(param_1,&local_40,0);
  }
  return;
}

