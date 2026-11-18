#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern char s_SplashSand_001ddcb0[];
extern char s_Splash_001ddcbc[];

// USA 001DDB70 <- EU 001DDB70 (Ghidra, non-matching)
// GLOBAL s_SplashSand_001ddcb0 string
// GLOBAL s_Splash_001ddcbc string

undefined4 func_001DDB70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_1 + 0x6d4);
  if (param_2 == 0) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0x6d8)) {
      return 0;
    }
    return func_00110848(iVar1);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x6d8))) {
    if ((*(uint *)(iVar1 + 0x3c) & 4) != 0 || (*(uint *)(iVar1 + 0x3c) & 0x40) != 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x20);
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) &&
       (0 < *(int *)(iVar2 + 4))) {
      return 0;
    }
  }
  if (param_3 == 0xc) {
    pcVar3 = s_Splash_001ddcbc;
    if (*(int *)(param_1 + 0x344) == 0) goto LAB_001ddc7c;
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0x6d8))) goto LAB_001ddc48;
  }
  else {
    if (param_3 != 6) {
      return 0;
    }
    pcVar3 = s_SplashSand_001ddcb0;
    if (*(int *)(param_1 + 0x344) == 0) {
LAB_001ddc7c:
      *(int *)(param_1 + 0x6d4) = 0;
      *(undefined4 *)(param_1 + 0x6d8) = 0;
      return 0;
    }
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0x6d8))) goto LAB_001ddc48;
  }
  func_00110848(iVar1);
LAB_001ddc48:
  func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)pcVar3);
  *(int *)(param_1 + 0x6d4) = local_18;
  *(undefined4 *)(param_1 + 0x6d8) = uStack_14;
  return 0;
}

