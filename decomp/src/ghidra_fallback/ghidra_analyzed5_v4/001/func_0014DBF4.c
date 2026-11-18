#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0014F0F8(int *param_1,int *param_2,undefined1 *param_3);
extern int func_0019A014(int param_1,int *param_2);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_001DF8F8(int param_1,int *param_2);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_00297574(int param_1,int param_2);
extern int func_00297674(int param_1,int param_2);
extern int DAT_0014dd78;
extern int DAT_0014dd7c;
extern int *DAT_0014dd80;

// USA 0014DBF4 <- EU 0014DBF4 (Ghidra, non-matching)
// GLOBAL DAT_0014dd78 int
// GLOBAL DAT_0014dd7c int
// GLOBAL DAT_0014dd80 int *

undefined4 func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(uint * *)(albw_frame + 0xc))
  #define local_70 (*(int *)(albw_frame + 0x10))
  #define local_6c ((uint *)(albw_frame + 0x14))
  #define uStack_2d (*(undefined1 *)(albw_frame + 0x53))
  #define local_2c ((char *)(albw_frame + 0x54))
  local_70 = 0x40;
  uStack_2d = 0;
  local_78 = DAT_0014dd78;
  local_74 = local_6c;
  (**(code **)(*param_2 + 8))(param_2);
  uVar4 = 0;
  do {
    if (*(char *)(param_2[1] + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_0014dc74;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_0014dc74:
  if (local_70 <= (int)uVar4) {
    uVar4 = local_70 - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(local_6c,(uint *)param_2[1],uVar4);
  local_78 = DAT_0014dd7c;
  *(undefined1 *)((int)local_6c + uVar4) = 0;
  local_2c[0] = '\0';
  iVar2 = func_0014F0F8(param_1,&local_78,local_2c);
  piVar1 = DAT_0014dd80;
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = 0;
    iVar2 = func_00297674(*DAT_0014dd80,(int)param_1);
    if (iVar2 != 0) {
      func_0019A4C4(iVar2,param_3);
      piVar3 = func_0019A014(iVar2,&local_78);
      if (piVar3 == (int *)0x0) {
        func_00297574(*piVar1,iVar2);
      }
      else {
        func_0010F1DC(param_1 + 0xfe,(int *)(param_1[0x101] + iVar2));
        param_1[0x100] = param_1[0x100] + 1;
        if (local_2c[0] != '\0') {
          func_001DF8F8((int)piVar3,param_2);
        }
        if (param_4 != 0) {
          func_0025B6A8(param_4,(int)piVar3);
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

