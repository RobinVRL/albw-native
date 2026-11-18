#include "ghidra_types.h"

extern int func_00488234(undefined4 *param_1,uint param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_004736cc;
extern int DAT_004736d0;
extern int *DAT_004736d4;
extern int DAT_004736e8;
extern char s_P_SaveIconO_00_004736d8[];
extern char s_P_SaveIconU_00_004736ec[];

// USA 0047353C <- EU 00473514 (Ghidra, non-matching)
// GLOBAL DAT_004736cc int
// GLOBAL DAT_004736d0 int
// GLOBAL DAT_004736d4 int *
// GLOBAL DAT_004736e8 int
// GLOBAL s_P_SaveIconO_00_004736d8 string
// GLOBAL s_P_SaveIconU_00_004736ec string

int * func_0047353C(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = (int *)func_00488234(param_1,9);
  iVar4 = DAT_004736d0;
  iVar5 = DAT_004736cc + 0xac;
  *piVar2 = DAT_004736cc;
  piVar2[0xe] = iVar5;
  *(undefined2 *)(piVar2 + 0x55) = 0;
  *(undefined2 *)((int)piVar2 + 0x156) = 0xffff;
  piVar2[0x56] = iVar4;
  piVar2[0x57] = 0;
  piVar1 = DAT_004736d4;
  *(undefined1 *)(piVar2 + 0x58) = 0;
  *(undefined1 *)((int)piVar2 + 0x161) = 0;
  iVar4 = DAT_004736e8;
  iVar5 = *piVar1;
  if (iVar5 != 0) {
    local_1c = s_P_SaveIconO_00_004736d8;
    local_20 = DAT_004736e8;
    iVar3 = func_005229AC((int *)piVar2[7],&local_20);
    local_1c = s_P_SaveIconU_00_004736ec;
    local_20 = iVar4;
    iVar4 = func_005229AC((int *)piVar2[7],&local_20);
    switch(*(undefined1 *)(iVar5 + 0x18)) {
    default:
      iVar5 = piVar2[7];
      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x44) & 1) == 0)) {
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
        *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
      }
      if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x44) & 1) != 0)) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      break;
    case 1:
    case 3:
    case 5:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x44) & 1) != 0)) {
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      iVar5 = piVar2[7];
      if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x44) & 1) == 0)) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
        *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
      }
    }
  }
  return piVar2;
}

