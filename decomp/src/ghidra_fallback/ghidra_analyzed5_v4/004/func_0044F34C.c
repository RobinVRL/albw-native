#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0044f408;
extern undefined4 DAT_0044f40c;
extern int DAT_0044f418;
extern int DAT_0044f41c;
extern char s_InOut_0044f410[];

// USA 0044F34C <- EU 0044F324 (Ghidra, non-matching)
// GLOBAL DAT_0044f408 int
// GLOBAL DAT_0044f40c undefined4
// GLOBAL DAT_0044f418 int
// GLOBAL DAT_0044f41c int
// GLOBAL s_InOut_0044f410 string

int * func_0044F34C(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004B9A10(param_1,0);
  iVar1 = DAT_0044f408;
  iVar3 = DAT_0044f408 + -0x58;
  piVar2[0xe] = DAT_0044f408;
  *piVar2 = iVar3;
  (**(code **)(iVar1 + -0x20))(piVar2,DAT_0044f40c,0);
  piVar5 = (int *)piVar2[7];
  func_0016773C((int)piVar5,1);
  local_28 = DAT_0044f418;
  local_24 = s_InOut_0044f410;
  func_00166C20(piVar5,0,&local_28,0);
  iVar3 = 0;
  piVar2[10] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  func_002313DC((int)(piVar2 + 8));
  iVar1 = DAT_0044f41c;
  do {
    iVar4 = func_005229AC(piVar5,(int *)(iVar1 + iVar3 * 8));
    piVar2[iVar3 + 0x1d] = iVar4;
    iVar4 = piVar2[iVar3 + 0x1d];
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x44) & 1) != 0)) {
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  func_004B9958((int)piVar2,2);
  return piVar2;
}

