#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0066D78C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0045db78;
extern float DAT_0045db7c;
extern int DAT_0045db80;
extern int DAT_0045db84;

// USA 0045D9A8 <- EU 0045D980 (Ghidra, non-matching)
// GLOBAL DAT_0045db78 int *
// GLOBAL DAT_0045db7c float
// GLOBAL DAT_0045db80 int
// GLOBAL DAT_0045db84 int

void func_0045D9A8(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x88) + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x88)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x74) + 1;
  *(int *)(param_1 + 0x74) = iVar2;
  if (*(int *)(param_1 + 0x84) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x84),1,fVar6);
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0xb4) + *(char *)(param_1 + 0x9c) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0xb4) + *(char *)(param_1 + 0x9c) * 8);
  piVar5 = (int *)(*(int *)(param_1 + 0xac) + ((int)uVar1 >> 1));
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *piVar5);
  }
  (*(code *)*piVar3)(piVar5);
  iVar2 = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x98) = iVar2;
  if (*(int *)(param_1 + 0xa8) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xa8),1,fVar6);
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0xd8) + *(char *)(param_1 + 0xc0) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0xd8) + *(char *)(param_1 + 0xc0) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0xd0) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0xbc) + 1;
  *(int *)(param_1 + 0xbc) = iVar2;
  if (*(int *)(param_1 + 0xcc) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xcc),1,fVar6);
  }
  fVar6 = DAT_0045db7c;
  if (*(char *)(DAT_0045db80 + *DAT_0045db78) == '\0') {
LAB_0045db48:
    if (*(char *)(param_1 + 0xc0) != '\x02' && *(char *)(param_1 + 0xc0) != '\x03') {
      *(undefined2 *)(param_1 + 0x128) = 2;
      fVar6 = func_002317C0((undefined2 *)(param_1 + 0x128),fVar6);
      func_0066D78C((undefined4 *)(param_1 + 0xbc),2);
      return;
    }
  }
  else {
    iVar2 = 0;
    do {
      if (*(char *)(*DAT_0045db78 + iVar2 * DAT_0045db84 * 4 + 0x1742) != '\0') goto LAB_0045db48;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    if (*(char *)(param_1 + 0xc0) == '\x03') {
      *(undefined2 *)(param_1 + 0x128) = 0;
      fVar6 = func_002317C0((undefined2 *)(param_1 + 0x128),fVar6);
      func_0066D78C((undefined4 *)(param_1 + 0xbc),0);
    }
  }
  return;
}

