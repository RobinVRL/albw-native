#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_00338fdc;
extern char s_WindowBroken_00338ff4[];
extern char s_WindowClose_00338fe8[];
extern char s_WindowOpen_00339004[];
extern char s_Window_00338fe0[];

// USA 00338DD0 <- EU 00338DAC (Ghidra, non-matching)
// GLOBAL DAT_00338fdc int
// GLOBAL s_WindowBroken_00338ff4 string
// GLOBAL s_WindowClose_00338fe8 string
// GLOBAL s_WindowOpen_00339004 string
// GLOBAL s_Window_00338fe0 string

void func_00338DD0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar1 = DAT_00338fdc;
  piVar3 = (int *)(param_1 + 0x430);
  if (*(int *)(param_1 + 0x430) != 0) {
    if (param_2 == 0) {
      local_1c = s_Window_00338fe0;
      local_20 = DAT_00338fdc;
      uVar2 = func_00584C14(*(int *)(param_1 + 0x430),&local_20);
      func_004CEA18(*piVar3,1,uVar2);
      local_1c = s_WindowClose_00338fe8;
      local_20 = iVar1;
      uVar2 = func_00584C14(*piVar3,&local_20);
      func_004CEA18(*piVar3,1,uVar2);
      local_1c = s_WindowBroken_00338ff4;
      local_20 = iVar1;
      uVar2 = func_00584C14(*piVar3,&local_20);
      func_004CEA18(*piVar3,0,uVar2);
      local_1c = s_WindowOpen_00339004;
      local_20 = iVar1;
      uVar2 = func_00584C14(*piVar3,&local_20);
      func_004CEA18(*piVar3,0,uVar2);
      *(undefined1 *)(param_1 + 0x4c1) = 0;
      return;
    }
    local_1c = s_Window_00338fe0;
    local_20 = DAT_00338fdc;
    if (param_2 == 1) {
      uVar2 = func_00584C14(*(int *)(param_1 + 0x430),&local_20);
      func_004CEA18(*piVar3,1,uVar2);
      local_1c = s_WindowClose_00338fe8;
      local_20 = iVar1;
      uVar2 = func_00584C14(*piVar3,&local_20);
      func_004CEA18(*piVar3,0,uVar2);
      local_1c = s_WindowBroken_00338ff4;
      local_20 = iVar1;
      uVar2 = func_00584C14(*piVar3,&local_20);
      func_004CEA18(*piVar3,1,uVar2);
      local_1c = s_WindowOpen_00339004;
      local_20 = iVar1;
      uVar2 = func_00584C14(*piVar3,&local_20);
      func_004CEA18(*piVar3,0,uVar2);
      *(undefined1 *)(param_1 + 0x4c1) = 1;
      return;
    }
    uVar2 = func_00584C14(*(int *)(param_1 + 0x430),&local_20);
    func_004CEA18(*piVar3,1,uVar2);
    local_1c = s_WindowClose_00338fe8;
    local_20 = iVar1;
    uVar2 = func_00584C14(*piVar3,&local_20);
    func_004CEA18(*piVar3,0,uVar2);
    local_1c = s_WindowBroken_00338ff4;
    local_20 = iVar1;
    uVar2 = func_00584C14(*piVar3,&local_20);
    func_004CEA18(*piVar3,0,uVar2);
    local_1c = s_WindowOpen_00339004;
    local_20 = iVar1;
    uVar2 = func_00584C14(*piVar3,&local_20);
    func_004CEA18(*piVar3,1,uVar2);
    *(undefined1 *)(param_1 + 0x4c1) = 1;
  }
  return;
}

