#include "ghidra_types.h"

extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0044f62c;
extern char s_N_DragPosLB_00_0044f650[];
extern char s_N_DragPosLT_00_0044f630[];
extern char s_N_DragPosRB_00_0044f660[];
extern char s_N_DragPosRT_00_0044f640[];
extern char s_N_ItemPanelPos_00_0044f670[];

// USA 0044F4B0 <- EU 0044F488 (Ghidra, non-matching)
// GLOBAL DAT_0044f62c int
// GLOBAL s_N_DragPosLB_00_0044f650 string
// GLOBAL s_N_DragPosLT_00_0044f630 string
// GLOBAL s_N_DragPosRB_00_0044f660 string
// GLOBAL s_N_DragPosRT_00_0044f640 string
// GLOBAL s_N_ItemPanelPos_00_0044f670 string

void func_0044F4B0(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar5 = DAT_0044f62c;
  cVar2 = *(char *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0x99) == cVar2) goto LAB_0044f5d0;
  if (cVar2 == '\0') {
    local_14 = s_N_DragPosLT_00_0044f630;
    local_18 = DAT_0044f62c;
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_18);
LAB_0044f554:
    if (iVar3 != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x94) + 0xc);
      if (iVar4 != 0) {
        func_003FF904(iVar4,*(int *)(param_1 + 0x94));
      }
      func_003FF898(iVar3,*(int *)(param_1 + 0x94));
      *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
    }
  }
  else {
    if (cVar2 == '\x01') {
      local_14 = s_N_DragPosRT_00_0044f640;
      local_18 = DAT_0044f62c;
      iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_18);
      goto LAB_0044f554;
    }
    if (cVar2 == '\x02') {
      local_14 = s_N_DragPosLB_00_0044f650;
      local_18 = DAT_0044f62c;
      iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_18);
      goto LAB_0044f554;
    }
    if (cVar2 == '\x03') {
      local_14 = s_N_DragPosRB_00_0044f660;
      local_18 = DAT_0044f62c;
      iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_18);
      goto LAB_0044f554;
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  sVar1 = (ushort)*(byte *)(param_1 + 0x98) * 2;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(short *)(param_1 + 0x22) = sVar1;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(short *)(param_1 + 0x2e) = sVar1;
  *(undefined2 *)(param_1 + 0x2c) = 2;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(short *)(param_1 + 0x76) = sVar1 + 1;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_1 + 0x98);
LAB_0044f5d0:
  local_14 = s_N_ItemPanelPos_00_0044f670;
  local_18 = iVar5;
  iVar5 = func_005229AC(*(int **)(param_1 + 0x1c),&local_18);
  if (iVar5 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(iVar5 + 0x20) = uVar6;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  }
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  return;
}

