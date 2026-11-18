#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_001758d8;
extern char s_SunlightPass_001758ec[];
extern char s_SunlightSpotA_001758c8[];
extern char s_SunlightSpotB_001758dc[];

// USA 0017571C <- EU 0017571C (Ghidra, non-matching)
// GLOBAL DAT_001758d8 int
// GLOBAL s_SunlightPass_001758ec string
// GLOBAL s_SunlightSpotA_001758c8 string
// GLOBAL s_SunlightSpotB_001758dc string

void func_0017571C(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar4 = DAT_001758d8;
  piVar5 = (int *)(param_1 + 0x430);
  if (*(int *)(param_1 + 0x430) == 0) goto LAB_001757e8;
  local_24 = s_SunlightSpotA_001758c8;
  local_28 = DAT_001758d8;
  uVar1 = func_00584C14(*(int *)(param_1 + 0x430),&local_28);
  local_24 = s_SunlightSpotB_001758dc;
  local_28 = iVar4;
  uVar2 = func_00584C14(*piVar5,&local_28);
  local_24 = s_SunlightPass_001758ec;
  local_28 = iVar4;
  uVar3 = func_00584C14(*piVar5,&local_28);
  if (param_2 == 0) {
    func_004CEA18(*(int *)(param_1 + 0x430),0,uVar1);
    func_004CEA18(*piVar5,1,uVar3);
    iVar4 = *piVar5;
    uVar1 = 0;
  }
  else {
    if (param_2 == 3) {
      func_004CEA18(*(int *)(param_1 + 0x430),1,uVar1);
      func_004CEA18(*piVar5,0,uVar3);
      func_004CEA18(*piVar5,0,uVar2);
      goto LAB_001757e8;
    }
    if (param_2 != 4) {
      if (param_2 == 1) {
        func_004CEA18(*(int *)(param_1 + 0x430),param_3 ^ 1,uVar1);
        func_004CEA18(*piVar5,param_3,uVar3);
        func_004CEA18(*piVar5,0,uVar2);
      }
      else {
        func_004CEA18(*(int *)(param_1 + 0x430),param_3 ^ 1,uVar2);
        func_004CEA18(*piVar5,param_3,uVar1);
        func_004CEA18(*piVar5,0,uVar3);
      }
      goto LAB_001757e8;
    }
    func_004CEA18(*(int *)(param_1 + 0x430),0,uVar1);
    func_004CEA18(*piVar5,param_3,uVar3);
    iVar4 = *piVar5;
    uVar1 = param_3 ^ 1;
  }
  func_004CEA18(iVar4,uVar1,uVar2);
LAB_001757e8:
  *(char *)(param_1 + 0x4ad) = (char)param_3;
  return;
}

