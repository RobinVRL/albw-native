#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_0021328c;
extern char s_GueldMan1_00213280[];
extern char s_GueldMan1_face_00213290[];
extern char s_GueldMan2_002132a0[];

// USA 0021319C <- EU 0021319C (Ghidra, non-matching)
// GLOBAL DAT_0021328c int
// GLOBAL s_GueldMan1_00213280 string
// GLOBAL s_GueldMan1_face_00213290 string
// GLOBAL s_GueldMan2_002132a0 string

void func_0021319C(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar4 = DAT_0021328c;
  piVar5 = (int *)(param_1 + 0x40c);
  if (*(int *)(param_1 + 0x40c) != 0) {
    local_24 = s_GueldMan1_00213280;
    local_28 = DAT_0021328c;
    uVar1 = func_00584C14(*(int *)(param_1 + 0x40c),&local_28);
    local_24 = s_GueldMan1_face_00213290;
    local_28 = iVar4;
    uVar2 = func_00584C14(*piVar5,&local_28);
    local_24 = s_GueldMan2_002132a0;
    local_28 = iVar4;
    uVar3 = func_00584C14(*piVar5,&local_28);
    if (param_2 == 0) {
      func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar1);
      func_004CEA18(*piVar5,0,uVar2);
      iVar4 = *piVar5;
    }
    else {
      func_004CEA18(*(int *)(param_1 + 0x40c),1,uVar1);
      func_004CEA18(*piVar5,1,uVar2);
      iVar4 = *piVar5;
    }
    func_004CEA18(iVar4,(uint)(param_2 == 0),uVar3);
  }
  return;
}

