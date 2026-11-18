#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E670(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5);
extern int func_0014F0F8(int *param_1,int *param_2,undefined1 *param_3);
extern int DAT_0014e5f4;
extern int DAT_0014e5f8;

// USA 0014E500 <- EU 0014E500 (Ghidra, non-matching)
// GLOBAL DAT_0014e5f4 int
// GLOBAL DAT_0014e5f8 int

void func_0014E500(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define local_70 (*(uint * *)(albw_frame + 0x10))
  #define local_6c (*(int *)(albw_frame + 0x14))
  #define local_68 ((uint *)(albw_frame + 0x18))
  #define uStack_29 (*(undefined1 *)(albw_frame + 0x57))
  #define local_28 ((char *)(albw_frame + 0x58))
  local_6c = 0x40;
  uStack_29 = 0;
  local_74 = DAT_0014e5f4;
  local_70 = local_68;
  (**(code **)(*param_2 + 8))(param_2);
  uVar2 = 0;
  do {
    if (*(char *)(param_2[1] + uVar2) == '\0') {
      if ((int)uVar2 < 0x40001) goto LAB_0014e57c;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_0014e57c:
  if (local_6c <= (int)uVar2) {
    uVar2 = local_6c - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(local_68,(uint *)param_2[1],uVar2);
  local_74 = DAT_0014e5f8;
  *(undefined1 *)((int)local_68 + uVar2) = 0;
  local_28[0] = '\0';
  iVar1 = func_0014F0F8(param_1,&local_74,local_28);
  if (iVar1 != 0) {
    func_0014E670((int)param_1,&local_74,param_2,(int)local_28[0],param_3);
  }
  return;
}

