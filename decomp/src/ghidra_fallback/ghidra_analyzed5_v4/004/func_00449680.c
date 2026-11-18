#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF950(int param_1,int param_2);
extern int func_002C00A8(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066DDF4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00449998;
extern int DAT_0044999c;
extern undefined4 DAT_004499a0;
extern undefined DAT_004499a4;
extern char s_ASE_S_MAP_ZOOM_OUT_DECIDE_004499a7[];
extern char s_SE_S_MAP_ZOOM_OUT_004499c4[];
extern undefined4 _DAT_004499a4;

// USA 00449680 <- EU 00449658 (Ghidra, non-matching)
// GLOBAL DAT_00449998 float
// GLOBAL DAT_0044999c int
// GLOBAL DAT_004499a0 undefined4
// GLOBAL DAT_004499a4 undefined
// GLOBAL s_ASE_S_MAP_ZOOM_OUT_DECIDE_004499a7 string
// GLOBAL s_SE_S_MAP_ZOOM_OUT_004499c4 string

/* WARNING: Removing unreachable block (ram,0x00449694) */
/* WARNING: Removing unreachable block (ram,0x004496a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00449680(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  fVar14 = DAT_00449998;
  uVar15 = (ulonglong)(uint)ALBW_AS_U32(DAT_00449998);
  *(undefined2 *)(param_1 + 200) = 2;
  func_002317C0((undefined2 *)(param_1 + 200),fVar14);
  func_002C00A8(*(int *)(param_1 + 0x14));
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar4 + 4) = 0;
  puVar5 = (ushort *)(iVar4 + 0x16);
  uVar11 = 0;
  *puVar5 = *puVar5 & 0xffbf;
  do {
    piVar6 = (int *)(param_1 + 0x188);
    if (uVar11 < 4) {
      piVar6 = piVar6 + uVar11;
    }
    cVar1 = *(char *)(*piVar6 + 0xd);
    bVar13 = cVar1 == '\x03';
    if (bVar13) {
      cVar1 = *(char *)(*piVar6 + 0xe);
    }
    if (bVar13 && cVar1 == '\x03') {
      piVar6 = (int *)(param_1 + 0x188);
      if (uVar11 < 4) {
        piVar6 = piVar6 + uVar11;
      }
      func_0012C718(*piVar6);
    }
    iVar4 = DAT_0044999c;
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 4);
  uVar11 = 0;
  do {
    if (uVar11 < *(uint *)(param_1 + 0x1ac)) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar11 * 4);
    }
    else {
      iVar7 = 0;
    }
    if (*(char *)(iVar7 + 0x6c) != '\0') {
      if (uVar11 < *(uint *)(param_1 + 0x1ac)) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar11 * 4);
      }
      else {
        iVar7 = 0;
      }
      iVar8 = (int)*(char *)(iVar7 + 0x6c);
      if (iVar8 != -1) {
        iVar10 = *(int *)(iVar7 + 0x88);
        pcVar9 = *(code **)(iVar10 + iVar8 * 8);
        if ((pcVar9 != (code *)0x0) ||
           ((uVar12 = *(uint *)(iVar10 + iVar8 * 8 + 4), (uVar12 & 1) != 0 && (uVar12 != 0)))) {
          uVar12 = *(uint *)(iVar10 + iVar8 * 8 + 4);
          piVar6 = (int *)(*(int *)(iVar7 + 0x7c) + ((int)uVar12 >> 1));
          if ((uVar12 & 1) != 0) {
            pcVar9 = *(code **)(pcVar9 + *piVar6);
          }
          (*pcVar9)(piVar6,5);
        }
      }
      uVar2 = *(undefined1 *)(iVar7 + 0x6c);
      *(undefined1 *)(iVar7 + 0x6c) = 5;
      *(undefined4 *)(iVar7 + 0x68) = 0;
      *(undefined1 *)(iVar7 + 0x6d) = uVar2;
      if (*(int *)(iVar7 + 0x78) != 0) {
        if (*(uint *)(iVar7 + 0x70) < 6) {
          piVar6 = *(int **)(iVar7 + 0x74);
        }
        else {
          piVar6 = (int *)(*(int *)(iVar7 + 0x74) + 0xb4);
        }
        (**(code **)(*piVar6 + 8))(piVar6);
        local_3c = (char *)piVar6[1];
        local_40 = iVar4;
        func_0010BEB4(*(int *)(iVar7 + 0x78),&local_40);
      }
      iVar8 = (int)*(char *)(iVar7 + 0x6c);
      iVar10 = *(int *)(iVar7 + 0x80);
      pcVar9 = *(code **)(iVar10 + iVar8 * 8);
      if ((pcVar9 != (code *)0x0) ||
         ((uVar12 = *(uint *)(iVar10 + iVar8 * 8 + 4), (uVar12 & 1) != 0 && (uVar12 != 0)))) {
        uVar12 = *(uint *)(iVar10 + iVar8 * 8 + 4);
        if ((uVar12 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *(int *)(*(int *)(iVar7 + 0x7c) + ((int)uVar12 >> 1)));
        }
        (*pcVar9)((int)(*(int *)(iVar7 + 0x7c)) + ((int)uVar12 >> 1));
      }
    }
    uVar3 = DAT_004499a0;
    fVar14 = ALBW_AS_F32(uVar15);
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x14);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x250) = uVar3;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(undefined4 *)(param_1 + 0x260) = _DAT_004499a4;
  func_004727B8(*(int *)(param_1 + 0x20c),0);
  func_0047E8C4(*(int *)(param_1 + 0x210),0,0);
  if (*(char *)(*(int *)(param_1 + 0x214) + 0x54) != '\x03') {
    func_0066DDF4((undefined4 *)(*(int *)(param_1 + 0x214) + 0x50),3);
  }
  if (*(char *)(param_1 + 0x208) != '\0') {
    puVar5 = (ushort *)(*(int *)(param_1 + 0x230) + 0x16);
    *puVar5 = *puVar5 & 0xffbf;
  }
  iVar7 = *(int *)(param_1 + 0x20c);
  if (*(char *)(iVar7 + 0x5d) != '\0') {
    func_002BF950(iVar7,1);
    func_002317C0((undefined2 *)(iVar7 + 0x90),fVar14);
  }
  func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
  func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
  *(undefined1 *)(param_1 + 0x294) = 1;
  if (*(char *)(param_1 + 0x291) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x20c) + 0x5f) != '\0') {
      local_4c = s_ASE_S_MAP_ZOOM_OUT_DECIDE_004499a7 + 1;
      local_50 = iVar4;
      func_00533078(param_1,&local_50,0);
    }
    local_3c = s_SE_S_MAP_ZOOM_OUT_004499c4;
    local_40 = iVar4;
    func_00533078(param_1,&local_40,0);
  }
  *(undefined1 *)(param_1 + 0x291) = 0;
  return;
}

